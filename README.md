# Embedded C Case Study

# Problem Statement 
![activity_list](https://github.com/nuPURohit/Embedded_C_LTTS/blob/main/simulation/activity_list.png)
1. Button Sensor will check the passenger is seated or not
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



#### CI and Code Quality

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/Bharathgopal/Emb-C/actions/workflows/Compile.yml/badge.svg)](https://github.com/Bharathgopal/Emb-C/actions/workflows/Compile.yml)|[![Cppcheck](https://github.com/Bharathgopal/Emb-C/actions/workflows/CodeQulaity.yml/badge.svg)](https://github.com/Bharathgopal/Emb-C/actions/workflows/CodeQulaity.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/643b7ca2b2dc4daba1e700c216bb87d9)](https://www.codacy.com/gh/Bharathgopal/Emb-C/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=Bharathgopal/Emb-C&amp;utm_campaign=Badge_Grade)|

## Wiki Documentation
* System [SETUP](https://github.com/Bharathgopal/Emb-C/wiki)
