#include "stdio.h"
#include "math.h"
#include "main.h"


// Variant 3
int main(int argc, char**argv){
    double z1 = calcZ1(222);
    double z2 = calcZ2(333);

    printf("Z1 = %f\n", z1);
    printf("Z2 = %f\n", z2);

}


double calcZ1(double a){
    double numerator = sin(2*a) + sin(5 * a) - sin(3 * a);
    double denominator = cos(a) + 1 - 2 * pow(sin(a), 2);
    return numerator/denominator;
}

double calcZ2(double a){
    return 2 * sin(a);
}