#include <stdio.h>
#include <string.h>
#include <stdlib.h>
# define len 20

//   Aula1 foi entrega da prova empressa e revisao das questoes
//  Vai haver um projeto individual envolvendo "arquivo" e "vetor de estruturas"

//            HOJE
//
//    pORTA DE ENTRADA PARA ORIENTACAO AO OBJETO
//    Variaveis compostas e heterogeneas
//
//    tipos compostos homogenios ==> VARIAVEL COMPOSTA
//          |
//          |  
//          v
//    todos os valores do mesmo tipo


// Declarar variaveis ===> É ALOCAR MEMORIA

//    char, int, float, float







//  sintaxe de acesso
//   nomedaVariavel.campo1





//    EXEMPLO    

// typedef struct pessoa {
//   char nome[len];
//   int idade;
//   float peso,altura;
// }TPessoa;


//    EXEMPLO DE VE|TOR DE ESTRUTURAS

// Turma[2].nome = "anabanana";




typedef struct pessoa {
  char nome[len];
  int idade;
  float peso,altura;
}TPessoa;


typedef struct turma {



}salas;


int main () {
  TPessoa pessoa1;

  TPessoa pessoa2;
  
  pessoa2.idade = 12;
  
  strcpy(pessoa1.nome, "Joao");
  printf("Nome: %s\n", pessoa1.nome);

  printf("\n\n\n %i", pessoa2.idade);
  
  
  return 0;
}



// marcelo
// ana
// ana\0lo