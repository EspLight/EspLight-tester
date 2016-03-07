/*
 
*/
#define switch0 0

#define Q1 5
#define Q2 4
#define Q3 12

#define clk 14
#define mosi 13

#define led 16

#define blinkdelayslow 100
#define blinkdelayfast 10

int blinkdelay = blinkdelayslow;

void setup() {
  pinMode(switch0, INPUT);

  pinMode(Q1, OUTPUT);
  pinMode(Q2, OUTPUT);
  pinMode(Q3, OUTPUT);
  pinMode(clk, OUTPUT);
  pinMode(mosi, OUTPUT);
  pinMode(led, OUTPUT);
}

void loop() {

  if(digitalRead(switch0) == false){
    blinkdelay = blinkdelayfast;
  }
  else{
    blinkdelay = blinkdelayslow;
  }

  digitalWrite(Q3, HIGH);
  delay(blinkdelay);
  digitalWrite(Q3, LOW);

  digitalWrite(Q2, HIGH);
  delay(blinkdelay);
  digitalWrite(Q2, LOW);

  digitalWrite(Q1, HIGH);
  delay(blinkdelay);
  digitalWrite(Q1, LOW);

  digitalWrite(clk, HIGH);
  delay(blinkdelay);
  digitalWrite(clk, LOW);

  digitalWrite(mosi, HIGH);
  delay(blinkdelay);
  digitalWrite(mosi, LOW);

  digitalWrite(led, HIGH);
  delay(blinkdelay);
  digitalWrite(led, LOW);
}
