#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.

    // Read and save an integer, double, and String to your variables.

    // Print the sum of both integer variables on a new line.

    // Print the sum of the double variables on a new line.

    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.

    int y;
    float f;
    char string[75];

    scanf("%d", &y);
    printf("%d\n", (y + i));
    scanf("%lf", &f);
    printf("%.1lf\n", (f + d));
    scanf("%*[\n] %[^\n]", string);
    printf("%s%s", s, string);
    return 0;
}