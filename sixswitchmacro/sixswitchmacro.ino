#include <Bounce2.h>
#include <Keyboard.h>

//I have used pin 10 on my board for my switch
const int inputPin = 10;

Bounce button0 = Bounce();
Bounce button1 = Bounce();
Bounce button2 = Bounce();
Bounce button3 = Bounce();
Bounce button4 = Bounce();
Bounce button5 = Bounce();

Bounce button[6] = {
  Bounce(),
  Bounce(),
  Bounce(),
  Bounce(),
  Bounce(),
  Bounce()
};

void setup() {
  // Sets up the input pin for your single switch
  button0.attach(inputPin);

  for (int i = 4; i <= 9; i++) {
    pinMode(13 - i, INPUT_PULLUP);
    digitalWrite(13 - i, HIGH);
    button[i - 4].attach(13 - i);
  }
  //starts the keyboard emulator
  Keyboard.begin();


}

void loop() {
  // put your main code here, to run repeatedly:
  button[0].update();
  if (button[0].fallingEdge()) {

    //opens new linux terminal
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('t');
    Keyboard.releaseAll();

  }
  button[1].update();
  if (button[1].fallingEdge()) {

 
    //locks computer
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_ALT);
    Keyboard.press('l');
    Keyboard.releaseAll();

  }
  button[2].update();
  if (button[2].fallingEdge()) {


    //browser copy, paste in new tab and search
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('c');
    Keyboard.releaseAll();
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    Keyboard.releaseAll();
    delay(500);
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('v');
    Keyboard.releaseAll();
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
  }
  button[3].update();
  if (button[3].fallingEdge()) {

    //clones a coppied git repo in terminal
    Keyboard.print("git clone ");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    Keyboard.press('v');
    Keyboard.releaseAll();
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
    
  }
  button[4].update();
  if (button[4].fallingEdge()) {

    //opens the ubuntu file browser in pwd in terminal
    Keyboard.print("nautilus .");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
  }
  button[5].update();
  if (button[5].fallingEdge()) {

    //key command ctrl+t to open a new tab
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press('t');
    Keyboard.releaseAll();

    delay(500);

    //opens your favorite site
    Keyboard.print("reddit.com/r/mechanicalkeyboards");
    Keyboard.press(KEY_RETURN);
    Keyboard.releaseAll();
  }


}
