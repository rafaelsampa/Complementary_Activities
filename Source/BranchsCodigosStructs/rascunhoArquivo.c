// ATIVIDADE AVALIATIVA ASSINCRONA

// Aluno: Rafael Sampaio e Silva
// RA: 00000844559
// Data: 07/12/2023

#include <stdio.h>
#include <string.h>
#define TAM 3
// ==============================================
//            PROCEDIMENTOS E FUNCOES
// ==============================================
void menu (int *opcao);

typedef struct Conta{
  char numConta[6];
  float saldo;
  char nome[50]
  char cpf[11];
  char fone[11];
  int status; // 1 - Ativo ou 2 - Deletado
}TConta;

int busca (,   char numero[] ) {
  int qtd;

  if () // CASO 1: O cadastro esteja vazio
  { 

    
    return -2;
  }
  else 
  if () // CASO 2: Nao encontrou o valor
  {

    
    return -1;
  }
  else // CASO 3: Deu erro de leitura durante a busca
  {
    printf("\n\nDEU ERRO: Durante a Busca\n\n");
    return -3;
  }
}

void cadastrarNovaConta (, char numero[], )
{
  int valor;
  valor = busca(cadastro,numero);
  if(valor != -1) // Usuario nao pode fazer o Cadastramento
  {
    
  }else if(valor == -1)
  {
    printf("\n\nSucesso\nProceguindo seu cadastro...\n\n\n");


    
  }
}

void consultarSaldo ()
{
  
}

void deposito ()
{
  
}

void fazerSaque ()
{
  
}

void exibirConta ()
{
  
}

void removerConta ()
{
  
}

// ==============================================
//              FUNCAO PRINCIPAL
// ==============================================
int main () 
{
  FILE *arq // APONTADOR : A função deste ponteiro é “apontar” a localização de um registro.
  TConta conta[3];
  char nomeArq[10] = "Banco_de_Cadastros";
  int opcao = 0;
  arq = fopen (nomeArq,"w+b"); // Criando de um arquivo em Binario. Para LER e GRAVAR


  
  // Teste de abertura do arquivo
    if(arq != NULL){
      printf("\n\nArquivo foi criado com exito !!!\n\n\n");
    }else{
      printf("\n\nDEU ERRO: O arquivo não foi aberto.\n\n");
      return 0;
    }
  
  // ==============================================

  // fopen para abrir
  // fclose para fechar
  // fwrite para gravar (Alterar)
  // fread para ler (Leitura)
  // fflush decarregar buffer do arquivo
  // sizeof(algo) para ter o tamanho
  




  
  do
  {
    menu(opcao);
    // fwrite(&variavel, numero de bytes, num de registros, arquivo);
  
    switch (opcao) {
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0:
      default:
        printf("\n\nOpcao Inválida! Tente novamente.\n");
    }
  }while(menu != 0);
  
  
  status = fclose (arq);
  if (status != 0) {
    printf ("\n\nErro no fechamento do arquivo \n");
  }else{
    printf ("\n\nArquivo fechado com sucesso \n");
    printf("\n\n\nEND OF PROGRAM\n");
  }
  return 0;
}

// ==============================================
//     PROCEDIMENTOS E FUNCOES já "FUNCIONAIS"
// ==============================================

void menu (int *opcao) 
{
  printf("\n\n______BANCO DINHEIRO CERTO______\n");
  printf("\tCadastro de contas\n___________________\n");
  printf("(1) BUSCAR uma conta.\n");
  printf("(2) Cadastrar nova conta.\n");
  printf("(4) Consultar SALDO de uma conta.\n");
  printf("(5) Fazer DEPÓSITO em uma conta.\n");
  printf("(6) Fazer SAQUE em uma conta.\n");
  printf("(7) REMOVER uma conta.\n");
  printf("(8) EXIBIR uma conta.\n")
  printf("(0) ENCERRAR programa.\n");
  printf("O que deseja fazer? Escolha uma opcao: ");
  scanf(" %d", &opcao);
  printf("\n\n");
}
