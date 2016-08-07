#include <Bounce2.h>


#include <Keyboard.h>
const int inputPin =10;

Bounce button0=Bounce();

void setup() {
  // put your setup code here, to run once:
  pinMode(inputPin, INPUT_PULLUP);
  digitalWrite(inputPin, HIGH);
  button0.attach(inputPin);
  Keyboard.begin();
  

}

void loop() {
  // put your main code here, to run repeatedly:
  button0.update();
  if (button0.fallingEdge()){

    //key command ctrl+alt+t to open a terminal on ubuntu
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('t');
    Keyboard.releaseAll();
    
    delay(500);

    //a clasic Hello world string
    Keyboard.print("Hello World");
  }
  

}
