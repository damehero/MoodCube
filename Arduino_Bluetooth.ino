#include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX
int voltagePin1 = 2;
int voltagePin2 = 3;
int voltagePin3 = 4;

// if pressed then these will be 1 until not pressed
int button1 = 0;
int button2 = 0;
int button3 = 0;


void setup() {
  Serial.begin(9600);
  mySerial.begin(38400);
  pinMode(voltagePin1, OUTPUT);
  pinMode(voltagePin2, OUTPUT);
  pinMode(voltagePin3, OUTPUT);

  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);

  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
}

void loop() {
  if(digitalRead(5) == HIGH && button1 == 0) {
    mySerial.print("R"); //red
    Serial.print("R");
    button1 = 1;
  }
  else if(digitalRead(5) == LOW) {
    button1 = 0;
  }
 
  
  if(digitalRead(6) == HIGH && button2 == 0) {
    mySerial.write("G"); //red
    Serial.print("G");
    button2 = 1;
  }
  else if(digitalRead(6) == LOW) {
    button2 = 0;
  }

  
  if(digitalRead(7) == HIGH && button3 == 0) {
    mySerial.write("B"); //sad
    Serial.print("B");
    button3 = 1;
  }
  else if(digitalRead(7) == LOW) {
    button3 = 0;
  }

        
}
