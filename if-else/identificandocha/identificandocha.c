#include <stdio.h>
 
int main() {
 
   int T;
   int A,B,C,D,E;
   int pontuacao = 0;
   
   scanf("%d",&T);
   scanf("%d%d%d%d%d", &A,&B,&C,&D,&E);
   
   if (A==T) 
     pontuacao++;
   if (B==T) 
     pontuacao++;
   if (C==T) 
     pontuacao++;
   if (D==T) 
     pontuacao++;
   if (E==T) 
     pontuacao++;

    printf("%d",pontuacao);
    
    return 0;
}