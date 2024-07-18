#include <stdio.h>

int main() {

    int num1, num2, num3;

	printf("Enter an integer: ");
    scanf("%d", &num1);
    printf("Enter another integer: ");
    scanf("%d", &num2);
    printf("Enter another integer: ");
    scanf("%d", &num3);
    
  if (num1 > num2) {
        if (num1 > num3) {
           printf("The larger number is: %d\n", num1);             
        } else {
           printf("The larger number is: %d\n", num3);
        }
    } else if (num2 > num3) {
        printf("The larger number is: %d\n", num2);
    } else {
        printf("The larger number is: %d\n", num3);
    }

	return 0;
}