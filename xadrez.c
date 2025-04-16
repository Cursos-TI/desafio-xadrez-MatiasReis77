#include <stdio.h>
 
int main() {
 
     int i, mov ;
    
     //movimento do bispo:
    
         printf("MOVIMENTO DO BISPO:\n");
         printf("Escolha quantas casas deseja mover o BISPO:\n");
         scanf ("%d",&mov);
         printf("*************************\n");
    
         for(i = 0; i < mov; i++)
         {
             printf("%d - para cima \n",i+1);
             printf("%d - para a direita\n",i+1);
         }
     //movimento da torre:
    
         printf("MOVIMENTO TORRE :\n");
         printf("escolha quantas casas deseja mover a TORRE:\n");
         scanf ("%d",&mov); 
         printf("*************************\n");
 
         for(i = 0;i < mov; i++)
         {
             printf("%d - para direita \n",i+1);
         }
     //movimento da rainha:
    
         printf("MOVIMENTO DA RAINHA\n");
         printf("escolha quantas casas deseja mover a RAINHA:\n");
         scanf ("%d",&mov);
         printf("*************************\n");
 
         for(i = 0; i < mov ; i++)
         {
             printf("%d para a esquerda \n", i+1);
         }
 
     
    return 0;
 }
