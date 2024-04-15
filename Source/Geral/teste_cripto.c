#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ALPHABET_SIZE 26

int modInverse(int a, int m) {
    a = a % m;
    for (int x = 1; x < m; x++) {
        if ((a * x) % m == 1) {
            return x;
        }
    }
    return -1; // Inverso multiplicativo não existe
}

// Função para criptografar uma mensagem usando a Cifra de Hill com matriz de chave 2x2
void encrypt(char *message, int key[2][2]) {
    int i, j;
    for (i = 0; i < strlen(message); i += 2) {
        int vector[2] = {message[i] - 'a', message[i + 1] - 'a'};
        for (j = 0; j < 2; j++) {
            message[i + j] = 'a' + (vector[0] * key[0][j] + vector[1] * key[1][j]) % ALPHABET_SIZE;
        }
    }
}

// Função para descriptografar uma mensagem usando a Cifra de Hill com matriz de chave 2x2
void decrypt(char *message, int key[2][2]) {
    int inverseKey[2][2];
    int det = key[0][0] * key[1][1] - key[0][1] * key[1][0];

    int detInverse = modInverse(det, ALPHABET_SIZE);
    if (detInverse == -1) {
        printf("Chave inválida. Não é possível calcular o inverso multiplicativo.\n");
        return;
    }

    inverseKey[0][0] = (key[1][1] * detInverse) % ALPHABET_SIZE;
    inverseKey[0][1] = ((-key[0][1] + ALPHABET_SIZE) * detInverse) % ALPHABET_SIZE;
    inverseKey[1][0] = ((-key[1][0] + ALPHABET_SIZE) * detInverse) % ALPHABET_SIZE;
    inverseKey[1][1] = (key[0][0] * detInverse) % ALPHABET_SIZE;

    int i, j;
    for (i = 0; i < strlen(message); i += 2) {
        int vector[2] = {message[i] - 'a', message[i + 1] - 'a'};
        for (j = 0; j < 2; j++) {
            message[i + j] = 'a' + (vector[0] * inverseKey[0][j] + vector[1] * inverseKey[1][j]) % ALPHABET_SIZE;
        }
    }
}

int main() {
    int choice, key[2][2];
    char message[100];

    do {
        printf("\nMenu:\n");
        printf("(1) Criptografar mensagem\n");
        printf("(2) Descriptografar mensagem\n");
        printf("(3) Encerrar programa\n");
        printf("Escolha: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nDigite a mensagem a ser criptografada (letras minúsculas): ");
                scanf("%s", message);
                printf("Digite a chave de criptografia (4 dígitos): ");
                scanf("%1d%1d%1d%1d", &key[0][0], &key[0][1], &key[1][0], &key[1][1]);
                encrypt(message, key);
                printf("Mensagem criptografada: %s\n", message);
                break;

            case 2:
                printf("\nDigite a mensagem a ser descriptografada (letras minúsculas): ");
                scanf("%s", message);
                printf("Digite a chave de descriptografia (4 dígitos): ");
                scanf("%1d%1d%1d%1d", &key[0][0], &key[0][1], &key[1][0], &key[1][1]);
                decrypt(message, key);
                printf("Mensagem descriptografada: %s\n", message);
                break;

            case 3:
                printf("\nEncerrando programa...\n");
                break;

            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }

    } while (choice != 3);

    return 0;
}
