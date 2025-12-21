#include <math.h>
#include <stdio.h>

int main() {
double x = 3.3, y = 1.1;

printf("Ceil of %.1lf = %.1lf\n", x, ceil(x)); // Rounds up
printf("Ceil of %.1lf = %.1lf\n", y, ceil(y)); // Rounds up
printf("Floor of %.1lf = %.1lf\n", x, floor(x)); // Rounds down
printf("%.1lf raised to the power %.1lf = %.1lf\n", x, y, pow(x, y)); // Power
printf("Square root of %.1lf = %.1lf\n", x, sqrt(x)); // Square root
printf("%d" ,(int)x);

return 0;
}