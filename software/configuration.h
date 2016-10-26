/*   motion Esp4motion board */ 

#define Machine  (0)   // 0=3D (4 stepstick 3 mosfet 3 endstop), 1=CNC(3 stepstick, 2 mosfet,1pwm 3 endstop), 2=Laser (2 stepstick, 3 pwm, 2 endstop) , 3=Plotter (2 stepstick, 3 pwm, 2 endstop)

#define VERSION        (1)  // firmware version
#define BAUD           (115200)  // How fast is the Arduino talking?
#define MAX_BUF        (64)  // What is the longest message Arduino can store?
#define STEPS_PER_TURN (400)  // depends on your stepper motor and microstepping of your driver.  most are 200.
#define MAX_FEEDRATE   (50000) 
#define MIN_FEEDRATE   (0.01)

#define STEPS_MM_XY       (80)
#define STEPS_MM_Z        (80)
#define STEPS_MM_E        (80)

#define xstoplogic    (true)
#define ystoplogic    (true)
#define zstoplogic    (true)


// for arc directions
#define ARC_CW          (1)
#define ARC_CCW         (-1)
// Arcs are split into many line segments.  How long are the segments?
#define MM_PER_SEGMENT  (1)

