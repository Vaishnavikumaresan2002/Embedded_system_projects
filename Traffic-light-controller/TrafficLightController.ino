#define RED 13
#define YELLOW 12
#define GREEN 11

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void loop()
{
  // Red light ON
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
  delay(5000);

  // Green light ON
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, HIGH);
  delay(5000);

  // Yellow light ON
  digitalWrite(GREEN, LOW);
  digitalWrite(YELLOW, HIGH);
  delay(2000);
}
