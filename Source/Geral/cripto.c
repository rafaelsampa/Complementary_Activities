// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// // Função para calcular o inverso multiplicativo em Z26
// int inversoMultiplicativo(int a) {
//     int i;
//     for (i = 1; i < 26; i++) {
//         if ((a * i) % 26 == 1) {
//             return i;
//         }
//     }
//     return -1;  // Inverso multiplicativo não existe
// }

// // Função para criptografar uma frase usando uma cifra de substituição
// void criptografarFrase(char frase[], int matrizTransformacao[2][2]) {
//     int i;
//     for (i = 0; i < strlen(frase); i++) {
//         if (frase[i] >= 'a' && frase[i] <= 'z') {
//             // Transformação linear mais complexa usando uma matriz
//             int x = frase[i] - 'a';
//             int y = (matrizTransformacao[0][0] * x + matrizTransformacao[0][1] * (frase[i + 1] - 'a')) % 26;
//             frase[i] = y + 'a';
//         } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
//             // Transformação linear mais complexa usando uma matriz
//             int x = frase[i] - 'A';
//             int y = (matrizTransformacao[1][0] * x + matrizTransformacao[1][1] * (frase[i + 1] - 'A')) % 26;
//             frase[i] = y + 'A';
//         }
//     }
// }

// // Função para descriptografar uma frase usando uma cifra de substituição
// void descriptografarFrase(char frase[], int matrizTransformacao[2][2]) {
//     int i;
//     for (i = 0; i < strlen(frase); i++) {
//         if (frase[i] >= 'a' && frase[i] <= 'z') {
//             // Calcular a determinante da matriz de transformação
//             int det = (matrizTransformacao[0][0] * matrizTransformacao[1][1] - matrizTransformacao[0][1] * matrizTransformacao[1][0] + 26) % 26;

//             // Calcular o inverso multiplicativo da determinante
//             int detInv = inversoMultiplicativo(det);

//             // Calcular a matriz adjunta
//             int adj[2][2] = {
//                 {matrizTransformacao[1][1], -matrizTransformacao[0][1]},
//                 {-matrizTransformacao[1][0], matrizTransformacao[0][0]}
//             };

//             // Calcular a matriz inversa usando eliminação de Gauss
//             int inv[2][2] = {
//                 {(detInv * adj[0][0]) % 26, (detInv * adj[0][1]) % 26},
//                 {(detInv * adj[1][0]) % 26, (detInv * adj[1][1]) % 26}
//             };

//             // Transformação linear inversa usando a matriz de transformação
//             int x = frase[i] - 'a';
//             int y = (inv[0][0] * x + inv[0][1] * (frase[i + 1] - 'a') + 26) % 26;
//             if (y < 0) {
//                 y += 26;
//             }
//             frase[i] = y + 'a';
//         } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
//             // Calcular a determinante da matriz de transformação
//             int det = (matrizTransformacao[0][0] * matrizTransformacao[1][1] - matrizTransformacao[0][1] * matrizTransformacao[1][0] + 26) % 26;

//             // Calcular o inverso multiplicativo da determinante
//             int detInv = inversoMultiplicativo(det);

//             // Calcular a matriz adjunta
//             int adj[2][2] = {
//                 {matrizTransformacao[1][1], -matrizTransformacao[0][1]},
//                 {-matrizTransformacao[1][0], matrizTransformacao[0][0]}
//             };

//             // Calcular a matriz inversa usando eliminação de Gauss
//             int inv[2][2] = {
//                 {(detInv * adj[0][0]) % 26, (detInv * adj[0][1]) % 26},
//                 {(detInv * adj[1][0]) % 26, (detInv * adj[1][1]) % 26}
//             };

//             // Transformação linear inversa usando a matriz de transformação
//             int x = frase[i] - 'A';
//             int y = (inv[1][0] * x + inv[1][1] * (frase[i + 1] - 'A') + 26) % 26;
//             if (y < 0) {
//                 y += 26;
//             }
//             frase[i] = y + 'A';
//         }

//         // Pular a próxima letra, pois ela foi usada na transformação
//         i++;
//     }
// }

// int main() {
//     int escolha;
//     char texto[100];

//     // Matriz de transformação mais complexa
//     int matrizTransformacao[2][2] = {{5, 8}, {3, 4}};

//     do {
//         printf("\n(1) Criptografar uma frase\n");
//         printf("(2) Descriptografar uma frase\n");
//         printf("(3) Encerrar o programa\n");
//         printf("Escolha uma opcao: ");
//         scanf("%d", &escolha);

//         switch (escolha) {
//             case 1:
//                 printf("Digite a frase a ser criptografada: ");
//                 getchar();  // Consumir o caractere de nova linha pendente
//                 fgets(texto, sizeof(texto), stdin);
//                 criptografarFrase(texto, matrizTransformacao);
//                 printf("Frase criptografada: %s", texto);
//                 break;

//             case 2:
//                 printf("Digite a frase a ser descriptografada: ");
//                 getchar();  // Consumir o caractere de nova linha pendente
//                 fgets(texto, sizeof(texto), stdin);
//                 descriptografarFrase(texto, matrizTransformacao);
//                 printf("Frase descriptografada: %s", texto);
//                 break;

//             case 3:
//                 printf("Encerrando o programa.\n");
//                 break;

//             default:
//                 printf("Opcao invalida. Tente novamente.\n");
//         }

//     } while (escolha != 3);

//     return 0;
// }
