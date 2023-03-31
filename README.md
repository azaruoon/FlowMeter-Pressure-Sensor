# Flowmeter-Pressure-Sensor
# Arduino flow meter:

Copyright 22 Mar 2023, Sirous Azaruoon

Arduino flow meter Sensor Code:
In this project, we are going to build a flow meter sensor and pressure sensor using Arduino  and displaying it on a LCD display.
flow sensor has a rotor and a Hall effect sensor. When fluid flows through the rotor and sensor, the rotor rotates. This causes the sensor to output the pulses.
The flow meter sensor outputs pulse of a variable frequency that is proportional to the rate of fluid flowing through the pipe. The number of litres flowing through the sensor can be calculated by counting the pulses from the output of the sensor. The pulse output is given to the Arduino interrupt pin using a pull-up resistor. The pulses are counted and accordingly the number of litres are calculated by the Arduino program. Thus, the number of litres is displayed on the LCD.
