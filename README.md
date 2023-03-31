# Flowmeter-Pressure-Sensor
# Arduino flow meter:

# Copyright 22 Mar 2023, Sirous Azaruoon
# Arduino flow meter Sensor Code:
# In this project, we are going to build a flow meter sensor and pressure sensor using Arduino  and displaying it on a LCD display.
# flow sensor has a rotor and a Hall effect sensor. When fluid flows through the rotor and sensor, the rotor rotates. This causes the sensor to output the pulses.
# The flow meter sensor outputs pulse of a variable frequency that is proportional to the rate of fluid flowing through the pipe. The number of litres flowing through the sensor can be calculated by counting the pulses from the output of the sensor. The pulse output is given to the Arduino interrupt pin using a pull-up resistor. The pulses are counted and accordingly the number of litres are calculated by the Arduino program. Thus, the number of litres is displayed on the LCD.
## The Formula for the calculation of flow meter sensor:
According to the datasheet of Flow Sensor, the output pulse frequency can be calculated with this equation:
# Sensor Frequency (Hz) = k * Q (Liters/s)
# Q(L/min) = f*60/k
# Q(L/hour) = f*60*60/k

![image](https://user-images.githubusercontent.com/106908138/229242343-df48e5e2-58de-437d-97e2-5cbd5e096c42.png)



 
 
  
  
  
  
  
  
  
  
  
  
  
  
 
 
 

 
