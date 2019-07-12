#include <EasyButton.h>
#include <LED.h>

#define BUTTON_PIN 3
LED  relay(4);
EasyButton button(BUTTON_PIN);

void setup() {
  Serial.begin(115200);
  button.begin();
  button.onPressed(onPressed);
}

void loop() {
  button.read();  
}

void onPressed() {
  Serial.println("Button has been pressed!");
  relay.switchLED();
}
