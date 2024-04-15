// // anotacoes
// //scanf(); qualquer outra csjbdnadkcja
//         //gets();
//         //fgets(); NAO USA ESSA POHA

// #include <stdio.h>
// #include <string.h>
// #define TAM 3

// void exibir(){

// }





// // O cadastro de funcionários deverá ser preenchido pelo usuário do programa. 
// // Após preenchido o cadastro, o programa deverá percorrê-lo procurando todos 
// // os funcionários com 3º grau, que tenham mais de 5 anos de serviço e que 
// // ganhem menos de R$ 1000,00 e deverá dar a eles um aumento de 20%.


// typedef struct Cadastro {
//     char nome[10];
//     int matricula;
//     int grau; // 1,2 ou 3
//     int tempoServi;
//     float salario;
// } Cad; // ta

// void aumento(Cad vet[]){
//     for (int i = 0; i < TAM; i++) {
//         if ( vet[i].grau == 3 && vet[i].tempoServi > 5 && vet[i].salario < 1000){
//             vet[i].salario = vet[i].salario * 1.2;
//         }
//     }
// }

// void preencher(Cad vet[]){
//     for (int i = 0; i < TAM; i++) {
//         printf("––––––––––––––––––––––––––––––\nVamos preencher o funcionario %d", i+1);
//         printf("\n\nDigite sue nome: \n");
//         fgets(vet[i].nome, 10, stdin); fflush(stdin);
//         printf("Digite sua matricula: \n");
//         scanf(" %d", &vet[i].matricula);fflush(stdin);
//         printf("Digite seu Grau: \n");
//         scanf(" %d", &vet[i].grau);fflush(stdin);
//         printf("Digite seu tempo de servico: \n");
//         scanf(" %d", &vet[i].tempoServi);fflush(stdin);
//         printf("Digite seu Salario: \n");
//         scanf(" %f", &vet[i].salario);fflush(stdin);
//     }
// }

// int main () {

//     Cad empresa[TAM];

//     preencher(empresa);
//     aumento(empresa);

//     printf("\n\nTodos os funcionarios abaixo\n\n\n");

//     for( int i = 0; i < TAM; i++){
//         printf("\n\nFuncionario %d", i+1);
//         printf("\nNome: %s", empresa[i].nome);
//         printf("\nMatricula: %d", empresa[i].matricula);
//         printf("\nGrau de educacao: %d",empresa[i].grau);
//         printf("\nTempo de servico: %d",empresa[i].tempoServi);
//         printf("\nSalario atual: %f", empresa[i].salario);
//     }

//     printf("\n\n\n\n\nAcabou\n");
//     return 0;
// }