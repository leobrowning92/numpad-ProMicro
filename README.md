# numpad-ProMicro

The aim of this project is to provide a log and instructional of how build
a ProMicro controlled numpad of Mechanical Keyboard switches. I am new to
mechanical keyboards so this is by a beginner for beginners.

For this I am using a ProMicro clone purchased from china for around the $1
mark, simply for its combination of small size, usb port, and aforementioned
price.

I have had a little experience with Arduino Unos before,
but if you are completely new to Arduinos, google Arduino tutorials,
there are plenty.

If, like me you are using a micro for the first time, I found this little bit
on Sparkfuns page to be very helpful in figuring out why my serial port wasn't
showing up on the Arduino IDE. I gather it has something to do with
[Resetting the Bootloader](https://learn.sparkfun.com/tutorials/pro-micro--fio-v3-hookup-guide/troubleshooting-and-faq).

## singleswitchtest
Wiring was simply one pin on a MX green to pin10 on my ProMicro and the other
to GND. It should open up a new tab (if you are in chrome) and then head
to your favorite page.

I used the [Arduino Modifier Guide](https://www.arduino.cc/en/Reference/KeyboardModifiers)
to determine the codes needed for modifier keys.

## sixwitchtest
at the moment i have my switches mapped for a couple of things
(keep in mind I am running Ubuntu 16.04 and the shortcuts are for that)
- new terminal
- lock computer
- copy to new tab and search (in chrome)
- git clone <clipboard>
- nautilus .
- open up your favorite webpage (in chrome)

stl for the case can be found on [here](http://www.thingiverse.com/thing:1735671) and images of the final build [here](http://imgur.com/gallery/pZwyw)
