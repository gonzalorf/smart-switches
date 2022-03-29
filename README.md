# smart-switches
Relays control to turn the lights on or off in my house.

This is the first automation project for my home. It will be extended to support motion sensors and other features.

```mermaid
flowchart LR
Switches[Buttons] --> Arduino[Arduino Nano]
Arduino --> Relays[Relays]
Power[220 volts] --> Relays
Relays --> Lights[Lights]
```

10 buttons (pins 2-11 as inputs with pullup), 8 relays (pins 12-19 as outputs). 

## What I learned with this project:
- Writing code and uploading it to the microcontroller.
- Working with 220 volt inputs to light lamps.
- Basic electronic.
- The Debounce concept and how to handle it: https://www.arduino.cc/en/Tutorial/BuiltInExamples/Debounce/


Demo video:

[![Watch the video](https://github.com/gonzalorf/smart-switches/blob/main/demo.webp)](https://github.com/gonzalorf/smart-switches/blob/main/demo.webp)
