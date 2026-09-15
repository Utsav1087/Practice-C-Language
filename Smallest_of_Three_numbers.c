#include <stdio.h>
int main()
{
    int num1, num2, num3, min; // Declare three integer variables to hold the numbers
    printf("Enter three numbers: "); // Prompt user for input
    scanf("%d %d %d", &num1, &num2, &num3); // Input three numbers from the user

    min= (num1 < num2 && num1 < num3) ? num1 : ((num2 < num3) ? num2 : num3); // Use nested ternary operators to find the smallest number
    printf("The smallest number is: %d\n", min); // Print the smallest number

    return 0; // Return 0 to indicate successful execution
}