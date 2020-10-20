// The following is a simple stepper motor control procedures
# define EN 8 // stepper motor enable , active low
# define X_DIR 5 // X -axis stepper motor direction control
# define Y_DIR 6 // y -axis stepper motor direction control
# define Z_DIR 7 // z axis stepper motor direction control
# define X_STP 2 // x -axis stepper control
# define Y_STP 3 // y -axis stepper control
# define Z_STP 4 // z -axis stepper control


int steps = 6400; //steps to move
int stepDelay = 1000; //delay between each pause 

void step (boolean dir, byte dirPin, byte stepperPin, int steps)
{
    digitalWrite (dirPin, dir);
    delay (0);//pause between steps 
    for (int i = 0; i <steps; i++) 
    {
        digitalWrite (stepperPin, HIGH);
        delayMicroseconds (stepDelay);
        digitalWrite (stepperPin, LOW);
        delayMicroseconds (stepDelay);
    }
}

void setup () {   // The stepper motor used in the IO pin is set to output
    pinMode (X_DIR, OUTPUT); pinMode (X_STP, OUTPUT);
    pinMode (Y_DIR, OUTPUT); pinMode (Y_STP, OUTPUT);
    pinMode (Z_DIR, OUTPUT); pinMode (Z_STP, OUTPUT);
    pinMode (EN, OUTPUT);
    digitalWrite (EN, LOW);
}

void loop () {
    //step (false, X_DIR, X_STP, steps); // X axis motor reverse 1 ring. 
    step (false, Y_DIR, Y_STP, steps); // y axis motor reverse 1 ring. 
    //step (true, Z_DIR, Z_STP, steps); // z axis motor reverse 1 ring.
    //delay (100);
//    step (true, X_DIR, X_STP, steps); // X axis motor forward 1 laps.
//    step (true, Y_DIR, Y_STP, steps); // y axis motor forward 1 laps.
//    step (true, Z_DIR, Z_STP, steps); // z axis motor forward 1 laps.
} 
