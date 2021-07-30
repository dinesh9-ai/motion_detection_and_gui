# motion_detection_and_gui
***AIM:***
The main aim of this project is to detect any object moving infront of P.I.R sensor (passive infrared) and calculate the distance using Ultra sonic sensor and passes this value to serial port. Using python we read values from serial port and displays it out along with sound and reading distance out loud.
***Sensors Requried:***
P.I.R sensor, Ultra sonic sensor

The project consists of two files main.py and ul_pir.ino . The main.py consists of code that is responsible for reading values from serial port and displaying, playing warning
sound and reading distance out loud.
The ul_pir.ino consists of code that detects object using P.I.R and computes distance by readings of ultra sonic sensor and passes it to serial.port
