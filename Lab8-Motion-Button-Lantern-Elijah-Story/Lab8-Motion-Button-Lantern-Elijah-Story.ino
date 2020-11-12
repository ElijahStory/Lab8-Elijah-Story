//Elijah Story
//11-6-2020
//NMD211 Lab8

int lanternLed = 11;            // pin for lantern LED
int sensorInput = 8;            // input pin (for PIR sensor)
int buttonInput = 7;            // input for button

int val = 0;                    // variable for reading the pin status
boolean state = false;          // if the sensor input is "on"
int button = 0;                 //if the button is pressed
int buttonLast = 0;             //stores what the button was last pressed
int level;

void setup() {
  pinMode(lanternLed, OUTPUT);   // declare LED as output
  pinMode(sensorInput, INPUT);  // declare sensor as input
  pinMode(buttonInput, INPUT);  // declare sensor as input

  Serial.begin(9600);
}

void loop() {
  Serial.println(state);              //prints the "on/off" sensor status
  button = digitalRead(buttonInput);  //gets button input
  if (button == HIGH) {               //if the button is pressed
    if(button != buttonLast){         //if the button is opposite last status
      state = !state;                 //changes the "state" of state
    }
  }
  buttonLast = button;                //updates the last button status

  if (!state) {
    digitalWrite(lanternLed, 0);  // turn button LED OFF
  }

  val = digitalRead(sensorInput);  // read input value

  if (val == HIGH) { // check if the input is HIGH
    if (state) {
      level = random(100,255);
      digitalWrite(lanternLed, level);  // turn lantern LED ON
    }

  } else {
    digitalWrite(lanternLed, 0);  // turn lantern LED OFF
  }
}
