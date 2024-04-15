#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

  char frase[51];
  int qtd = 0;
  char letra;

  printf("Digite uma frase: ");
  fgets(frase, 50, stdin);

  printf("\nDigite uma letra: ");
  scanf(" %c", &letra);

  printf("\n\nCalculando...");
  int i;

  for(i = 0; i < strlen(frase); i++){
    char x = frase[i];
    if( isalpha(x) && frase[i] == letra){
      qtd++;
    }
  }

  printf("\nSua frase: %s\n\n Quantidade da letra %c presente a frase: %i", frase,letra,qtd);

  return 0 ;
}