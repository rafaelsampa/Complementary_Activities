// #include <stdio.h>
// #include <string.h>
// // Length
// #define Len 3   

// typedef struct Student {
//   char name[30];
//   float mean;
//   int absence;
// } Stdt;

// void showOptions () {
//   printf ("\n\nOptions \n");
//   printf ("1 - Register student \n");
//   printf ("2 - Show students registered \n");
//   printf ("0 - End program \n");
//   printf ("Choose an option: ");
// }

// void filldada (Stdt *clo) {
//   printf ("Name: ");
//   fgets(clo->name, 30, stdin); // fflush (stdin);
//   printf ("\nMean: ");
//   scanf  (" %f", clo->mean); // fflush (stdin);
//   printf ("\nAmount of absence: ");
//   scanf (" %d", clo->absence); 
//   fflush (stdin);
// }

// void insertit (Stdt vet[], int *qtd, Stdt clo) {
//   if(*qtd == Len) {
//     printf ("Class full ! No vacancies ! \n");
//   }
//   else if (*qtd == 0) {
//     vet[0] = clo;
//     printf ("Student registered ! \n");
//   }
//   else {
//     // opisi
//   }
// }

// void showit ( Stdt vet[], int qtd) {
//   int i;
//   if (qtd == 0) {
//     printf ("No Students registered yet\n");
//   }
//   else {
//     for (i = 0; i < qtd ; i++) {
//       printf ("Student %d \n", i+1);
//       printf ("Name: %s \n", vet[i].name);
//       printf ("Mean: %f \n", vet[i].mean);
//       printf ("Amount of absences: %d \n", vet[i].absence);
//     }
//   }
// }

// int main (void ) {

//   // list of "BOXES", ou seja, 
//   // lista de struct (Cada estudante será uma caixa)
//   // Logo, Kd um será uma caixa alocada na posicao do vetor classes
//   Stdt classes [Len];

  
//   Stdt clock; // Variavel de auxiliar p/ insercao em procedimentos
//   int i, op;
//   int total = 0;

//   do {
//     showOptions();
//     scanf (" %i", &op); fflush (stdin); 

//     switch (op) {
//       case 1: filldada(&clock);
//               insertit(classes, &total, clock);
//               break;
//       case 2: showit(classes, total);
//               break;
//       case 0: printf("Bye bye \n");
//               break;
//       default: printf("Invalid Option ! \n");
      
//     }
    
//   } while (op != 0);
//   return 0;
// }
