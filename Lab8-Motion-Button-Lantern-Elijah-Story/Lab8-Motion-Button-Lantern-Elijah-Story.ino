//Elijah Story
//11-6-2020
//NMD211 Lab8

int motionLed = 13;             // pin for LED controled by sensor
int buttonLed = 12;             // pin for LED controled by sensor and button
int sensorInput = 8;            // input pin (for PIR sensor)
int buttonInput = 7;            // input for button

int val = 0;                    // variable for reading the pin status
boolean state = false;          // if the sensor input is "on"
int button = 0;
int buttonLast = 0;

void setup() {
  pinMode(motionLed, OUTPUT);   // declare LED as output
  pinMode(buttonLed, OUTPUT);   // declare LED as output
  pinMode(sensorInput, INPUT);  // declare sensor as input
  pinMode(buttonInput, INPUT);  // declare sensor as input

  Serial.begin(9600);
}

void loop() {
  Serial.println(state);
  button = digitalRead(buttonInput);
  if (button == HIGH) {
    if(button != buttonLast){
      state = !state;
    }
  }
  buttonLast = button;

  if (!state) {
    digitalWrite(buttonLed, LOW);  // turn button LED OFF
  }

  val = digitalRead(sensorInput);  // read input value

  if (val == HIGH) { // check if the input is HIGH
    digitalWrite(motionLed, HIGH);  // turn sensor LED ON
    if (state) {
      digitalWrite(buttonLed, HIGH);  // turn button LED ON
    }

  } else {
    digitalWrite(motionLed, LOW); // turn LED OFF
    digitalWrite(buttonLed, LOW);  // turn button LED OFF

  }
}
