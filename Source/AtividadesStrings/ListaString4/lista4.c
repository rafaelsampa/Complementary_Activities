#include <stdio.h>
#include <ctype.h>
#include <string.h>

int valida_senha(char senha[]) {
  int i;

  // Verifica o comprimento da senha
  int comprimento = 0;
  for (i = 0; senha[i] != '\0'; i++) {
    comprimento++;
  }
  if (comprimento < 8 || comprimento > 20) {
    return 0;
  }

  // Verifica se a senha contém letras maiúsculas, letras minúsculas, números e símbolos
  int tem_maiuscula = 0;
  int tem_minuscula = 0;
  int tem_numero = 0;
  int tem_simbolo = 0;

  for (i = 0; senha[i] != '\0'; i++) {
    if (isupper(senha[i])) {
      tem_maiuscula = 1;
    } else if (islower(senha[i])) {
      tem_minuscula = 1;
    } else if (isdigit(senha[i])) {
      tem_numero = 1;
    } else if (senha[i] == '$' || senha[i] == '%' || senha[i] == '&' || senha[i] == '@' || senha[i] == '#' || senha[i] == '*' || senha[i] == '?') {
      tem_simbolo = 1;
    }
  }

  if (tem_maiuscula && tem_minuscula && tem_numero && tem_simbolo) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  char senha[21];
  int i = 0;

  printf("Digite uma senha de no mínimo 8 caracteres e no máximo 20 caracteres: ");

  while (1) {
    char c = getchar();
    if (c == '\n') {  // Tecla Enter
      putchar('\n');
      break;
    } else if (c == 8) {  // Tecla Backspace
      if (i > 0) {
        i--;
        putchar('\b');
        putchar(' ');
        putchar('\b');
      }
    } else {
      if (i < 20) {
        senha[i] = c;
        putchar('*');
        i++;
      }
    }
  }

  senha[i] = '\0';

  int valida = valida_senha(senha);

  if (valida) {
    printf("Senha válida\n");
  } else {
    printf("Senha inválida\n");
  }

  return 0;
}