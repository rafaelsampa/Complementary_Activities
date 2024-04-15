#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


// Função para criptografar uma frase usando uma cifra de substituição simples
void criptografarFrase(char frase[]) {
  int i;
  for (i = 0; i < strlen(frase); i++) {
    if (frase[i] >= 'a' && frase[i] <= 'z') {
      // Transformação linear simples (adição de 1 ao código ASCII)
      frase[i] = (frase[i] - 'a' + 1) % 26 + 'a';
  } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
      // Transformação linear simples (adição de 1 ao código ASCII)
      frase[i] = (frase[i] - 'A' + 1) % 26 + 'A';
    }
  }
}

// Função para criptografar uma palavra usando uma cifra de substituição simples
void criptografarPalavra(char palavra[]) {
  int i;
  int aleat;
  aleat = rand() % 26;
  for (i = 0; i < strlen(palavra); i++) {
    // Transformação linear simples (adição de 1 ao código ASCII)
    palavra[i] = (palavra[i] - 'a' + aleat) % 26 + 'a';
  }
}

// Função para descriptografar uma frase usando uma cifra de substituição simples
void descriptografarFrase(char frase[]) {
  int i;
  for (i = 0; i < strlen(frase); i++) {
    if (frase[i] >= 'a' && frase[i] <= 'z') {
      // Transformação linear inversa (subtração de 1 ao código ASCII)
      frase[i] = (frase[i] - 'a' - 1 + 26) % 26 + 'a';
    } else if (frase[i] >= 'A' && frase[i] <= 'Z') {
      // Transformação linear inversa (subtração de 1 ao código ASCII)
      frase[i] = (frase[i] - 'A' - 1 + 26) % 26 + 'A';
    }
  }
}

int main() {
  int escolha;
  char texto[100];

  srand(time(0));

  do {
    printf("\n\n\n(1) Criptografar uma frase\n");
    printf("(2) Criptografar uma palavra\n");
    printf("(3) Descriptografar uma frase\n");
    printf("(4) Encerrar o programa\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &escolha);

    switch (escolha) {
      case 1:
        printf("\n\n\nDigite a frase a ser criptografada: ");
        getchar();  // Consumir o caractere de nova linha pendente
        fgets(texto, sizeof(texto), stdin);
        criptografarFrase(texto);
        printf("Frase criptografada: %s", texto);
        break;

      case 2:
        printf("\n\n\nDigite a palavra a ser criptografada: ");
        scanf("%s", texto);
        criptografarPalavra(texto);
        printf("Palavra criptografada: %s\n", texto);
        break;

      case 3:
        printf("\n\n\nDigite a frase a ser descriptografada: ");
        getchar();  // Consumir o caractere de nova linha pendente
        fgets(texto, sizeof(texto), stdin);
        descriptografarFrase(texto);
        printf("Frase descriptografada: %s", texto);
        break;

      case 4:
        printf("Encerrando o programa.\n");
        break;

      default:
        printf("Opcao invalida. Tente novamente.\n");
    }

  } while (escolha != 4);

  return 0;
}
