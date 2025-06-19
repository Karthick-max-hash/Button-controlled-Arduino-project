# Button-controlled-Arduino-project
# 🔔 Arduino LED & Buzzer with Button Control (Tinkercad Simulation)

This is a basic Arduino project built in Tinkercad that demonstrates:
- A continuously *blinking LED* (heartbeat style)
- A *button* that activates both:
  - A *second LED*
  - A *buzzer alarm*

It uses the Arduino's internal pull-up resistor to simplify the button circuit.

---

## 🛠 Components Used

| Component        | Quantity |
|------------------|----------|
| Arduino Uno R3   | 1        |
| Breadboard       | 1        |
| Push Button      | 1        |
| Piezo Buzzer     | 1        |
| LEDs             | 2        |
| 220Ω Resistors   | 2        |
| Jumper Wires     | As needed |

---

## 🔌 Circuit Description

- *Pin 6: Controls the **blinking LED*
- *Pin 13: Controls the **second LED*, ON when button pressed
- *Pin 5: Controls the **buzzer*, ON when button pressed
- *Pin 12: Reads **button input* using INPUT_PULLUP mode
- *GND*: Shared ground rail for buzzer, LEDs, and button

---

## 🔄 Behavior

- The first LED (Pin 6) *blinks continuously* to simulate a heartbeat or power indicator.
- When the *button is pressed, the buzzer and second LED (Pin 5 and 13) **turn ON*.
- When the button is released, both the buzzer and second LED *turn OFF*.

---

## 🧠 Key Feature

### Internal Pull-Up Resistor

Using:
```cpp
pinMode(button, INPUT_PULLUP);

## STATUS

Tested on Tinkercad
Beginner-friendly
No external resistors required for button

Author
Created by S.Karthick
For learning and educational purpose
