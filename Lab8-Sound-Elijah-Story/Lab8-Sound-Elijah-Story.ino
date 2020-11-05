const int soundIn = A2;
const int ledOut = 10;
int soundLevel, trigger;

void setup() {
  Serial.begin(9600);
  pinMode(soundIn, INPUT);
  pinMode(ledOut, OUTPUT);

  trigger = 200;
}

void loop() {
  soundLevel = analogRead(soundIn);
  Serial.println(soundLevel);

  if(soundLevel > trigger){
    analogWrite(ledOut, 255);
    delay(1000);
  }else{
    analogWrite(ledOut, 0);
  }

}
