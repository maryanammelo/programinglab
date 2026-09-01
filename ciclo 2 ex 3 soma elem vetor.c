
#include <stdio.h>

   int somaVetor(int v[], int n){
       
       if (n == 0) return 0;
       return v[n-1] + somaVetor(v, n-1);
      
   }
   
   int main(void){
       
       int vetor[5] = {1, 2, 3, 4, 5}; 
       printf("A soma dos elementos do vetor é: %d\n", somaVetor(vetor, 5));
   }
