#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

int main(){
	
	int vet1[5],vet2[5],somavet[5];
	
	cout<<"----------------------------------- Vetor 1 --------------------------------"<<endl<<endl;
	
	for (int i=0;i<5;i++)
	{
		
		cout<<"Informe um valor :"<<endl;
		cin>>vet1[i];
	}
	
	cout<<"--------------------------------- Vetor 2-----------------------------------"<<endl<<endl;
	
	for (int i=0;i<5;i++)
	{
		
		cout<<"Informe um valor :"<<endl;
		cin>>vet2[i];
		
	}
	
	cout<<"----------------------------- Soma ----------------------------------------"<<endl<<endl;
	
	
	
	for (int i=0;i<5;i++)
	{
		if(vet1[0]==vet2[0]){
			
			somavet[i]=vet1[0]+vet2[0];
			
			cout<<endl<<"A soma dos indices iguais e: "<<somavet[i];
	}

     if(vet1[1]==vet2[1]){
			
			somavet[i]=vet1[1]+vet2[1];
			
			cout<<endl<<"A soma dos indices iguais e: "<<somavet[i];
    }
    if(vet1[2]==vet2[2]){
			
			somavet[i]=vet1[2]+vet2[2];
			
			cout<<endl<<"A soma dos indices iguais e: "<<somavet[i];
    }
    if(vet1[3]==vet2[3]){
			
			somavet[i]=vet1[3]+vet2[3];
			
			cout<<endl<<"A soma dos indices iguais e: "<<somavet[i];
    }
    if(vet1[4]==vet2[4]){
			
			somavet[i]=vet1[4]+vet2[4];
			
			
			cout<<endl<<"A soma dos indices iguais e: "<<somavet[i]<<endl;
    break;
	}
    

		else  {
			
			cout<<endl<<"Nenhum outro indice igual para somar "<<endl;
			break;
		}
	}
	
	system ("pause");
	
	return 0;
	
}
	
