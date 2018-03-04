#include <iostream>
#include <stdio.h>

using namespace std;

int main() 
{
  int n, cont, fat;
  printf("Entre com um numero para calculo do fatorial: ");
  scanf("%d", &n);
  fat = 1;
  cont = 1;
  while (cont <= n) {
    fat = fat * cont;
    cont=cont+1;
  } 
  printf("\n\n""%d"" e o resultado. \n\n",fat);
  system("pause");
}
