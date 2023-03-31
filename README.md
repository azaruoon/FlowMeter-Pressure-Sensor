# Arduino flow meter:

Copyright 22 Mar 2023, Sirous Azaruoon
## Arduino Flow Meter Sensor Code:
In this project, we are going to build a flow meter sensor and pressure sensor using Arduino  and displaying it on a LCD display.

Flow sensor has a rotor and a Hall effect sensor. When fluid flows through the rotor and sensor, the rotor rotates. This causes the sensor to output the pulses.

The flow meter sensor outputs pulse of a variable frequency that is proportional to the rate of fluid flowing through the pipe. The number of litres flowing through the sensor can be calculated by counting the pulses from the output of the sensor. The pulse output is given to the Arduino interrupt pin using a pull-up resistor. The pulses are counted and accordingly the number of litres are calculated by the Arduino program. Thus, the number of litres is displayed on the LCD.
## The Formula For The Calculation Of Flow Meter Sensor:
According to the datasheet of Flow Sensor, the output pulse frequency can be calculated with this equation:

Sensor Frequency (Hz) = k * Q (Liters/s)

Q(L/min) = f * 60 / k

Q(L/hour) = f * 60 * 60 / k

![image](https://user-images.githubusercontent.com/106908138/229242343-df48e5e2-58de-437d-97e2-5cbd5e096c42.png)
## Arduino Pressure Sensor:

Arduino can only measure voltage signals it can not "read" current signals. All I do is use a resistor. 0 to 20 mA through a 250 Ohm precision resistor gives me 0 to 5 volts.

![image](https://user-images.githubusercontent.com/106908138/229244551-a826d671-24ca-4d31-afe2-9419df439f8d.png)
![image](https://user-images.githubusercontent.com/106908138/229244569-e4e287ce-c695-46a2-9edb-ee9f995a873a.png)

Your uc (Micro-controller) A/D (Analog to Digital Converter) is a 10-bit device or 2^10 = 1024 so full scale is 1024 bits and if 5 volts is your reference then 0 to 5 volts = 0 to 1023 bits.

We are using the header file of the LCD, which eases our interfacing the LCD with Arduino, and the pins A0, A1, A2, A3 are allotted for data transfer between LCD and Arduino. The sensor's output pin is connected to pin A15,21 of Arduino MEGA.

Channels A15: Analog pressure transducer sensor;

 Channel 21: Turbine flow Sensor;
 
## Parts List:

1.	Flowmeter Sensor

![image](https://user-images.githubusercontent.com/106908138/229244977-b264f155-a947-484c-b269-514bd0983408.png)
![image](https://user-images.githubusercontent.com/106908138/229244996-9a32e7bb-51c6-4874-9867-4fc976224cc3.png)

2.	Arduino Mega2560

![image](https://user-images.githubusercontent.com/106908138/229245463-b88bd7f1-eefb-465c-b8f0-27ccb06f906b.png)
![image](https://user-images.githubusercontent.com/106908138/229245493-8871a48f-631e-439e-a696-8ab551c009e8.png)

3.	TFT 2.4″ Arduino Shield Touch
 
![image](https://user-images.githubusercontent.com/106908138/229245276-8cff807d-0dbe-4cf2-8106-f3da7cd28276.png)

4.	Pressure Sensor

![image](https://user-images.githubusercontent.com/106908138/229245641-6b652b89-230f-48af-90f9-d6dab95d20f5.png)

5.	XL4015 5A DC-DC Step Down Adjustable Power Supply Module Buck Converter

![image](https://user-images.githubusercontent.com/106908138/229245742-652a53d3-f75f-4b22-8012-f4b93a274213.png)
![image](https://user-images.githubusercontent.com/106908138/229245766-f4fe83c1-7f66-4197-95a8-06a3f7b55655.png)

6.	XL6009E1 DC DC Boost Converter Module

![image](https://user-images.githubusercontent.com/106908138/229245818-b801c9a9-b9e7-4c14-8897-5da0b987ea55.png)
![image](https://user-images.githubusercontent.com/106908138/229245826-cf0b5694-196d-4ca4-b459-c687f7e82d7b.png)

7.	Li-ion rechargeable 9V batteries

![image](https://user-images.githubusercontent.com/106908138/229245961-a1cb2f3d-ede4-4c16-8d97-fdc5813abc74.png)

8.	Pushbutton Switch
 
 ![image](https://user-images.githubusercontent.com/106908138/229246001-5210d04f-531c-46dc-8bba-1fad747c3f4a.png)

 9.	Resistor And Capacitor
  
![image](https://user-images.githubusercontent.com/106908138/229246052-5bda8a08-a5d5-47dd-ace2-bb278dc86c1d.png)
  
Then we test the Arduino with the PWM wave generator as shown below (The frequency shown on 
the screen is equal to the multimeter and is 111-113 hertz):
  
![image](https://user-images.githubusercontent.com/106908138/229246108-1c088999-7648-46d1-8963-c74a44f5dc8f.png)
  
![image](https://user-images.githubusercontent.com/106908138/229246269-021399fb-a720-4164-a50e-4a79f3d1238e.png)
 
And we measure the Arduino input and pressure sensor output voltage with a multimeter for testing according to the figure below (The voltage shown on the screen is equal to the multimeter and is 1.07 volts):  
  
![image](https://user-images.githubusercontent.com/106908138/229246321-ccfbd5a8-6934-4e28-8cef-905e5716f369.png)
  
You can also see the complete assembly in the video and figures below. I hope you enjoyed the tutorial and the content was useful, if you have any problems, please send them to sirous_3141@yahoo.com or WhatsApp 00989373052792.

![image](https://user-images.githubusercontent.com/106908138/229246457-32240157-4142-4d21-b42b-f9d8114aa5d4.png)
  
![image](https://user-images.githubusercontent.com/106908138/229246498-0bb8b5ef-dbf4-4165-b89e-2a64780ab654.png)

![image](https://user-images.githubusercontent.com/106908138/229246526-8b688f19-3750-470f-b04c-d5d60b341d47.png)

![image](https://user-images.githubusercontent.com/106908138/229246553-7a0314dc-b7f7-400c-8ce5-5d38c2dc5c28.png)

![image](https://user-images.githubusercontent.com/106908138/229246577-237fb52d-22ad-440a-a035-8913c3a21df9.png)

  
 
 
 

 
