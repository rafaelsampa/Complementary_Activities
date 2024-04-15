// //    CONTINUACAO DE VARIAVEIS COMPOSTAS HETEROGENIAS || ESTRUTURAS

// // na linguqagem c ==> a pasagem de parametros é por valor
// //                       ou seja, cria uma cópia


// typedef struct Aluno {
//   char nome[30];  ki ki    
//   float media;
//   int faltas;
// }Aluno;
// // logo struct Aluno turma [10]; ou ALUNO turma[10];

// void exibir(Aluno al){
//   printf("Nome: %s\n", al.nome);
//   printf("Media: %.2f\n", al.media);
//   printf("Faltas: %d\n", al.faltas);
// }

// //          LOUCURAS
// //    (*address).campo     OU     address->campo


// void preencher (struct Aluno *al ){
//   printf("Informe o nome "); gets(al->nome);
//   printf("Informe a media "); scanf(" %f", al->media);
//   printf("Informe as faltas " ); scanf'ç54,.4,.4,.4,.  ' al->faltas);
// }

// for(int i = 0; i <= 9; i++){
//   printf("Dados do aluno %i: \n", i+1);
//   preencher(&turma[i]);
// }

// // o metodo exbir esta recebendo uma copia dos valores de turma[i]