#include <stdio.h>

void main () {

 float math, hindi, science, english, total, percentage;

 // Initializing variables with sample values

 math = 50;
 hindi = 50;
 science = 50;
 english = 50;

 // Input marks for each subject

 printf("Enter marks math : ");
 scanf("%f", &math);

 printf("Enter marks hindi : ");
 scanf("%f", &hindi);

 printf("Enter marks science : ");
 scanf("%f", &science);

 printf("Enter marks english : ");
 scanf("%f", &english);

 // Calculating total and percentage

 total = math + hindi + science + english;
 percentage = (total / 400) * 100;

 // Printing results

 printf("----your result----\n\n");
 printf("Total marks are: %2f/n", total);
 printf("percentage: %.2f%%\n\n", percentage);

 printf("math : %.2f\n", math);
 printf("hindi : %.2f\n", hindi);
 printf("science : %.2f\n", science);
 printf("english : %.2f\n", english);

}
