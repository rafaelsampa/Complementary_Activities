#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char sentence[81];

  printf("Digite uma frase (máximo 80 caracteres): ");
  fgets(sentence, sizeof(sentence), stdin);

  int i;
  for (i = 0; i < strlen(sentence); i++) {
    char x = sentence[i];
    if (isalpha(x) && (x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u' &&
        x != 'A' && x != 'E' && x != 'I' && x != 'O' && x != 'U')) {
      sentence[i] = '#';
    }
  }

  printf("Frase criptografada: %s", sentence);

  return 0;
}
