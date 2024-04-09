
// #include <stdio.h>
// #include <string.h>
// #define TAM 3
// typedef struct Aluno {
// char nome[50];
// float media;
// int faltas;
// } TAluno;
// int buscaSimples (TAluno vet[], int qtd, char nomeAl[]) {
// // busca sequencial simples
// int i, pos = -1;
// if (qtd == 0) {
// return -1;
// }
// else {
// for (i = 0; i < qtd; i++) {
// if (strcmp(vet[i].nome, nomeAl) == 0) {
// pos = i;
// break;
// }
// }
// return pos;
// }
// }
// int buscaMelhorada (TAluno vet[], int qtd, char nomeAl[]) {
// // busca sequencial melhorada
// int i, pos = -1, retorno;
// if (qtd == 0) {
// return -1;
// }
// else {
// for (i = 0; i < qtd; i++) {
// retorno = strcmp(vet[i].nome, nomeAl);
// if (retorno == 0) {
// pos = i;
// break;
// }
// else if (retorno > 0) {
// break;
// }
// }
// return pos;
// }
// }
// int buscaBinaria (TAluno v[ ], int n, char nomeAl[]) {
// // Algoritmo de busca binária
// int inicio = 0, meio, fim = n-1, achou = 0,
// retorno;
// do {
// meio = (inicio + fim) / 2;
// retorno = strcmp(v[meio].nome, nomeAl);
// if (retorno == 0) {
// achou = 1;
// break;
// }
// else if (retorno > 0) {
// fim = meio-1;
// }
// else {
// inicio = meio + 1;
// }
// } while (inicio <= fim);
// if (achou == 1) {
// return meio; // retorna a posição onde encontrou a
// chave
// }
// else {
// return -1; // retorna -1 indicando que não achou a
// chave
// }
// }
// void inserirOrdenado (TAluno vet[], int *qtd, TAluno al) {
// int i, j, result;
// if (*qtd == TAM) {
// printf ("Turma cheia! Não há vagas! \n");
// }
// else if (*qtd == 0) {
// vet[0] = al;
// (*qtd)++;
// printf ("Aluno cadastrado! \n");
// }
// else if (strcmp (al.nome,vet[*qtd-1].nome) > 0) {
// vet[*qtd] = al;
// (*qtd)++;
// printf ("Aluno cadastrado! \n");
// }
// else {
// for (i = 0; i < *qtd; i++) { // busca pela posição de inserção
// result = strcmp(vet[i].nome, al.nome);
// if (result == 0) {
// printf ("Aluno já existe na turma. Inserção não
// efetuada!");
// return; // encerrar o método de inserção
// }
// else if (result > 0) {
// break; // Achou ponto de inserçaõ. Encerra o FOR
// }
// }
// for (j = *qtd; j > i; j--){ // mover valores
// vet[j] = vet[j-1];
// }
// vet[i] = al; // inserção do novo valor
// (*qtd)++;
// printf ("Aluno cadastrado! \n");
// }
// }
// void preencherDados (TAluno *al) {
// printf ("Nome: ");
// gets ((*al).nome); fflush (stdin);
// printf ("Média: ");
// scanf ("%f", &(al->media)); fflush (stdin);
// printf ("Quantidade de faltas: ");
// scanf ("%d", &(al->faltas)); fflush (stdin);
// }
// void exibir (TAluno vet[], int qtd) {
// int i;
// if (qtd == 0) {
// printf ("Não existem alunos matriculados\n");
// }
// else {
// for (i = 0; i < qtd; i++) {
// printf ("Aluno %d \n", i+1);
// printf ("Nome: %s \n", vet[i].nome);
// printf ("Média: %f \n", vet[i].media);
// printf ("Quantidade de faltas: %d \n",vet[i].faltas);
// }
// }
// }
// void exibirAluno (TAluno vet[], int qtd, char nomeAl[]) {
// int achou = buscaBinaria (vet, qtd, nomeAl);
// if (achou == -1) {
// printf ("Aluno não pertence a turma \n");
// }
// else { // Achei !!! Vou exibir.
// printf ("Dados do(a) aluno(a) \n");
// printf ("Nome: %s \n", vet[achou].nome);
// printf ("Média: %f \n", vet[achou].media);
// printf ("Qtd. faltas: %d \n", vet[achou].faltas);
// }
// }
// void alterarMediaAluno (TAluno vet[], int qtd, char nomeAl[]) {
// int achou = buscaBinaria (vet, qtd, nomeAl);
// float novaMedia;
// if (achou == -1) {
// printf ("Aluno não pertence a turma \n");
// }
// else { // Achei !!! Vou altarar a média.
// printf ("Informe a nova média do(a) aluno(a): ");
// scanf("%f",&novaMedia);
// vet[achou].media = novaMedia;
// printf ("Média alterada \n");
// }
// }
// void removerAluno (TAluno vet[], int *qtd, char nomeAl[]) {
// int achou = buscaBinaria (vet, *qtd, nomeAl);
// int i;
// if (achou == -1) {
// printf ("Aluno não pertence a turma \n");
// }
// else { // Achei !!! Vou remover.
// for (i = achou; i < *qtd-1; i++) {
// vet[i] = vet[i+1];
// }
// (*qtd)--;
// printf ("Remoção efetuada\n");
// }
// }
// void exibirOpcoes () {
// printf ("opções \n");
// printf ("1 - Cadastrar aluno \n");
// printf ("2 - Exibir alunos cadastrados \n");
// printf ("3 - Exibir os dados de um aluno\n");
// printf ("4 - Alterar média de um aluno\n");
// printf ("5 - Remover um aluno \n");
// printf ("0 - Encerrar programa \n");
// printf ("Informe a opção desejada: ");
// }
// int main () {
// TAluno turma [TAM];
// TAluno aux;
// int op, total = 0;
// do {
// exibirOpcoes();
// scanf ("%d",&op); fflush (stdin);
// switch (op) {
// case 1: preencherDados(&aux);
// inserirOrdenado (turma, &total, aux);
// break;
// case 2: exibir(turma, total);
// break;
// case 0: printf ("Bye bye\n");
// break;
// default: printf ("Opção inválida!\n");
// }
// } while (op != 0);
// return 0;
// }

// //https://chat.openai.com/share/77d4ad75-a96b-4bb2-90cf-fee8fb702b72