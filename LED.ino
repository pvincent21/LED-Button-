const int BUTTON_PIN = 2;  
const int LED_PIN =  12;  
int buttonState = 0;   
void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
}
void loop() {
  buttonState = digitalRead(BUTTON_PIN);
  if(buttonState == LOW)        
    digitalWrite(LED_PIN, HIGH);
  else if (buttonState == LOW) 
    digitalWrite(LED_PIN, LOW);
  else                           
    digitalWrite(LED_PIN, LOW);  // turn off LED
}