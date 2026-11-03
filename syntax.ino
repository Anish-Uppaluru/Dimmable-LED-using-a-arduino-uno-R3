int mypin = A3;
int readVal;
float V2;

int dt = 10;

int greenpin = 3;
int orangepin = 5;

int brightness;

void setup() {
  Serial.begin(9600);

  pinMode(greenpin, OUTPUT);
  pinMode(orangepin, OUTPUT);
}

void loop() {

  
  readVal = analogRead(mypin);

 
  V2 = (5.0 / 1023.0) * readVal;


  brightness = map(readVal, 0, 1023, 0, 255);

  
  analogWrite(greenpin, brightness);
  analogWrite(orangepin, brightness);

  
  Serial.print("Voltage across potentiometer: ");
  Serial.print(V2);

  Serial.print(" V | Brightness: ");
  Serial.println(brightness);

  delay(dt);
}
