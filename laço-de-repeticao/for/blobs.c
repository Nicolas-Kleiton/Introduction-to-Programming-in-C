#include <stdio.h>
 
int main() {
 
   int N;
   int i,dias;
   float C;
   
   scanf("%d",&N);
   
   for (i=1;i<=N;i++){
       scanf("%f",&C);

       dias = 0;

       while (C > 1.0){
        C /= 2.0;
        dias++;
       }

        printf("%d dias\n",dias);
   }
    
  
    return 0;
}