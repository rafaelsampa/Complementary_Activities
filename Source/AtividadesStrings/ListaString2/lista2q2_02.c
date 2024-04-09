// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// #define tam 100

// int palindromo(char frase[]);

// int main() {
//   char frase[tam];

//   printf("\nWrite a phrase: ");
//   fgets(frase, tam, stdin);

//   int resultado = palindromo(frase);
//   if (resultado == 1) {
//     printf("It is a palindrome.");
//   } else {
//     printf("It is not a palindrome.");
//   }

//   return 0;
// }

// int palindromo(char frase[]) {
//   int tamanho = strlen(frase) - 1; // Subtract 1 to exclude the newline character
//   int i, j;

//   for (i = 0, j = tamanho - 1; i < j; i++, j--) {
//     while (!isalpha(frase[i])) {  // Skip non-alphabetic characters
//       i++;
//     }
//     while (!isalpha(frase[j])) {  // Skip non-alphabetic characters
//       j--;
//     }

//     if (tolower(frase[i]) != tolower(frase[j])) { // Compare characters case-insensitively
//       return 0; // Not a palindrome
//     }
//   }

//   return 1; // Palindrome
// }

