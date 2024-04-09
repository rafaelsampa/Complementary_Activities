// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// int main(){


//   char frase[101]; // pq eu vou usar o FGETS
//   int qtdResto = 0;
//   int qtdLet = 0;
//   int qtdNum = 0; 

//   printf("\nWrite DE frase: ");
//   fgets(frase, 100, stdin); // PADRAO

//   for(int i = 0; i < strlen(frase); i++){
//     // LETRAS, NUMEROS e RESTO
//     if(isalpha(frase[i])){ // so alfbeto ISAL
//       qtdLet++;
//     }
//     // numeros
//     else if(frase[i] == '0' ||frase[i] == '1' ||frase[i] == '2' || frase[i] == '3' || frase[i] == '4' || frase[i] == '5' || frase[i] == '6' || frase[i] == '7' || frase[i] == '8' || frase[i] == '9'){
//       qtdNum++;
//     }else{
//       qtdResto++;
//     }
//   }
  
//   printf("Agora é a hora, dos show das poderosas, que mechem, e rebolam: ");
//   printf("\n letras %i \n numeros %i \n trash %i \n", qtdLet,qtdNum,qtdResto);

//   return 0;
// }