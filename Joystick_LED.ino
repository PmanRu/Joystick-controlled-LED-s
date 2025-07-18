const int LRpin = A1;
const int UDpin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int UD = analogRead(UDpin);
  int LR = analogRead(LRpin);
  
  int yLEDSTATE = (UD > 650) ? HIGH : LOW;
  int gLEDSTATE = (UD < 350) ? HIGH : LOW;
  int rLEDSTATE = (LR > 650) ? HIGH : LOW;
  int bLEDSTATE = (LR < 350) ? HIGH : LOW;

  Serial.print("LR: ");
  Serial.print(LR);
  Serial.print(" UD: ");
  Serial.println(UD);

  digitalWrite(7, yLEDSTATE);
  digitalWrite(6, gLEDSTATE);
  digitalWrite(8, rLEDSTATE);
  digitalWrite(9, bLEDSTATE);
}



