#include <Bounce2.h>
#include <Keyboard.h>

//I have used pin 10 on my board for my switch
const int inputPin =10;

Bounce button0=Bounce();

void setup() {
  // Sets up the input pin for your single switch
  pinMode(inputPin, INPUT_PULLUP);
  digitalWrite(inputPin, HIGH);
  button0.attach(inputPin);

  //starts the keyboard emulator
  Keyboard.begin();
  

}

void loop() {
  // put your main code here, to run repeatedly:
  button0.update();
  if (button0.fallingEdge()){

    //key command ctrl+t to open a new tab
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    Keyboard.releaseAll();
    
    delay(500);

    //a clasic Hello world string
    Keyboard.print("reddit.com/r/mechanicalkeyboards");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
  }
  

}
