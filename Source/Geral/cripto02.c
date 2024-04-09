// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>
// #include <time.h>


// #define TAM 100

// void criptografarFrase(char frase[]) {
//   int i;
//   for (i = 0; i < strlen(frase); i++) {
//     if (frase[i] >= 'a' && frase[i] <= 'z') {
//       // Transformação linear simples (adição de 1 ao código ASCII)
//       frase[i] = (frase[i] - 'a' + 1) % 26 + 'a';
//   } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
//       // Transformação linear simples (adição de 1 ao código ASCII)
//       frase[i] = (frase[i] - 'A' + 1) % 26 + 'A';
//     }
//   }
// }  

// int i;
//   int konst = 8;
//   for (i = 0; i < strlen(palavra)-1; i++) {
//     // Transformação linear simples (adição de 1 ao código ASCII)
//     palavra[i] = (palavra[i] - 'a' + konst) % 26 + 'a';
    
//   }
// }

// int  main() {

//   int escolha;
//   char mensagem[TAM];

//   do{
//     printf("\n\n\n(1) Criptografar uma mensagem\n");
//     printf("(2) Descriptografar uma mensagem\n");
//     printf("(3) Encerrar o programa\n");
//     printf("Escolha uma opcao: ");
//     scanf("%d", &escolha);

//     switch (escolha){
//       case 1:
//         printf("\n\n\n___CRIPTOGRAFAR MENSAGEM___\n\n");
//         printf("Digite mensagem à ser criptografada: ");
//         fgets(mensagem, strlen(mensagem)-1, stdin); fflush(stdin);

//         printf("\n\n%s", mensagem);
        
        
        
//       case 2:
        
//       case 3:
//         printf("Encerrando o programa.\n");
//         break;
      
//       //default:
//        // printf("\n\nOpcao invalida. Tente novamente!\n");
//     }
//   }while (escolha != 3);

  
  

  


//   return 0;
// }