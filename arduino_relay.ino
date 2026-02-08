// Touch-based Smart Room Light Controller
// Touch toggles ON/OFF using relay
int relayPin=8;// Touch sensor output pin
int touchPin=2;// Touch sensor output pin
int relayState=LOW;// Light starts OFF
int lastTouchState=LOW;// Previous touch state
unsigned long lastDebounceTime=0;
unsigned long debounceDelay=200;
void setup() {
  pinMode(relayPin,OUTPUT);
  pinMode(touchPin,INPUT);

}

void loop() {
  int touchState=digitalRead(touchPin);
  unsigned long currentTime=millis();
  if (touchState==HIGH&&lastTouchState==LOW){
    if (currentTime-lastDebounceTime>=debounceDelay){
      relayState=!relayState;// Toggle state
      digitalWrite(relayPin,relayState); // Apply state
      lastDebounceTime=currentTime;
    }
  }
  lastTouchState=touchState;
}
