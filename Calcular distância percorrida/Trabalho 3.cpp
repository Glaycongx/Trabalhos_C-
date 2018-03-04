#include <iostream>
using namespace std;

int main()

/*
Questão 3 - Faça um programa para calcular e informar a km percorrida e o tempo 
gasto em horas de um deslocamento. O programa deve receber, a origem, o
destino, o km inicial, o km final, a hora inicial e a hora final.
*/

{char origem[256],destino[256];
int km_ini,km_fin,hr_ini,min_ini,hr_fin,min_fin,km,hr,min,hora,minutos;

    printf("Informe o local de origem: \n\n");
    cin.getline(origem,256);
      
    printf("\n\n""Informe o local de destino \n\n");
    cin.getline(destino,256);

    printf("\n\n""Informe a quilometragem inicial: \n\n");
    scanf("%d",&km_ini);
    
    printf("\n\n""Informe a quilometragem final: \n\n");
    scanf("%d",&km_fin);
    
    system("cls");
    
    printf("\n\n""Informe a hora inicial (de 0 a 23): \n\n");
    scanf("%d",&hr_ini);
    
    while ((hr_ini<0)||(hr_ini>23))
    {puts("\n""Valor invalido. Digite novamente: \n");
    scanf("%d",&hr_ini);}
    
    printf("\n""Informe os minutos (de 0 a 59): \n\n");
    scanf("%d",&min_ini);
    
    while ((min_ini<0)||(min_ini>=60))
    {puts("\n""Valor invalido. Digite novamente: \n");
    scanf("%d",&min_ini);}
    
    printf("\n""Informe a hora final (de 0 a 23): \n\n");
    scanf("%d",&hr_fin);
    
    while ((hr_fin<0)||(hr_fin>23))
    {puts("\n""Valor invalido. Digite novamente: \n");
    scanf("%d",&hr_fin);}
    
    printf("\n""Informe os minutos (de 0 a 59): \n\n");
    scanf("%d",&min_fin);
    
    while ((min_fin<0)||(min_fin>=60))
    {puts("\n""Valor invalido. Digite novamente: \n");
    scanf("%d",&min_fin);}
        
    km=(km_fin-km_ini);
    hr=(hr_fin-hr_ini);
    min=(min_fin-min_ini);
    hora=((hr_ini-hr_fin)-23)*(-1);
    minutos=((min_ini-min_fin)-60)*(-1);
    
    system("cls");
    
    if ((hr_ini<=hr_fin)&&(min_fin>=min_ini))
    {printf("Voce percorreu de ""%s"" ate ""%s"" %d"" quilometros, durante ""%d"" horas e ""%d"" minutos. \n\n",origem,destino,km,hr,min);}
    
    else if ((hr_ini>=hr_fin)&&(min_fin>=min_ini))
    {printf("Voce percorreu de ""%s"" ate ""%s"" %d"" quilometros, durante ""%d"" horas e ""%d"" minutos. \n\n",origem,destino,km,hora,min);}
    
    else if ((hr_ini<=hr_fin)&&(min_fin<=min_ini))
    {printf("Voce percorreu de ""%s"" ate ""%s"" %d"" quilometros, durante ""%d"" horas e ""%d"" minutos. \n\n",origem,destino,km,hr,minutos);}
    
    else if ((hr_ini>=hr_fin)&&(min_fin<=min_ini))
    {printf("Voce percorreu de ""%s"" ate ""%s"" %d"" quilometros, durante ""%d"" horas e ""%d"" minutos. \n\n",origem,destino,km,hora,minutos);}
    
    system("pause");

}
    
    
    
    
    
    
    
    
    
    
    
