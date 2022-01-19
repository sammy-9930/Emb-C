# Embedded C Programming with GITLAB 
This case study is focused on simulating a heater controller in a car.

# Problem Statement 
![activity_list](https://github.com/nuPURohit/Embedded_C_LTTS/blob/main/simulation/activity_list.png)
1. Button Sensor will check the passenger is seated or not.
2. Temperature sensor works as :

ADC Value (Temp Sensor)| Output PWM
----------|----------
0-200 | 20% - 20 °C
210-500 | 40% - 25 °C
510-700 | 70% - 29 °C
710-1024 | 95% - 33 °C

3. Display CDD-CRO will give the temperature value by showing PWM
4. Led Actuator shows the driver is seated.
5. Heater will check the heater button is ON.
6. USART is used to display temperature on serial monitor 

# Implementation 
1. Passengers seating status and status of heater switch are indicated by two switches. If both these conditions are satisfied, LED glows.
2. Sensing of the temperature is done using a potentiometer.
3. The analog value provided by potentiometer is converted to a PWM signal which will be displayed on CRO.
4. The data in terms of temperature is transmitted with the help of USART and shown in the Serial Monitor.



### CI 

|Build|Cppcheck|CodeQuality|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/sammy-9930/Emb-C/actions/workflows/compile.yml/badge.svg)](https://github.com/sammy-9930/Emb-C/actions/workflows/compile.yml) |[![Cppcheck](https://github.com/sammy-9930/Emb-C/actions/workflows/Cppcheck.yml/badge.svg)](https://github.com/sammy-9930/Emb-C/actions/workflows/Cppcheck.yml)|[![CodeQuality](https://github.com/sammy-9930/Emb-C/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/sammy-9930/Emb-C/actions/workflows/CodeQuality.yml)

## ACTIVITY IN ACTION 
## ON
![heateron](https://github.com/sammy-9930/Emb-C/blob/main/documentation/heateron.JPG)
## OFF
![heateroff](https://github.com/sammy-9930/Emb-C/blob/main/documentation/heateroff.JPG)



## Wiki Documentation
* System [SETUP](https://github.com/Bharathgopal/Emb-C/wiki)
