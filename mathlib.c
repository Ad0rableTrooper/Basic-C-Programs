#include <stdio.h>
#include <math.h>

/*
This program provides information about the functions available in the C math library
*/

int main() {
    int input;
    printf("Welcome to the C Math Library program!\n");
    printf("Here is a list of available functions:\n\n");
    char setOfFunc[][10] = {"acos", "acosh", "asin", "asinh", "atan", "atanh", "cbrt", "ceil", "cos", "cosh", "exp", "fabs", "floor", "hypot", "log", "log10", "modf", "pow", "sin", "sinh", "sqrt", "tan", "tanh"};
    for(int i = 0; i < sizeof(setOfFunc) / sizeof(setOfFunc[0]); i++) {
        printf("%d. %s\n", i+1, setOfFunc[i]);
    }
    printf("Enter the number beside the required function to operate: ");
    scanf("%d", &input);
    printf("\n");
    switch(input) {
        case 1: {
            printf("acos Function:\n");
            printf("The acos() function returns the arc cosine (inverse cosine) of a number in radians.\n");
            printf("Syntax: double acos(double x)\n");
            printf("Arguments: The acos() function takes a single argument x, where -1 <= x <= 1.\n");
            printf("Returns: The acos() function returns the arc cosine of x in radians.\n");
            break;
        }
        case 2: {
            printf("acosh Function:\n");
            printf("The acosh() function returns the inverse hyperbolic cosine of a number.\n");
            printf("Syntax: double acosh(double x)\n");
            printf("Arguments: The acosh() function takes a single argument x, where x >= 1.\n");
            printf("Returns: The acosh() function returns the inverse hyperbolic cosine of x.\n");
            break;
        }
        case 3: {
            printf("asin Function:\n");
            printf("The asin() function returns the arc sine (inverse sine) of a number in radians.\n");
            printf("Syntax: double asin(double x)\n");
            printf("Arguments: The asin() function takes a single argument x, where -1 <= x <= 1.\n");
            printf("Returns: The asin() function returns the arc sine of x in radians.\n");
            break;
        }
        case 4: {
            printf("asinh Function:\n");
            printf("The asinh() function returns the inverse hyperbolic sine of a number.\n");
            printf("Syntax: double asinh(double x)\n");
            printf("Arguments: The asinh() function takes a single argument x.\n");
            printf("Returns: The asinh() function returns the inverse hyperbolic sine of x.\n");
            break;
        }
        case 5: {
            printf("atan Function:\n");
            printf("The atan() function returns the arc tangent (inverse tangent) of a number in radians.\n");
            printf("Syntax: double atan(double x)\n");
            printf("Arguments: The atan() function takes a single argument x.\n");
            printf("Returns: The atan() function returns the arc tangent of x in radians.\n");
            break;
        }
        case 6: {
            printf("atanh Function:\n");
            printf("The atanh() function returns the inverse hyperbic tangent of a number.\n");
            printf("Syntax: double atanh(double x)\n");
            printf("Arguments: The atanh() function takes a single argument x, where -1 < x < 1.\n");
            printf("Returns: The atanh() function returns the inverse hyperbolic tangent of x.\n");
            break;
        }
        case 7: {
            printf("cbrt Function:\n");
            printf("The cbrt() function returns the cube root of a number.\n");
            printf("Syntax: double cbrt(double x)\n");
            printf("Arguments: The cbrt() function takes a single argument x.\n");
            printf("Returns: The cbrt() function returns the cube root of x.\n");
            break;
        }
        case 8: {
            printf("ceil Function:\n");
            printf("The ceil() function returns the smallest integer value greater than or equal to the argument.\n");
            printf("Syntax: double ceil(double x)\n");
            printf("Arguments: The ceil() function takes a single argument x.\n");
            printf("Returns: The ceil() function returns the smallest integer value greater than or equal to x.\n");
            break;
        }
        case 9: {
            printf("cos Function:\n");
            printf("The cos() function returns the cosine of a number in radians.\n");
            printf("Syntax: double cos(double x)\n");
            printf("Arguments: The cos() function takes a single argument x, where x is in radians.\n");
            printf("Returns: The cos() function returns the cosine of x.\n");
            break;
        }
        case 10: {
            printf("cosh Function:\n");
            printf("The cosh() function returns the hyperbolic cosine of a number.\n");
            printf("Syntax: double cosh(double x)\n");
            printf("Arguments: The cosh() function takes a single argument x.\n");
            printf("Returns: The cosh() function returns the hyperbolic cosine of x.\n");
            break;
        }
        case 11: {
            printf("exp Function:\n");
            printf("The exp() function returns the exponential of a number.\n");
            printf("Syntax: double exp(double x)\n");
            printf("Arguments: The exp() function takes a single argument x.\n");
            printf("Returns: The exp() function returns e raised to the power of x.\n");
            break;
        }
        case 12: {
            printf("fabs Function:\n");
            printf("The fabs() function returns the absolute value of a number.\n");
            printf("Syntax: double fabs(double x)\n");
            printf("Arguments: The fabs() function takes a single argument x.\n");
            printf("Returns: The fabs() function returns the absolute value of x.\n");
            break;
        }
        case 13: {
            printf("floor Function:\n");
            printf("The floor() function returns the largest integer value less than or equal to the argument.\n");
            printf("Syntax: double floor(double x)\n");
            printf("Arguments: The floor() function takes a single argument x.\n");
            printf("Returns: The floor() function returns the largest integer value less than or equal to x.\n");
            break;
        }
        case 14: {
            printf("hypot Function:\n");
            printf("The hypot() function returns the hypotenuse of a right-angled triangle.\n");
            printf("Syntax: double hypot(double x, double y)\n");
            printf("Arguments: The hypot() function takes two arguments, x and y, representing the lengths of the sides of a right-angled triangle.\n");
            printf("Returns: The hypot() function returns the length of the hypotenuse.\n");
            break;
        }
        case 15: {
            printf("log Function:\n");
            printf("The log() function returns the natural logarithm (base e) of a number.\n");
            printf("Syntax: double log(double x)\n");
            printf("Arguments: The log() function takes a single argument x, where x > 0.\n");
            printf("Returns: The log() function returns the natural logarithm of x.\n");
            break;
        }
        case 16: {
            printf("log10 Function:\n");
            printf("The log10() function returns the base-10 logarithm of a number.\n");
            printf("Syntax: double log10(double x)\n");
            printf("Arguments: The log10() function takes a single argument x, where x > 0.\n");
            printf("Returns: The log10() function returns the base-10 logarithm of x.\n");
            break;
        }
        case 17: {
            printf("modf Function:\n");
            printf("The modf() function breaks a number into its integer and fractional parts.\n");
            printf("Syntax: double modf(double x, double *iptr)\n");
            printf("Arguments: The modf() function takes two arguments, x and iptr.\n");
            printf("Returns: The modf() function returns the fractional part of x and sets the integer part in iptr.\n");
            break;
        }

        case 18: {
            printf("pow Function:\n");
            printf("The pow() function returns the result of raising a number to a given power.\n");
            printf("Syntax: double pow(double base, double exponent)\n");
            printf("Arguments: The pow() function takes two arguments, base and exponent.\n");
            printf("Returns: The pow() function returns base raised to the exponent power.\n");
            break;
        }
        case 19: {
            printf("sin Function:\n");
            printf("The sin() function returns the sine of a number in radians.\n");
            printf("Syntax: double sin(double x)\n");
            printf("Arguments: The sin() function takes a single argument x, where x is in radians.\n");
            printf("Returns: The sin() function returns the sine of x.\n");
            break;
        }
        case 20: {
            printf("sinh Function:\n");
            printf("The sinh() function returns the hyperbolic sine of a number.\n");
            printf("Syntax: double sinh(double x)\n");
            printf("Arguments: The sinh() function takes a single argument x.\n");
            printf("Returns: The sinh() function returns the hyperbolic sine of x.\n");
            break;
        }
        case 21: {
            printf("sqrt Function:\n");
            printf("The sqrt() function returns the square root of a number.\n");
            printf("Syntax: double sqrt(double x)\n");
            printf("Arguments: The sqrt() function takes a single argument x, where x >= 0.\n");
            printf("Returns: The sqrt() function returns the square root of x.\n");
            break;
        }
        case 22: {
            printf("tan Function:\n");
            printf("The tan() function returns the tangent of a number in radians.\n");
            printf("Syntax: double tan(double x)\n");
            printf("Arguments: The tan() function takes a single argument x, where x is in radians.\n");
            printf("Returns: The tan() function returns the tangent of x.\n");
            break;
        }
        case 23: {
            printf("tanh Function:\n");
            printf("The tanh() function returns the hyperbolic tangent of a number.\n");
            printf("Syntax: double tanh(double x)\n");
            printf("Arguments: The tanh() function takes a single argument x.\n");
            printf("Returns: The tanh() function returns the hyperbolic tangent of x.\n");
            break;
        }
        default: {
            printf("Invalid input. Please enter a number between 1 and 23.\n");
            break;
        }
    }
            return 0;
}
