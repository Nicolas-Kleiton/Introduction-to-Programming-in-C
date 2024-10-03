#include <stdio.h>

void Multiplos(int arr[], int t){

    int dois = 0, tres = 0, quatro = 0, cinco = 0;

    for(int i = 0; i < t; i++){
        if(arr[i] % 2 == 0){
            dois ++;
        } 
        if (arr[i] % 3 == 0){
            tres ++;
        } 
        if (arr[i] % 4 == 0){
            quatro++;
        }
        if (arr[i] % 5 == 0){
            cinco++;
        } 
    }  

    printf("%d Multiplo(s) de 2\n", dois);
    printf("%d Multiplo(s) de 3\n", tres);
    printf("%d Multiplo(s) de 4\n", quatro);
    printf("%d Multiplo(s) de 5\n", cinco);
}   

int main(void){
    
    int N;

    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    Multiplos(arr, N);

    return 0;
}
