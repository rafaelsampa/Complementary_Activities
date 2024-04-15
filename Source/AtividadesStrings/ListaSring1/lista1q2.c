#include <stdio.h>
#include <string.h>


int main() {
  char frase[101];
  
  printf("\nDigite uma frase (máximo de 100 caracteres): ");
  fgets(frase, 100, stdin);

  int i,j;
  char controle;
  int tam = strlen(frase);
  
  for(i = 0, j = tam - 1; i < j; i++, j--) {
    controle = frase[i];
    frase[i] = frase[j];
    frase[j] = controle;
  }

  printf("\n\nFrase criptografada: %s", frase);

  return 0 ;
}