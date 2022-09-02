#include <stdio.h>

void BMI (int, float);
int main(void)
{
  int w;
  float h;
       printf("Input the height(m): ");
       scanf("%f", &h);
       printf("Input the weight(kg): ");
       scanf("%d", &w);
       BMI(w, h);
}

void BMI (int weight, float height){
    float bmi = weight/ (height * height);
    printf("BMI = %f\n", bmi);
    printf("Your BMI is ");
    bmi < 18.5 ? printf("Underweight ") : bmi < 25 ? printf("Normal ") : bmi < 30 ? printf("Overweight ") : bmi < 40 ? printf("Obese ") : printf("Error");
} 