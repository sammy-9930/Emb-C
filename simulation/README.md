# HeaterController Project In Action

|ON|OFF|
|:--:|:--:|
|![on](https://github.com/sammy-9930/Emb-C/blob/main/simulation/heateron.png)|![off](https://github.com/sammy-9930/Emb-C/blob/main/simulation/heateroff.png)|

## Code 
```
	for(;;)
	{
        change_led_state(HIGH);
		delay_ms(LED_ON_TIME);
        change_led_state(LOW);
		delay_ms(LED_OFF_TIME);	
	}
```
