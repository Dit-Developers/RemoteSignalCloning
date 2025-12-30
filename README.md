# Remote Signal Cloning & 30+ LED Animation Effects

A simple Arduino project to **clone IR remote signals** while demonstrating **LED animations**. Capture and display IR signals using an IR receiver module, with visual feedback via an LED.

---

## 📌 Features

- Capture IR remote signals and print them to the Serial Monitor.
- Blink an LED whenever a signal is received.
- Easy to extend with 30+ LED animation effects.
- Perfect for learning **IR communication** and **Arduino projects**.

---

## 🔧 Hardware Requirements

- Arduino Uno or compatible board
- IR Receiver module (e.g., VS1838B)
- LED and 220Ω resistor
- Jumper wires
- Breadboard (optional)

---

## 📝 Circuit Diagram

| Arduino Pin | Component           |
|------------|-------------------|
| Pin 2      | IR Receiver OUT    |
| Pin 13     | LED (with resistor)|
| GND        | IR Receiver GND    |
| 5V         | IR Receiver VCC    |

---

## ⚡ Installation

1. Install the **IRremote** library from Arduino Library Manager.
2. Connect the IR Receiver and LED according to the circuit diagram.
3. Upload the code to your Arduino board.

---

## 🖥️ Usage

1. Open the **Serial Monitor** at `9600 baud`.
2. Point any IR remote at the receiver and press a button.
3. Observe the LED blink and the captured IR code printed in the Serial Monitor:

```
============================
Captured Code: 0x123ABC
Signal cloned!
============================
```

4. Ready for the next signal automatically.

---

## 📂 File Structure

```
RemoteSignalCloning/
├── RemoteSignalCloning.ino
└── README.md
```

---

## 📜 Author

**Muhammad Sudais Usmani**  
GitHub: [https://github.com/Dit-Developers/RemoteSignalCloning](https://github.com/Dit-Developers/RemoteSignalCloning)

---

## ⚖️ License
