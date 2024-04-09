// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(){

//   char frase[51];
//   int qtd = 0;

//   printf("Digite uma frase: ");

//   fgets(frase, 50, stdin);

//   int i;

//   for(i = 0; i < strlen(frase); i++){
//     char x = frase[i];
//     if( isalpha(x) && (x != 'a' && x != 'A' && x != 'e' && x != 'E'&& x != 'i'&& x != 'I'&& x != 'o'&& x != 'O'&& x != 'u'&& x != 'U')){
//       qtd++;
//     }
//   }

//   printf("\nSua frase: %s\n\n Quantidade de consoantes: %i", frase, qtd);

//   return 0 ;
// }