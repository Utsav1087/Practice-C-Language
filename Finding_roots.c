#include <stdio.h>
#include <math.h>
// This program finds the roots of a quadratic equation of the form ax^2 + bx + c = 0
int main() {
    double a, b, c, discriminant, root1, root2,realPart, imaginaryPart; // Declare variables for coefficients and roots
    printf("Enter coefficients a, b and c: "); // Prompt user for input
    scanf("%lf %lf %lf", &a, &b, &c); // Input coefficients of the quadratic equation

    discriminant = (b * b - 4 * a * c);

    if (discriminant > 0) { // Check if the discriminant is positive
        root1 = (-b + sqrt(discriminant)) / (2 * a); // Calculate the first root
        root2 = (-b - sqrt(discriminant)) / (2 * a); // Calculate the second root
        printf("Roots are real and different.\n"); // Print the nature of the roots
        printf("Root 1 = %.2lf\n", root1); // Print the first root
        printf("Root 2 = %.2lf\n", root2); // Print the second root
    }
    else if (discriminant == 0) { // Check if the discriminant is zero
        root1 = root2 = -b / (2 * a); // Calculate the single root
        printf("Roots are real and the same.\n"); // Print the nature of the roots
        printf("Root 1 = Root 2 = %.2lf\n", root1); // Print the single root
    }
    else { // If the discriminant is negative, the roots are complex
        realPart = -b / (2 * a); // Calculate the real part of the complex roots
        imaginaryPart = sqrt(-discriminant) / (2 * a); // Calculate the imaginary part of the complex roots
        printf("Roots are complex and different.\n"); // Print the nature of the roots
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);  // Print the first complex root
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart); // Print the second complex root
    }
    return 0;
}