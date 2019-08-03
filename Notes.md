
# Notes for porting code on ZRIB board

- FAN is plugged in HEATER2 due to pin error in the code
- Microstepping isn't software driven so the step/unit for extruder needs to be *8
- Extruder dir is inverted due to motor wiring
- Extruder motor is a 0.9 deg/step, so the step/turn is multiplied by 2
- Inductive probe need to inverse the Zmin input
- Use of a silicon sock is highly recommended, otherwise thermal runaway occur. Maybe change the header for one more powerful ^
