#include <stdio.h>
#include <stdlib.h>

int main()
{
  float numero;
  scanf("%f", &numero);
  if (0<=numero && numero<=25){
    printf("Intervalo [0,25]\n");
  }
  else if (25.00<numero && numero<=50){
    printf("Intervalo (25,50]\n");
  }
  else if (50<numero && numero<=75){
    printf("Intervalo (50,75]\n");
  }
  else if (75<numero && numero<=100){
    printf("Intervalo (75,100]\n");
  }
  else {
    printf("Fora de intervalo\n");
  }
    return 0;
}
