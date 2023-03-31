

#include <Adafruit_GFX.h>
#include <MCUFRIEND_kbv.h>  
#include <Adafruit_TFTLCD.h>


#define LCD_CS A3
#define LCD_CD A2
#define LCD_WR A1
#define LCD_RD A0
#define LCD_RESET A4
MCUFRIEND_kbv tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);

#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF
#define ORANGE 0xFD20
#define GREENYELLOW 0xAFE5
#define NAVY 0x000F
#define DARKGREEN 0x03E0
#define DARKCYAN 0x03EF
#define MAROON 0x7800
#define PURPLE 0x780F
#define OLIVE 0x7BE0
#define LIGHTGREY 0xC618
#define DARKGREY 0x7BEF
  volatile int flow_frequency; 
  unsigned int l_min; 
  unsigned int m3_hour; 
 unsigned int gal_min; 
  unsigned int ft3_min; 
  unsigned char flowsensor = 21; // Sensor Input
  unsigned long currentTime;
  unsigned long cloopTime;
  unsigned int hz;
  //-------------------------pressure code---------------------------
  unsigned long currentTimepressure;
  unsigned long cloopTimepressure;
  unsigned char pressure_pin = A15;
   float sensorVoltage;
   float bar;
   float psi;
  volatile float voltage;
  


  void flow() 
{
  flow_frequency++;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  tft.begin();
  
 //tft.fillScreen(RED);
 tft.setTextSize(2);


    tft.println("PRESSURE : Up to 300 BAR");
tft.println("CODE BY  Sirous_3141@yahoo.com");
    delay(6000);
  pinMode(flowsensor, INPUT);
  digitalWrite(flowsensor, HIGH); 
  attachInterrupt(2, flow, RISING); 

  currentTime = millis();
  cloopTime = currentTime;
    currentTimepressure = millis();
    cloopTimepressure = currentTimepressure;


  tft.fillScreen(BLACK);
  
  tft.drawRect(0, 0, 240, 320, WHITE);
  tft.setCursor(10,10);
  tft.println("     Flow rate ");
  tft.setCursor(10,40);
  tft.print(" L/Min   M3/Hour");  // Print litres/hour
  tft.setCursor(10,90);
  tft.print(" Gal/Min F3/Min");  // Print litres/hour

  tft.setCursor(10,140);
  tft.print("Pulse frequency(Hz)");

  tft.setCursor(10,200);
  tft.print("    pressure");  

  //tft.drawFastHLine(0,190,320, RED);
  //------------------------------------------pressure code-----------------
  pinMode(pressure_pin, INPUT);
  //digitalWrite(pressure_pin, LOW);
  tft.setCursor(10,230);
  tft.print("Bar        Psi");
  tft.setCursor(10,270);
  tft.print("Vout Sensor");
   tft.setCursor(170,270);
  tft.print("Alarm");
}
void flow_control(void) {
  
  // put your main code here, to run repeatedly:
    currentTime = millis();
  
  if (currentTime >= (cloopTime + 1000))
  {
    cloopTime = currentTime; // Updates cloopTime
                 // Pulse frequency (Hz) = 77.4185Q, Q is flow rate in L/min.
    
    l_min = ((flow_frequency * 60) / 77.4185); // (Pulse frequency x 60 min) / 77.4185Q = flowrate in L/hour
    m3_hour = (l_min * 0.06);
    gal_min = (l_min * 0.26417205);
    ft3_min = (l_min * 0.03531467);
    hz = (flow_frequency);
    flow_frequency = 0; // Reset Counter
    
    tft.setCursor(20,60);
    tft.fillRect(10, 60, 220, 15, RED);
    tft.println(l_min, DEC);

    tft.setCursor(120,60); 
    tft.println(m3_hour, DEC); 

    tft.setCursor(20,110);
    tft.fillRect(10, 110, 220, 15, RED);
    tft.println(gal_min, DEC);

    tft.setCursor(120,110); 
    tft.println(ft3_min, DEC);

    tft.setCursor(100,170); 
    tft.fillRect(10, 170, 220, 15, RED);
    tft.println(hz, DEC);
    

    //delay(100);
    
  }
  
//==============================================================================================
}
void loop() {
  flow_control();
  pressure_cal();
}
//=============================================================================================
void pressure_cal(void) {
    currentTimepressure = millis();
  
  if (currentTimepressure >= (cloopTimepressure + 5000))
  {
    cloopTimepressure = currentTimepressure; // Updates cloopTime
    
   analogReference(DEFAULT);
     sensorVoltage = analogRead(pressure_pin);   // sensor voltage A15
      voltage = ((sensorVoltage * 4.83) / 1024);
      Serial.println(voltage);
      Serial.println(sensorVoltage);
      if (voltage < 0.87)
      {
   tft.setCursor(30,250);
   tft.fillRect(10, 250, 220, 15, RED);
   tft.print("open circuit");
     tft.setCursor(10,290);
  tft.fillRect(10, 290, 130, 15, RED);
  tft.print(voltage);
    
      }
        else if (voltage < 5)  // between 0.5 and 4.5 now...
  {
   bar = ((voltage*119.4029850746)-125.3731343284);  

 
   psi = bar * (14.50377377);           // Conversion PSI to BAR

  //Serial.println(voltage);
  Serial.println(bar);
  tft.setCursor(10,250);
  tft.fillRect(10, 250, 220, 15, RED);
  tft.print(bar);
  tft.setCursor(120,250);
   tft.print(psi);

  tft.setCursor(10,290);
  tft.fillRect(10, 290, 130, 15, RED);
  tft.print(voltage);
  //delay(1000);
  }
  if(bar>350)
  {
    tft.setCursor(10,290);
  tft.print("              HIGH");
  }

  }
  }
