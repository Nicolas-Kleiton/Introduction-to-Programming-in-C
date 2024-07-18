#include <stdio.h>

int main(){

    float theory1, theory2, theory3;
    float practical1, practical2,practical3;
    float unified1, unified2,unified3;
    float finalaverage;
    char concept;

    printf("Enter the theory grade for the first unit: ");
    scanf("%f", &theory1);
    printf("Enter the theory grade for the second unit: ");
    scanf("%f", &theory2);
    printf("Enter the theory grade for the third unit: ");
    scanf("%f", &theory3);
    printf("Enter the practical grade for the first unit: ");
    scanf("%f", &practical1);
    printf("Enter the practical grade for the second unit: ");
    scanf("%f", &practical2);
    printf("Enter the practical grade for the third unit: ");
    scanf("%f", &practical3);

    // Calculate unified grades for each unit

    if (theory1 > practical1) {
        unified1=((theory1*6)+(practical1*4))/10;
    } else {
        unified1=((practical1*6)+(theory1*4))/10;
    }
    if (theory2 > practical2) {
        unified2=((theory2*6)+(practical2*4))/10;
    } else {
        unified2=((practical2*6)+(theory2*4))/10;
    }
    if (theory3 > practical3) {
        unified3=((theory3*6)+(practical3*4))/10;
    } else {
        unified3=((practical3*6)+(theory3*4))/10;
    }

    // Calculate final average for the semester 
    finalaverage=(unified1+unified2+unified3)/3;

    // Grade based on the final average

    if (finalaverage >=9 && finalaverage <=10) {
        concept='A'; 
    } else if ((finalaverage>=8) && (finalaverage<9)) {
        concept='B'; 
    } else if ((finalaverage>=7) && (finalaverage<8)) {
        concept='C'; 
    } else if ((finalaverage>=6) && (finalaverage<7)) {
        concept='D'; 
    } else if ((finalaverage>=5) && (finalaverage<6)) {
        concept='E'; 
    } else if (finalaverage<5) {
        concept='F'; 
    } else {
        printf("Something went wrong, please try again.");
        return 1; // Exit the program due to an error
    }
    //result
    printf("Unified for the first unit: %.1f\n",unified1);
    printf("Unified for the second unit: %.1f\n",unified2);
    printf("Unified for the third unit: %.1f\n",unified3);
    printf("Final average for the semester: %.1f\n", finalaverage);
    printf("Final grade: %c\n",concept);

    return 0;
}
