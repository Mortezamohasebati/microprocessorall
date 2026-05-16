# 🔌 Arduino Microprocessor Projects Collection

A comprehensive collection of **Arduino-based embedded systems projects** developed as part of a Microprocessor course. This repository contains 27 hands-on `.ino` sketches covering sensors, displays, communication protocols, audio, and more — each designed to teach a specific concept in embedded systems and microcontroller programming.

> 📄 [نسخه فارسی مستندات](README_FA.md)

---

## 📦 Repository Structure

```
microprocessorall/
├── CustomCharacter.ino               # Custom characters on LCD
├── Humidity.ino                      # DHT11 temperature & humidity sensor
├── Increase-decrease-brightness.ino  # PWM LED brightness fading
├── Light-Sequence.ino                # LED light sequences
├── Potentiometer-led.ino             # Potentiometer-controlled LED brightness
├── SevSeg_Counter.ino                # 7-segment counter (with SevSeg library)
├── Speaker.ino                       # Buzzer / speaker tones
├── Ultrasonic-distance-meter-LCD.ino # Ultrasonic sensor + LCD distance meter
├── Voltage-regulation.ino            # Analog voltage reading
├── armicher.ino                      # ARM architecture demo
├── calculator-keypad.ino             # Keypad calculator with LCD output
├── human-Lcd.ino                     # Human figure display on LCD
├── joystik.ino                       # Joystick input reading
├── keypad.ino                        # Matrix keypad basics
├── keypadled.ino                     # Keypad-controlled LEDs
├── masslaled.ino                     # Mass LED control
├── master.ino                        # I2C Master communication
├── namishka.ino                      # Custom display effect
├── photocell.ino                     # LDR / photocell light sensor
├── piano.ino                         # Piano simulation with buzzer
├── random.ino                        # Dice roll — random LED + button
├── salve.ino                         # I2C Slave communication
├── sevensgment.ino                   # 7-segment display (manual control)
├── sevseglibreri.ino                 # 7-segment display (SevSeg library)
├── stringWithPeriod.ino              # Strings with decimal points on 7-seg
├── temperature-lm35.ino              # LM35 analog temperature sensor
└── testWholeDisplay.ino              # Full 7-segment display test
```

---

## 🛠️ Hardware Requirements

- **Arduino Uno / Nano** (or compatible board)

| Component | Projects |
|-----------|----------|
| LED (×1 to ×6) | `Light-Sequence`, `Increase-decrease-brightness`, `keypadled`, `random`, `masslaled` |
| Push Button | `keypad`, `keypadled`, `random`, `Speaker` |
| Buzzer | `Speaker`, `piano` |
| DHT11 Sensor | `Humidity` |
| LM35 Sensor | `temperature-lm35` |
| Ultrasonic Sensor (HC-SR04) | `Ultrasonic-distance-meter-LCD` |
| Photocell (LDR) | `photocell` |
| Potentiometer | `Potentiometer-led` |
| Joystick Module | `joystik` |
| Matrix Keypad (4×4) | `keypad`, `keypadled`, `calculator-keypad` |
| LCD Display (16×2) | `CustomCharacter`, `human-Lcd`, `Ultrasonic-distance-meter-LCD`, `calculator-keypad` |
| 7-Segment Display (1 or 4 digit) | `sevensgment`, `sevseglibreri`, `SevSeg_Counter`, `stringWithPeriod`, `testWholeDisplay` |
| Two Arduino Boards | `master` + `salve` (I2C) |

---

## 📚 Required Libraries

Install via **Arduino IDE → Sketch → Include Library → Manage Libraries**:

| Library | Used In |
|---------|---------|
| `SevSeg` | `sevseglibreri`, `SevSeg_Counter`, `stringWithPeriod`, `testWholeDisplay` |
| `Keypad` | `keypad`, `keypadled`, `calculator-keypad` |
| `LiquidCrystal_I2C` | `CustomCharacter`, `human-Lcd`, `calculator-keypad` |
| `Wire` | `master`, `salve` |
| `DHT` | `Humidity` |

---

## 🚀 How to Use

1. **Clone the repository:**
```bash
git clone https://github.com/Mortezamohasebati/microprocessorall.git
cd microprocessorall
```

2. **Open a project** in Arduino IDE via `File → Open → <filename>.ino`

3. **Install the required libraries** listed above

4. **Select your board and port:**
   - `Tools → Board → Arduino Uno`
   - `Tools → Port → (your COM port)`

5. **Click Upload** and open Serial Monitor if needed (`Tools → Serial Monitor`)

---

## 🔬 Project Descriptions

### 🎵 Audio

**`Speaker.ino`** — Plays tones through a buzzer using the `tone()` function when buttons are pressed.

**`piano.ino`** — Simulates a 7-key piano. Each pin (4–10) maps to a musical note. Pressing the sensor on that pin plays the corresponding frequency through a buzzer on pin 11.

| Note | Frequency |
|------|-----------|
| C | 655 Hz |
| D | 294 Hz |
| E | 330 Hz |
| F | 349 Hz |
| G | 392 Hz |
| A | 440 Hz |
| B | 493 Hz |

---

### 💡 LED Control

**`Increase-decrease-brightness.ino`** — Smoothly fades an LED in and out using PWM via `analogWrite()`.

**`Light-Sequence.ino`** — Runs LED light patterns and sequences across multiple LEDs.

**`Potentiometer-led.ino`** — Reads a potentiometer via `analogRead()` and maps its value to LED brightness.

**`keypadled.ino`** — Each key press on the matrix keypad activates a different LED.

**`masslaled.ino`** — Simultaneously controls a large set of LEDs.

**`random.ino`** — Dice roll: pressing a button (on pin A0) generates a random number 1–6 and lights the corresponding LED (pins 2–7). Button debouncing is handled via state comparison.

---

### 📟 Displays

**`sevensgment.ino`** — Manually drives a single-digit 7-segment display, cycling digits 0–9.

**`sevseglibreri.ino`** — Uses the `SevSeg` library to show digits on a 4-digit 7-segment display.

**`SevSeg_Counter.ino`** — Incremental counter on a 4-digit 7-segment display.

**`stringWithPeriod.ino`** — Displays strings with embedded decimal points using `sevseg.setChars()` and `sevseg.refreshDisplay()`.

**`testWholeDisplay.ino`** — Lights all segments to verify correct wiring of the 7-segment display.

**`CustomCharacter.ino`** — Creates and renders custom pixel-art characters on an LCD using `lcd.createChar()`.

**`human-Lcd.ino`** — Animates a human figure on the LCD using custom character definitions.

---

### 🌡️ Sensors

**`Humidity.ino`** — Reads temperature and humidity from a DHT11 sensor and outputs readings via Serial Monitor.

**`temperature-lm35.ino`** — Reads analog voltage from an LM35 on pin A0, converts to °C, and prints to Serial every second.

**`photocell.ino`** — Reads ambient light level from an LDR and outputs the analog value via Serial.

**`Voltage-regulation.ino`** — Reads and displays raw analog input voltage values via `analogRead()` and Serial.

**`Ultrasonic-distance-meter-LCD.ino`** — Triggers an HC-SR04 ultrasonic sensor, calculates distance from echo time, and displays the result in cm on an LCD.

---

### ⌨️ Input Devices

**`keypad.ino`** — Basic matrix keypad reading using the `Keypad` library.

**`joystik.ino`** — Reads X/Y analog axes and button press from a joystick module.

**`calculator-keypad.ino`** — Full 4-function calculator: reads input from the matrix keypad and displays results on an LCD. Supports `+`, `-`, `×`, `÷`.

---

### 🔗 Communication (I2C)

**`master.ino`** — Configures Arduino as I2C **Master**. Sends data to slave using `Wire.write()` and receives responses with `Wire.read()`.

**`salve.ino`** — Configures Arduino as I2C **Slave**. Handles incoming data via `Wire.onReceive()` and answers requests via `Wire.onRequest()`.

> Connect SDA ↔ SDA and SCL ↔ SCL between both boards. Share a common GND.

---

## 🧠 Concepts Covered

- Digital I/O — `digitalRead()`, `digitalWrite()`
- Analog I/O — `analogRead()`, `analogWrite()` (PWM)
- Serial communication — `Serial.print()`, Serial Monitor
- I2C protocol — `Wire` library, Master/Slave configuration
- Sensor interfacing — DHT11, LM35, HC-SR04, LDR
- Display control — LCD (custom chars), 7-segment (manual & library)
- Input handling — Matrix keypad, joystick, push buttons
- Audio generation — `tone()`, musical note frequencies
- Button debouncing — state comparison
- Randomness — `random()` function

---

## 📜 License

This project is open source and free to use for educational purposes.
