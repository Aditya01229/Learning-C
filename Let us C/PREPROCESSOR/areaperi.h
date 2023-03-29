#include <stdio.h>
#include <math.h>
#define PI 3.14159265359
#define AREACIRCLE(r) (PI * r * r)
#define PERICIRCLE(r) (2 * PI * r)
#define AREASQUARE(s) (s * s)
#define PERISQUARE(s) (4 * s)
#define SP(x, y, z) ((x + y + z)/2)
#define AREATRIANGLE(x, y, z) (sqrt(SP(x, y, z) * (SP(x, y, z) - a)* (SP(x, y, z) - b) * (SP(x, y, z) - c)))
#define PERITRIANGLE(x, y, z) (x + y + z)