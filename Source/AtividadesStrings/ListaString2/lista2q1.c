#include <stdio.h>
#include <string.h>
#define tam 10

int palindromo(char vetor[tam]);

int main(){

  char vetor[tam];
  
  int eh = 3;

  printf("\nDigite uma sequencia de caracteres: ");
  fgets(vetor, tam-1, stdin);

  char stage1[tam];
  char stage2[tam];
  int i,j;
  char control;

  j = 0;
  for(i = 0; i < strlen(vetor); i++){  //    |Eu sou Rafa|
    if(vetor[i] != ' '){
      stage1[j] = vetor[i];
      j++;
    }
  }

  stage1[j] = '\0';
  strcpy(stage2,stage1);

  for(i = 0, j = strlen(stage2)-1; i < j; i++, j--) {
    control = stage2[i];
    stage2[i] = stage2[j];
    stage2[j] = control;
  }
  printf("\n%s\n\n", vetor);
  printf("\n%s", stage1);
  printf("\n%s", stage2);

  
  if(strcmp(stage2,stage1)==0){
     printf("\nEh pali");
  }else{
     printf("\nNao é");
  }
  // eh = palindromo(vetor);
  // if(eh == 1){
  //   printf("\nÉ um palindromo\n");
    
  // }else if(eh == 0){
  //   printf("\nNão é um palindromo\n");
  // }
  
  
  return 0;
}

// int palindromo(char vetor[tam]){
//   char stage1[tam];
//   char stage2[tam];
//   int i,j;
//   char control;
  
//   j = 0;
//   for(i = 0; i < strlen(vetor); i++){  //    |Eu sou Rafa|
//     if(vetor[i] != ' '){
//       stage1[j] = vetor[i];
//       j++;
//     }
//   }
  
//   stage1[j] = '\0';
//   strcpy(stage2,stage1);
 
//   for(i = 0, j = strlen(stage2)-1; i < j; i++, j--) {
//     control = stage2[i];
//     stage2[i] = stage2[j];
//     stage2[j] = control;
//   }
  
//   if(strcmp(stage2,stage1)==0){
//      return 1;
//   }else{
//      return 0;
//   }
  
  
// }