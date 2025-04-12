#include <stdio.h>

void moverBispo(int casas) { // Recursividade do Bispo utilizando Loop Aninhado para produzir 5 casas em diagonal
   for (int vertical = 0; vertical < 5; vertical++) {
      printf("Cima\n");
      for (int horizontal = 0; horizontal < 1; horizontal++) {
         printf("Direita\n");
      }
      
   }
   
}
void moverTorre(int casas) { // Recursividade da Torre para produzir 5 casas para Direita
   if (casas > 0)
   {
      printf("Direita\n");
      moverTorre(casas - 1);
   }
   
}
void moverRainha(int casas) { // Recursividade da Rainha para produzir 8 casas para Esquerda
   if (casas > 0)
   {
      printf("Esquerda\n");
      moverRainha(casas - 1);
   }
   
}


int main(){
   printf("Movemento do Bispo:\n");
   moverBispo(0);

   printf("Movemento da Torre:\n");
   moverTorre(5);
   
   printf("Movemento da Rainha:\n");
   moverRainha(8);

   printf("Movemento do Cavalo:\n"); // Loop Complexo do Cavalo para produzir um movemento em formato de 'L'
   for (int i = 0; i < 2; i++) {
      if (i == 2) continue;
      printf("Cima\n");
      
   } for (int j = 0; j < 1; j++) {
      printf("Direita\n");
      break;
   }
   
   



return 0;


}