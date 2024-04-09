/*#include <stdio.h>
#include <string.h>
// ===============================
//    ASCII - Sequencia- Exemplo
//  '0' = 80
//  '1' = 81
//     ...
//  '9' = 89
// ===============================
//  '3'-'0' , ou seja,
//  83 - 80 = 3
//


// ===============================
//  NOTES
// ===============================
//
//  LEMBRAR DE : fflush(stdin); ou seja, LIMPAR O BUFFER
//  
//  int num = '2';  printa o valor do ascii
// 
//  Possiveis restos de uma divisao por 10; 1,2,3... 9.
//  Possiveis restos de uma divisao por 11; 1,2,3... 10. SO QUE 10 sao 2 caracteres
//  e o digito verificador é somente um caractere.
//

// Nao precisa colocar o tamanho, por causa do \0
int valida(char conta[], char dv);

int main(void) {
  
  char conta[7]; //  *
  char dv;  //   Digito verificador
  int retorno;

  printf("Conta: ");
  scanf("%s",&conta);
  //ou gets(conta);
  //ou fgets(conta,6,stdin);  * e trocar a conta para [8]
  //conta[6] = '\0';
  printf("\nDV: ");
  scanf("%c",&dv);
  retorno = valida(conta,dv);
  if(retorno == 0){
    printf("\n\nDígito verificador INVÁLIDO ! \n");
  }
  else{
    printf("Dígito verificador VÁLIDO ! \n");
  }
  // deveria ser; soma = 321
  return 0;
}

int valida (char conta[], char dv){
  int tam = strlen(conta);
  int vet[tam];
  int i, soma, resto = 0;
  
  if(tam != 6){
    return 0;
  }else{
    for(i = 0; i < tam; i ++){
      vet[i] = conta[i] - 'O';
    }
    for(i = 0; i < tam; i ++){
      soma = soma + vet[i] * pow(2,i); // Funcao power retorna um float, FAZER U AJUSTE
    }
    resto = soma % 2;
    if(resto>=0 && resto<=9) {
      if( dv == resto) { //  comparando um char com um int??? *CONVERSAO
        return 1;
      }
      else {
        return 0;
      }
    }
    else {
      if(dv == 'x'||dv =='X') {
        return 1;
      }
      else {
        return 0;
      }
    }
  }
  //  Esse codigo tem problemas, porém é necessário ajustes
}*/