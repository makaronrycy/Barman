const int photoPin = A0;
const int BUZZ_PIN = 6;
const int DIODE_PIN = 5;
void setup() {
  // put your setup code here, to run once:
  pinMode(photoPin, INPUT);
  pinMode(BUZZ_PIN, OUTPUT);
  pinMode(DIODE_PIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light_val = analogRead(photoPin);
  Serial.println(light_val);
  if(light_val > 100){
    tone(BUZZ_PIN,1600);
    digitalWrite(DIODE_PIN, HIGH);
  }else{
    noTone(BUZZ_PIN);
    digitalWrite(DIODE_PIN, LOW);
  }
  delay(100);
}
