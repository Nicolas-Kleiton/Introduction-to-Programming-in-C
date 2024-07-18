#include <stdio.h>

int main() {

    int age;

    printf("Enter your age: ");
    scanf("%d", &age);
    
    if (age >=0 && age <=11) {
        printf("You are child!\n");
    } else if (age >=12 && age <=20) {
        printf("You are young!\n");
    } else if (age >=21 && age <=59) {
        printf("You are adult!\n");
    } else if (age >=60) {
        printf("You are elderly!\n");
    } else {
        printf("Invalid age, try again!\n");
    }

	return 0;
}