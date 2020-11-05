//Elijah Story
//11-5-2020
//NMD211 Lab8

//This was an attempt at using the sound board. 
//It works, but the sensitivity of the board is not very high (or I don’t know how to boost it). 
//A wiring diagram is in the README.

const int soundIn = A2; //pin for board input
const int ledOut = 10;  //pin for LED output

int soundLevel;         //the current output of the board
int trigger;            //the min level from board to trigger

void setup() {
  Serial.begin(9600);       //used to see the value given by board

  //set the modes of pins
  pinMode(soundIn, INPUT);
  pinMode(ledOut, OUTPUT);

  trigger = 200;           //at what level the sound triggers
}

void loop() {
  soundLevel = analogRead(soundIn); //gets the value from the board
  Serial.println(soundLevel);       //prints the value to the monitor

  if(soundLevel > trigger){         //if the level from the board meets the threshold 
    analogWrite(ledOut, 255);       //turns the LED on
    delay(1000);                    //keeps the light on for a second
  }else{
    analogWrite(ledOut, 0);         //turns the light out
  }

}
