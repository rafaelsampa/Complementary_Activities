// #include <stdio.h>
// #include <string.h>
// #define TAM 3

// typedef struct Conta{
//   char numConta[3];
//   float saldo;
//   char nome[50];
//   char cpf[11];
//   char fone[11];
//   int status; // 1 - Ativo ou 2 - Deletado
// }TConta;

// int main () 
// {
//   FILE *arq // APONTADOR : A função deste ponteiro é “apontar” a localização de um registro.
//   TConta contas[3];
//   char nomeArq[10] = "Banco_de_Cadastros";
//   int opcao = 0;
//   arq = fopen (nomeArq,"w+b"); // Criando de um arquivo em Binario. Para LER e GRAVAR



//   // Teste de abertura do arquivo
//     if(arq != NULL){
//       printf("\n\nArquivo foi criado com exito !!!\n\n\n");
//     }else{
//       printf("\n\nDEU ERRO: O arquivo não foi aberto.\n\n");
//       return 0;
//     }

//   // ==============================================

//   // fopen para abrir
//   // fclose para fechar
//   // fwrite para gravar (Alterar)
//   // fread para ler (Leitura)
//   // fflush decarregar buffer do arquivo
//   // sizeof(algo) para ter o tamanho


//   int i;
//   TConta conta;
//   printf("Informe seu numero de conta: ");
//   scanf(" %s", &numConta.conta); fflush(stdin);
//   printf("\nInforme seu saldo: ");
//   scanf(" %f", &saldo.conta); fflush(stdin);

//   fwrite(&conta,sizeof(TConta), arq); fflush(arq);




//   do
//   {
//     menu(opcao);
//     // fwrite(&variavel, numero de bytes, num de registros, arquivo);

//     switch (opcao) {
//       case 1:
//       case 2:
//       case 3:
//       case 4:
//       case 5:
//       case 6:
//       case 7:
//       case 0:
//       default:
//         printf("\n\nOpcao Inválida! Tente novamente.\n");
//     }
//   }while(menu != 0);


//   // status = fclose (arq);
//   // if (status != 0) {
//   //   printf ("\n\nErro no fechamento do arquivo \n");
//   // }else{
//   //   printf ("\n\nArquivo fechado com sucesso \n");
//   //   printf("\n\n\nEND OF PROGRAM\n");
//   // }
//   printf("\n\n\nEND OF PROGRAM\n");
//   return 0;
// }