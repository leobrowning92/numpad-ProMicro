# numpad-ProMicro

The aim of this project is to provide a log and instructional of how build
a ProMicro controlled numpad of Mechanical Keyboard switches.

For this I am using a ProMicro clone purchased from china for around the $1
mark, simply for its combination of small size, usb port, and aforementioned
price.

I have had a little experience with Arduino Unos before,
but if you are completely new to Arduinos, google Arduino tutorials,
there are plenty.

If, like me you are using a micro for the first time, I found this little bit
on Sparkfuns page to be very helpful in figuring out why my serial port wasn't
showing up on the Arduino IDE. I gather it has something to do with
[Resetting the Bootloader](https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide#ts-serial).

##singleswitchtest
Wiring was simply one pin on a MX green to pin10 on my ProMicro and the other
to GND. It should open up a new terminal (In ubuntu, mind you) and print
"Hello World".
