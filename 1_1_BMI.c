#include <stdio.h>

int main()
{
    float bmi, weight, height;
    printf("Enter height(m) : ");
    scanf("%f", &height);
    printf("Enter your weight(kg) : ");
    scanf("%f", &weight);
    bmi = weight / (height * height);
    if (bmi < 18.5)
    {
        printf("Your BMI is Underweight.");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Your BMI is Normal.");
    }
    else if (bmi >= 25.0 && bmi <= 29.9)
    {
        printf("Your BMI is Overweight.");
    }
    else if (bmi >= 30)
    {
        printf("Your BMI is Obese.");
    }
    return 0;
}