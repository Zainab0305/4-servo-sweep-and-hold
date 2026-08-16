# Task1: 4-servo sweep and hold

A simple Arduino project (built on Tinkercad) that drives 4 servo motors through two sequential motions:

1. **Sweep motion** for 2 seconds (motors move back and forth repeatedly).
2. **Final hold** at a 90-degree angle for all motors.

## How it works

- The code uses the `millis()` function to track elapsed time since the program started, avoiding long `delay()` calls that would block the rest of the code.
- During the first 2 seconds (2000 ms), the angle gradually moves from 0 to 180 degrees and back from 180 to 0, repeating continuously (sweep motion).
- Once the 2 seconds are up, all motors immediately hold at a 90 degree angle.



https://github.com/user-attachments/assets/8c678ae7-de7c-46df-b8bf-877bd10390ad

