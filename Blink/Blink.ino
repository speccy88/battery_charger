#define LED_RED 7
#define BUTTON 8
#define DELAY_SLOW 2000
#define DELAY_FAST 500

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_RED, OUTPUT);
  pinMode(BUTTON, INPUT_PULLUP);
}

void loop() {
  if (!digitalRead(BUTTON))
  {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(LED_RED, HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(LED_RED, LOW);
  } 
  
}
