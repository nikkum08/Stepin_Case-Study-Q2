# Requirements
## Introduction
The concept of heated seats is adopted by almost every latest models by all automobile company these days like Toyota, Honda, KIA, etc, the company is offering heated seats in the cars to provide comfort as in some places temperature are too low (below 5 degree celcius to even in negative) and the dashboard centralized AC is not capable to maintain proper warmer temperature in cabin. Keeping this idea a prototype module is implemented in this project.

## Objective
* To provide comfortable required temperature by warming the seat.
* The centralized heater in vehicles work well, but this car’s seat warmer is close to your body allowing you to warm up faster. It will warms up the body before the rest   of the vehicle does.
* Can be controlled through a knob to set the temperature as per the requirement and also it will be maintained automatically.

## Components needed (Hardware and Software)
### Hardware components
* Atmega 328 microcontroller
* Button sensor (To detect if person is seated or not)
* Temperature Sensor 
* Heater
* Led
* LCD 16*2

### Softwares used
* CodeBlocks (for writting and debugging code)
* Simulide (for simulation)

## SWOT Analysis
### Strengths
* The body will get warmer faster as compared to whole cabin
* It is fully automatic, temperature of the heater will be controlled by the sensor
* Provide comfortable situation to driver as well as the passengers

### Weaknesses

## 4 W's and 1 H

### Who
* Anyone seating in the car as per the requirement

### What
* Automatic seat warmer inorder to get comfortable temperature in car

### When
* When the temperature of surrounding is too less during winter season and need the body to be warm while driving so that can able to drive comfortablly

### Why
* To provide a appropriate temperature to body while driving

## High Level Requirements
|Id | Descriptions |
|---|---|
|HLR-1 | Button sensor to check driver is seated or not|
|HLR-2 | Temperature sensor to detect in cabin temperature|
|HLR-3 | LED actuator shows the driver is seated or not |
|HRL-4 | Display the temperature value in LCD by taking PWM values |

## Low Level Requirements 
|ID|HLD- ID | ADC value | Temp |
|---|---|---|---|
|LLR-1| HLR-2 | 0-200 | 20 degree celcius|
|LLR-2| HLR-2 | 210-500 | 25 degree celsius |
|LLR-3 | HLR-2 | 510-700 | 29 degree celcius |
|LLR-4 | HLR-2 | 710-1024| 33 degree celcius |


