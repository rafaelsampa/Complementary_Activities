#include <stdio.h>
#include <string.h>

void encrypt(char sentence[]);

int main() {
  char sentence[81];

  printf("Digite uma frase (máximo 80 caracteres): ");
  fgets(sentence, sizeof(sentence), stdin);

  encrypt(sentence);

  printf("Frase criptografada: %s", sentence);

  return 0;
}

void encrypt(char sentence[]) {
  int i;
  for (i = 0; i < strlen(sentence); i++) {
    char c = sentence[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      sentence[i] = '*';
    }
  }
}