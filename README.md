# arduino-touch-smart-switch
Touch-based smart room light controller using Arduino and relay
# Touch-Based Smart Room Light Controller (Arduino)

This project implements a smart room light controller using Arduino, a touch sensor, and a relay module.

## Features
- Touch-based toggle control (ON/OFF)
- Default ON behavior (wall-switch style)
- Memory-based state handling
- Non-blocking debounce using millis()
- Relay-based load isolation
- Tested safely with DC load

## Components Used
- Arduino UNO
- Touch sensor module
- 5V relay module
- LED + resistor (for testing)

## How It Works
- off power-up, the relay starts in off state
- Each touch toggles the relay state
- Debounce is handled without using delay(), allowing scalable logic

## Future Improvements
- ESP-based Wi-Fi control
- Mobile / voice integration
