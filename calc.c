#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(void)
{
char progress = 'y';
char operation = '\0';

    //the do-while loop will keep going unless the user types 'n' to indicate that they would like to stop the computations//
    do {
        printf("Which operation would you like to do?\n");
        printf("type 'a' for addition\n");
        printf("type 's' for subtraction\n");
        printf("type 'm' for multiplication\n");
        printf("type 'd' for division\n");
        printf("type 'e' for exponent\n");
        printf("type 'r' for square root\n");
        printf("type 'n' to find the nth root\n");
        operation = get_char("selection: ");

        if (operation == 'a')
        //finds the sum of two addends//
        {
            float addend1 = get_float("first addend: ");
            float addend2 = get_float("second addend: ");
            float sum = addend1 + addend2;
            printf("sum: %.3f\n", sum);
            printf("Would you like to perform additional computations?\n");
            progress = get_char("type 'y' for yes and 'n' for no: ");
        }

        //finds the difference of two numbers//
        if (operation == 's')
        {
            float minuend = get_float("minuend (the number you want to subtract from): ");
            float subtrahend = get_float("subtrahend (the number you want to subtract): ");
            float difference = minuend - subtrahend;
            printf("difference: %.3f\n", difference);
            printf("Would you like to perform additional computations?\n");
            progress = get_char("type 'y' for yes and 'n' for no: ");
        }

        //finds the product of two numbers//
        if (operation == 'm')
        {
            float factor1 = get_float("What is the first factor: ");
            float factor2 = get_float("What is the second factor: ");
            float product = factor1 * factor2;
            printf("product: %.3f\n", product);
            printf("Would you like to perform additional computations?\n");
            progress = get_char("type 'y' for yes and 'n' for no: ");
        }

        //finds the quotient of two numbers//
        if (operation == 'd')
        {
            float dividend = get_float("What is the dividend: ");
            float divisor = get_float("What is the divisor: ");
            float quotient = dividend / divisor;
            printf("quotient: %.3f\n", quotient);
            printf("Would you like to perform additional computations?\n");
            progress = get_char("type 'y' for yes and 'n' for no: ");
        }

        //finds the answer after a number, x, is raised to the power, y,//
        if (operation == 'e')
        {
            printf("Specify x and y so that x is raised to the power of y\n");
            double x = get_int("x = ");
            double y = get_int("y = ");
            double exponent = pow(x,y);
            printf("Answer: %.2lf\n", exponent);
            printf("Would you like to perform additional computations?\n");
            progress = get_char("type 'y' for yes and 'n' for no: ");
        }

        //finds the square root of a number x//
        if (operation == 'r')
        {
            printf("Specify the number, x, that you want to find the square root of\n");
            int x = get_int("x = ");
            int root = (int) sqrt(x);
            printf("Answer: %d\n", root);
            printf("Would you like to perform additional computations?\n");
            progress = get_char("type 'y' for yes and 'n' for no: ");
        }

        //finds the nth root of a number, x,//
        if (operation == 'n')
        {
            printf("Specify n and x such that you get the nth root of x\n");
            double n = get_int("n = ");
            double x = get_int("x = ");
            double fraction = 1/n;
            double n_root = pow(x,fraction);
            printf("Answer: %.1lf\n", n_root);
            printf("Would you like to perform additional computations?\n");
            progress = get_char("type 'y' for yes and 'n' for no: ");
        }
    } while (progress == 'y');
}