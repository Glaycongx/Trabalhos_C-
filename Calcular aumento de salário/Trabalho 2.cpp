#include <iostream>
using namespace std;
int main()

/*
Quest�o 1
*/

{float salario,ind,total,aumento;
       
    printf("\n""Por favor, informe qual o valor do seu salario: \n\n");
    scanf("%f",&salario);
    
    printf("\n""Por favor, informe o percentual de aumento (Ex.: 1.5, 3): \n\n");
    scanf("%f",&ind);
    
    system("cls");
    
    total=(salario+(salario*(ind/100)));
    aumento=(total-salario);
    
    
    printf("\n""Voc� teve um aumento de ""%.2f"" e seu novo sal�rio � de R$ ""%f",aumento,total);
    
    system ("pause");
}
