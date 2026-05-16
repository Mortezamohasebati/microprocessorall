<div dir="rtl">

# 🔌 مجموعه پروژه‌های آردوینو — درس ریزپردازنده

مجموعه‌ای جامع از پروژه‌های **سیستم‌های تعبیه‌شده مبتنی بر آردوینو** که در قالب درس ریزپردازنده توسعه داده شده‌اند. این مخزن شامل ۲۷ اسکچ `.ino` است که موضوعاتی از سنسورها، نمایشگرها، پروتکل‌های ارتباطی، صدا و کنترل LED را پوشش می‌دهد.

> 📄 [English Version](README.md)

---

## 📦 ساختار مخزن

```
microprocessorall/
├── CustomCharacter.ino               # کاراکتر سفارشی روی LCD
├── Humidity.ino                      # سنسور دما و رطوبت DHT11
├── Increase-decrease-brightness.ino  # کاهش و افزایش روشنایی LED با PWM
├── Light-Sequence.ino                # دنباله‌های نوری LED
├── Potentiometer-led.ino             # کنترل روشنایی LED با پتانسیومتر
├── SevSeg_Counter.ino                # شمارنده روی نمایشگر 7-segment
├── Speaker.ino                       # پخش صدا با بوزر
├── Ultrasonic-distance-meter-LCD.ino # سنسور التراسونیک + نمایش فاصله روی LCD
├── Voltage-regulation.ino            # خواندن ولتاژ آنالوگ
├── armicher.ino                      # دمو معماری ARM
├── calculator-keypad.ino             # ماشین‌حساب با کیپد و LCD
├── human-Lcd.ino                     # نمایش شکل انسان روی LCD
├── joystik.ino                       # خواندن ورودی جوی‌استیک
├── keypad.ino                        # مبانی کیپد ماتریسی
├── keypadled.ino                     # کنترل LED با کیپد
├── masslaled.ino                     # کنترل انبوه LED
├── master.ino                        # ارتباط I2C — مستر
├── namishka.ino                      # افکت سفارشی نمایشگر
├── photocell.ino                     # سنسور نوری (LDR)
├── piano.ino                         # شبیه‌سازی پیانو با بوزر
├── random.ino                        # تولید عدد تصادفی با LED و دکمه
├── salve.ino                         # ارتباط I2C — اسلیو
├── sevensgment.ino                   # نمایشگر 7-segment (کنترل دستی)
├── sevseglibreri.ino                 # نمایشگر 7-segment (با کتابخانه SevSeg)
├── stringWithPeriod.ino              # نمایش رشته با نقطه اعشار روی 7-seg
├── temperature-lm35.ino              # سنسور دمای آنالوگ LM35
└── testWholeDisplay.ino              # تست کامل نمایشگر 7-segment
```

---

## 🛠️ سخت‌افزار مورد نیاز

- **آردوینو Uno / Nano** (یا برد سازگار)

| قطعه | پروژه‌ها |
|------|---------|
| LED (۱ تا ۶ عدد) | `Light-Sequence`، `Increase-decrease-brightness`، `keypadled`، `random`، `masslaled` |
| دکمه فشاری | `keypad`، `keypadled`، `random`، `Speaker` |
| بوزر / اسپیکر | `Speaker`، `piano` |
| سنسور DHT11 | `Humidity` |
| سنسور LM35 | `temperature-lm35` |
| سنسور التراسونیک (HC-SR04) | `Ultrasonic-distance-meter-LCD` |
| سنسور نوری (LDR) | `photocell` |
| پتانسیومتر | `Potentiometer-led` |
| ماژول جوی‌استیک | `joystik` |
| کیپد ماتریسی (۴×۴) | `keypad`، `keypadled`، `calculator-keypad` |
| نمایشگر LCD (16×2) | `CustomCharacter`، `human-Lcd`، `Ultrasonic-distance-meter-LCD`، `calculator-keypad` |
| نمایشگر 7-segment (۱ یا ۴ رقمی) | `sevensgment`، `sevseglibreri`، `SevSeg_Counter`، `stringWithPeriod`، `testWholeDisplay` |
| دو برد آردوینو | `master` + `salve` (I2C) |

---

## 📚 کتابخانه‌های مورد نیاز

از طریق **Arduino IDE ← Sketch ← Include Library ← Manage Libraries** نصب کنید:

| کتابخانه | پروژه‌های مرتبط |
|----------|----------------|
| `SevSeg` | `sevseglibreri`، `SevSeg_Counter`، `stringWithPeriod`، `testWholeDisplay` |
| `Keypad` | `keypad`، `keypadled`، `calculator-keypad` |
| `LiquidCrystal_I2C` | `CustomCharacter`، `human-Lcd`، `calculator-keypad` |
| `Wire` | `master`، `salve` |
| `DHT` | `Humidity` |

---

## 🚀 نحوه استفاده

**۱. کلون کردن مخزن:**
```bash
git clone https://github.com/Mortezamohasebati/microprocessorall.git
cd microprocessorall
```

**۲. باز کردن پروژه در Arduino IDE:**
از منوی `File ← Open` فایل `.ino` مورد نظر را باز کنید.

**۳. نصب کتابخانه‌های لازم** (جدول بالا را ببینید)

**۴. انتخاب برد و پورت:**
- `Tools ← Board ← Arduino Uno`
- `Tools ← Port ← (پورت COM شما)`

**۵. آپلود و اجرا!**
در صورت نیاز، Serial Monitor را از `Tools ← Serial Monitor` باز کنید.

---

## 🔬 توضیح پروژه‌ها

### 🎵 صدا

**`Speaker.ino`** — با فشار دادن دکمه‌ها، بوزر با استفاده از تابع `tone()` صدا تولید می‌کند.

**`piano.ino`** — یک پیانوی ۷ کلیدی شبیه‌سازی می‌کند. هر پین (۴ تا ۱۰) به یک نت موسیقی نگاشت شده است. با فشار دادن سنسور مربوطه، صدای آن نت از طریق بوزر (پین ۱۱) پخش می‌شود.

| نت | فرکانس |
|----|--------|
| C | 655 Hz |
| D | 294 Hz |
| E | 330 Hz |
| F | 349 Hz |
| G | 392 Hz |
| A | 440 Hz |
| B | 493 Hz |

---

### 💡 کنترل LED

**`Increase-decrease-brightness.ino`** — با استفاده از PWM و تابع `analogWrite()`، روشنایی LED را به‌آرامی افزایش و کاهش می‌دهد.

**`Light-Sequence.ino`** — الگوهای مختلف نوری را روی چند LED اجرا می‌کند.

**`Potentiometer-led.ino`** — مقدار پتانسیومتر را با `analogRead()` خوانده و به روشنایی LED نگاشت می‌کند.

**`keypadled.ino`** — هر کلید کیپد یک LED خاص را فعال می‌کند.

**`masslaled.ino`** — چندین LED را همزمان کنترل می‌کند.

**`random.ino`** — شبیه‌سازی تاس: با فشار دکمه (پین A0) یک عدد تصادفی ۱ تا ۶ تولید شده و LED متناظر (پین‌های ۲ تا ۷) روشن می‌شود. دباونس دکمه از طریق مقایسه وضعیت انجام می‌شود.

---

### 📟 نمایشگرها

**`sevensgment.ino`** — به‌صورت دستی یک نمایشگر ۷-سگمنت تک‌رقمی را کنترل می‌کند و اعداد ۰ تا ۹ را نشان می‌دهد.

**`sevseglibreri.ino`** — با کتابخانه `SevSeg` اعداد را روی نمایشگر ۷-سگمنت ۴ رقمی نمایش می‌دهد.

**`SevSeg_Counter.ino`** — شمارنده‌ای روی نمایشگر ۷-سگمنت ۴ رقمی پیاده‌سازی می‌کند.

**`stringWithPeriod.ino`** — رشته‌هایی با نقطه اعشار را با `sevseg.setChars()` روی نمایشگر ۷-سگمنت نشان می‌دهد.

**`testWholeDisplay.ino`** — تمام سگمنت‌های نمایشگر را روشن می‌کند تا صحت سیم‌بندی تأیید شود.

**`CustomCharacter.ino`** — کاراکترهای پیکسلی سفارشی را با `lcd.createChar()` روی LCD تعریف و نمایش می‌دهد.

**`human-Lcd.ino`** — یک انیمیشن شکل انسان را با استفاده از کاراکترهای سفارشی روی LCD نمایش می‌دهد.

---

### 🌡️ سنسورها

**`Humidity.ino`** — دما و رطوبت را از سنسور DHT11 می‌خواند و از طریق Serial Monitor نمایش می‌دهد.

**`temperature-lm35.ino`** — ولتاژ آنالوگ سنسور LM35 را از پین A0 می‌خواند، به درجه سانتی‌گراد تبدیل کرده و هر ثانیه از طریق Serial ارسال می‌کند.

**`photocell.ino`** — میزان نور محیط را از سنسور LDR خوانده و مقدار آنالوگ را روی Serial نمایش می‌دهد.

**`Voltage-regulation.ino`** — مقادیر خام ولتاژ آنالوگ را با `analogRead()` خوانده و از طریق Serial نمایش می‌دهد.

**`Ultrasonic-distance-meter-LCD.ino`** — سنسور HC-SR04 را فعال می‌کند، فاصله را از زمان بازگشت امواج محاسبه کرده و روی LCD نمایش می‌دهد.

---

### ⌨️ ورودی‌ها

**`keypad.ino`** — خواندن پایه کیپد ماتریسی با کتابخانه `Keypad`.

**`joystik.ino`** — محورهای X/Y و دکمه جوی‌استیک را از طریق پین‌های آنالوگ می‌خواند.

**`calculator-keypad.ino`** — ماشین‌حساب کامل: عبارات را از کیپد می‌خواند و نتیجه را روی LCD نمایش می‌دهد. پشتیبانی از `+`، `-`، `×`، `÷`.

---

### 🔗 ارتباط I2C

**`master.ino`** — آردوینو را به عنوان **مستر** I2C تنظیم می‌کند. داده را با `Wire.write()` ارسال و با `Wire.read()` دریافت می‌کند.

**`salve.ino`** — آردوینو را به عنوان **اسلیو** I2C تنظیم می‌کند. داده‌های ورودی را با `Wire.onReceive()` مدیریت کرده و پاسخ را با `Wire.onRequest()` ارسال می‌کند.

> پین‌های SDA ↔ SDA و SCL ↔ SCL دو برد را به هم وصل کنید. GND مشترک داشته باشید.

---

## 🧠 مفاهیم آموزشی پوشش داده شده

- ورودی/خروجی دیجیتال — `digitalRead()`، `digitalWrite()`
- ورودی/خروجی آنالوگ — `analogRead()`، `analogWrite()` (PWM)
- ارتباط سریال — `Serial.print()`، Serial Monitor
- پروتکل I2C — کتابخانه `Wire`، تنظیم مستر/اسلیو
- اتصال سنسورها — DHT11، LM35، HC-SR04، LDR
- کنترل نمایشگر — LCD (کاراکتر سفارشی)، ۷-سگمنت (دستی و کتابخانه)
- دستگاه‌های ورودی — کیپد ماتریسی، جوی‌استیک، دکمه
- تولید صدا — تابع `tone()`، فرکانس نت‌های موسیقی
- دباونس دکمه — مقایسه وضعیت
- تولید تصادفی — تابع `random()`

---

## 📜 مجوز

این پروژه متن‌باز است و استفاده از آن برای اهداف آموزشی آزاد است.

</div>
