#include <stdio.h>

void somaDoisNumeros(int a, int b){
  int soma;
  soma = a + b;
  printf("A soma é: %d\n", soma);
}
int main() {
  int num1 = 10, num2 = 15;
  somaDoisNumeros(num1, num2); 
  return 0;
}
