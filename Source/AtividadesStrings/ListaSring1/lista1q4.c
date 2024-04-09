// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// // Implemente um  programa  para solicitar  ao  usuário  que 
// // digite uma  frase  de,  no  máximo,50 caracteres. Oprograma 
// //  deverácalcular e exibir a quantidade de vogais existentes 
// // nafrasedigitada. 

// int main(){

//   char frase[51];
//   int qtd = 0;

//   printf("Digite uma frase: ");

//   fgets(frase, 50, stdin);

//   int i;
  
//   for(i = 0; i < strlen(frase); i++){
//     char x = frase[i];
//     if( isalpha(x) && (x == 'a' || x == 'A' || x == 'e' || x == 'E'|| x == 'i'|| x == 'I'|| x == 'o'|| x == 'O'|| x == 'u'|| x == 'U')){
//       qtd++;
//     }
//   }
  
//   printf(" Sua frase: %s\n\n Quantidade de vogais: %i", frase, qtd);
  
//   return 0 ;
// }