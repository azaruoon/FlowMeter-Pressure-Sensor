# Arduino flow meter:

Copyright 22 Mar 2023, Sirous Azaruoon
# Arduino flow meter Sensor Code:
In this project, we are going to build a flow meter sensor and pressure sensor using Arduino  and displaying it on a LCD display.

flow sensor has a rotor and a Hall effect sensor. When fluid flows through the rotor and sensor, the rotor rotates. This causes the sensor to output the pulses.

The flow meter sensor outputs pulse of a variable frequency that is proportional to the rate of fluid flowing through the pipe. The number of litres flowing through the sensor can be calculated by counting the pulses from the output of the sensor. The pulse output is given to the Arduino interrupt pin using a pull-up resistor. The pulses are counted and accordingly the number of litres are calculated by the Arduino program. Thus, the number of litres is displayed on the LCD.
## The Formula for the calculation of flow meter sensor:
According to the datasheet of Flow Sensor, the output pulse frequency can be calculated with this equation:

Sensor Frequency (Hz) = k * Q (Liters/s)

Q(L/min) = f*60/k

Q(L/hour) = f * 60 * 60 / k

![image](https://user-images.githubusercontent.com/106908138/229242343-df48e5e2-58de-437d-97e2-5cbd5e096c42.png)
# Arduino pressure sensor:

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

4.	TFT 2.4″ Arduino Shield Touch
 
![image](https://user-images.githubusercontent.com/106908138/229245276-8cff807d-0dbe-4cf2-8106-f3da7cd28276.png)




 
 
  
  
  
  
  
  
  
  
  
  
  
  
 
 
 

 
