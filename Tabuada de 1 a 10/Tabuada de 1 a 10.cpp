#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <cstdlib>
#include <math.h>
int main (){
    float num,i,x,cont; //Delaração de variaveis.
    int opcao;
    
    i=0;
    x=0;
    cont=0;
    
    printf("Digite de 1 a 10 para escolher qual tabuata sera apresentada: \n\n");
    scanf("%f",&x);
    
    while((x<0)||(x>10))
    {printf("Valor invalido. Digite um valor de 1 a 10: \n\n");
    scanf("%f",x);}

inicio:

    puts("Digite 1 para soma: ");
    puts("Digite 2 para subtracao: ");
    puts("Digite 3 para multiplicacao: ");
    puts("Digite 4 para divisao: ");
    scanf("%d",&opcao);

    system("cls");

switch(opcao)
    {
    case 1:
    x=x-1;
    do{
            x=x+1;
            printf("\n");
            printf("Tabuada %.0f\n\n",x);
    for(i=1;i<=10;i++)
    {printf("%.0f + %.0f = %.0f \n",x,i,(x+i));}}
    while (x<10); 
        break;        
/*-----------------------------------------------------------*/
    case 2:
    x=x-1;
    do{
            x=x+1;
            printf("\n");
            printf("Tabuada %.0f\n\n",x);
    for(i=1;i<=10;i++)
    {printf("%.0f - %.0f = %.0f \n",x,i,(x-i));}}
    while (x<10); 
        break;
/*-----------------------------------------------------------*/
    case 3:
    x=x-1;
    do{
            x=x+1;
            printf("\n");
            printf("Tabuada %.0f\n\n",x);
    for(i=1;i<=10;i++)
    {printf("%.0f * %.0f = %.0f \n",x,i,(x*i));}}
    while (x<10); 
        break;
 /*-----------------------------------------------------------*/       
    case 4:
    x=x-1;
    do{
            x=x+1;
            printf("\n");
            printf("Tabuada %.0f\n\n",x);
    for(i=1;i<=10;i++)
    {printf("%.0f / %.0f = %.2f \n",x,i,(x/i));}}
    while (x<10); 
        break;
 /*-----------------------------------------------------------*/
    default:
    printf("Valor invalido. Tente novamente: \n\n");
    goto inicio;
    break;
    }
     system("pause");
    }
