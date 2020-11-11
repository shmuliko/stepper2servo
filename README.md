# stepper2servo
change cnc grbl commands to servo commands (with another arduino)

if you work with grbl (tm) to your cnc, and you want use [to z axis etc.] with servo motor, can use with this code and another arduino board

1. set your angle in "upDeg" and "downDeg".
2. burn the code on second arduino board.
3. connect the inputs [2-3] to cnc shield. [or relevante pins]
4. connect servo motor to board.

this code work with interrupt, if you want change the input pins, attention to your board documentation.

this code programing [and work good] for arduino dou
