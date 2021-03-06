# Lab8-Elijah-Story

## #1
- I am going to use the motion detector to detect if there is anything moving that might “scare” the lantern. 
- Below is the diagram of the wiring. The motion detector gets 5V power from the arduino and is also connected to ground. The output from the detector goes to pin 8. The LED gets power from pin 13 that goes through a 330 resistor. The negative pin of the LED goes to ground.
<img src="images/motion-detector.jpg" width = 640>
<img src="images/motion-setup.jpg" height = 640>

- Here is the link to the video for the motion detector. [motion detector](https://photos.app.goo.gl/KPLEsoRSF497ePZUA)
- The sensor works and seems to be reliable if the motion is large enough and far away.
- All of the code was taken from the tutorial link in the lab. With that said, I don’t think it will be too hard to write my own code for the sensor. The sensor only outputs HIGH or LOW so it makes the code easy and more like a trigger.
- To use this input I will need to have the sensor outside of the lantern which is unfortunate.

## #2
- At first I wanted to use the sound sensor so that I could conceal it in the lantern without it being seen while still able to give input. As I describe in the code, the sensitivity is not very high or I could not figure out how to increase it. So the code does work, however it is not helpful for the lantern.
- Below is the diagram of the wiring. The sound sensor gets 5V power from the arduino and is also connected to ground. The signal from the sensor goes to analog pin A2. The LED gets power from pin ~10 that goes through a 330 resistor. The negative pin of the LED goes to ground.
<img src="images/sound-sensor.jpg" width = 640>
<img src="images/sound-setup.jpg" height = 640>

- Here is the link to the video for the sound sensor. [Sound sensor](https://photos.app.goo.gl/k5L6Rtpti5GeLmVY8)
- I got it to work a little bit better, but it still can not “hear” a snap of the fingers.
- It would have been very covenant to just have the sound board next to the LED hidden inside the dome.

## #3
- One LED turns on any time the motion sensor sends an output signal, and the other outputs the same signal, but only when it is “on”. The button turns the second LED “on/off”.
- Here is the video [sensor and button](https://photos.app.goo.gl/m6CFtA6b3D8oZ75K6)
- Below is a diagram of the wiring. The motion sensor simply gets power from a 5v supply and is connected to ground. Its output is connected to pin 8. For the button, the power runs to the button and waits. Once the button is pressed, the power splits and goes to pin 7 and passes through a 10k resistor before grading to ground. There are two LEDs. They both have the power come from a pin, pass through a 330 resistor and out to ground. The only difference is, one LED gets its power from pin 13, and the other from 12.
<img src="images/motionButton-diagram.jpg" width = 640>
<img src="images/motionButton-setup.jpg" width = 640>

## #4
- I think that the RGB + Button code from lab7 is already efficient. You can add any RGB color value to the array and it will not break anything. The code also uses variables to control how fast the light fades. I also used a function to set the pin values to help keep the code a little cleaner. A direct link to the code can be found [HERE](https://github.com/ElijahStory/Lab7-Elijah-Story/blob/main/Elijah-Story-RGB-Button/Elijah-Story-RGB-Button.ino)

## #5
This is the current state of my lantern. I have a button set up to manually turn the lantern on/off. When the lantern is on, it has a flickering effect. While it is on, the motion sensor detects somebody, the light turns off for 3 seconds. After the time has passed, it turns back on and flickers.

- Here is the link to the video showing the lantern. [Lantern video](https://photos.app.goo.gl/UeqtupwXRJcqedDh6)
- Below is a diagram of the wiring. The motion sensor simply gets power from a 5v supply and is connected to ground. Its output is connected to pin 8. For the button, the power runs to the button and waits. Once the button is pressed, the power splits and goes to pin 7 and passes through a 10k resistor before grading to ground. The LED has the power that comes from pin 11, passes through a 330 resistor and out to ground.
<img src="images/lantern-diagram.jpg" width = 640>
<img src="images/out-lantern.jpg" height = 640>
<img src="images/in-lantern.jpg" height = 640>
