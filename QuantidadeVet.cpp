// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 

// main function - 
// where the execution of program begins 
int main() 
{ 
	int *numeros, tam , i;
	cout<<"Digite a qtd do vetor"<<endl;
	cin>>tam;
	
	numeros = new int[tam];
	for(i=0;i<tam;i++)
		numeros[i]=i+1;
	
	for(i=0;i<tam;i++)
		cout<<numeros[i]<<" ";
	
	delete [] numeros;
	
	
    return 0; 
} 