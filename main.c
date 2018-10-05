/* This program was made for the purpose of
 *
 * Author: Angel Olvera
 * October 4, 2018
 * Mail: angelolvera00@gmail.com
 */
#include <stdio.h>
#include <math.h>
//Variables are declared
int main() {
    double angle;
    double radians;
    double sine;
    double cosine;
    double tangent;
    double secant;
    double cosecant;
    double cotangent;
//The user is asked to enter an angle in degrees
    printf("Enter an angle in degrees: \n");
    scanf("%lf", &angle);
//The functions for angle to radian, sine and cosine are expressed here
    radians = ((angle * M_PI)) / (180);
    sine = sin(radians);
    cosine = cos(radians);

//As all angles have sines and cosines, they don't need specific instructions
    printf("The angle in radians is: %lf\n", radians);
    printf("The sine of the angle is %lf\n", sine);
    printf("The cosine of the angle is %lf\n", cosine);
//As 90 doesn't have a tangent or a secant, it's away from the others to not mess up the program.
    if (angle == 90) {
        cosecant = ((1) / (sin(radians)));
        cotangent = ((1) / (tan(radians)));
        printf("This angle does not have a tangent\n");
        printf("This angle does not have a secant\n");
        printf("The cosecant of the angle is %lf\n", cosecant);
        printf("The cotangent of the angle is %lf\n", cotangent);
//As 0 doesn't have a  cosecant or a cotangent, it's away from the others to not mess up the program.
    } else if (angle == 0) {
        tangent = tan(radians);
        secant = ((1) / (cos(radians)));
        printf("This angle does not have a cosecant\n");
        printf("This angle does not have a cotangent\n");
        printf("The tangent of the angle is %lf\n", tangent);
        printf("The secant of the angle is %lf\n", secant);
//All the other angles are here and their tangent, secant, cosecant and cotangent are calculated.
    } else if (angle != 0 && angle != 90) {
        tangent = tan(radians);
        secant = ((1) / (cos(radians)));
        cosecant = ((1) / (sin(radians)));
        cotangent = ((1) / (tan(radians)));
        printf("The tangent of the angle is %lf\n", tangent);
        printf("The secant of the angle is %lf\n", secant);
        printf("The cosecant of the angle is %lf\n", cosecant);
        printf("The cotangent of the angle is %lf\n", cotangent);
// Gives an error because the user didn't enter a number.
    } else {
        printf("Only numbers");
    }
    return 0;
}