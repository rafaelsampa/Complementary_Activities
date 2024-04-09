// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void validar(char A[], char letra){
//   while(!isalpha(letra)){
//    // OBRIGAR CARLAGO
//     printf("\n!!! INVALIDO !!!\n Digite novamente, por gentileza uma letra: ");
//     scanf(" %c",&letra);
//   }
// }

// int main(){

//   char frase[51];
//   int qtd = 0;
//   char letra;

//   printf("Digite uma frase: ");
//   fgets(frase, 50, stdin);

//   printf("\nDigite uma letra: ");
//   scanf(" %c", &letra);
//   validar(frase,letra);

//   printf("\n\nCalculando..."); // MIGUÉ
//   int i;
//   for(i = 0; i < strlen(frase); i++){
//     char x = frase[i];
//     if( isalpha(x) && frase[i] == letra){
//       frase[i] = toupper(frase[i]);
//     }
//   }

//   printf("\nSua frase modificada: %s\n", frase);

//   return 0 ;
// }

// // Obg martins