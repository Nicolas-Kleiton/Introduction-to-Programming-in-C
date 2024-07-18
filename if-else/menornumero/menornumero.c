#include <stdio.h>

int main(void) {

    int num1, num2;

	printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter another integer: ");
    scanf("%d", &num2);
    
    if (num1==num2) {
        printf("Both numbers are equal\n");
    } else if (num1<num2) {
        printf("The smaller number is: %d\n", num1);
    } else {
        printf("The smaller number is: %d\n", num2);
    }

	return 0;
}
