/*
  Introduction to Arduino Programming:
  ************************************

  This file introduces the fundamental structure of an Arduino program.
  It covers:
  1. The "setup()" function
  2. The "loop()" function
  3. Basic syntax and structure

  Official C++ Reference: https://cplusplus.com/doc/tutorial/program_structure/
  Official Arduino Reference: https://www.arduino.cc/reference/en/
*/

// The setup() function runs once when the Arduino is powered on or reset.
// It is typically used to initialize settings like pin modes or communication.
void setup()
{
  // Initialize serial communication between the Arduino and computer at 9600 baud.
  // This allows us to send messages from the Arduino to the Serial Monitor.
  Serial.begin(9600);

  // Print an initial message to the Serial Monitor (only once)
  Serial.println("Arduino Programming - File 1: Basic Structure");
}

// The loop() function runs continuously after setup() is completed.
// This is where the main logic of your program goes.
void loop()
{
  // Send a message to the Serial Monitor
  Serial.println("Hello, Arduino!");

  // Pause the program for 1 second (1000 milliseconds)
  // This creates a delay between messages, so they don’t appear too fast
  delay(1000);
}

/*
  NOTE:
  - setup() runs once at the beginning when the Arduino is turned on or reset.
  - loop() runs over and over forever while the board is powered.
  - Serial.begin(9600): Starts communication at 9600 bits per second (baud rate).
  - Serial.println(): Sends a message to the Serial Monitor and moves to a new line.
  - delay(1000): Pauses the program for 1 second to control the speed of output.

  TO TRY:
  - Open the Serial Monitor (magnifying glass icon in Arduino IDE) to see the output.
  - Try changing the message or delay time and observe the effect.
*/