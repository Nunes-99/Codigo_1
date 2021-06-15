// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
    int numero1;
	int numero2;
	int numero3;
	int soma;
	int media;
	int maior;
	int menor;
	
	cout<<"Entre o primeiro numero: ";
	cin>>numero1;
	cout<<"Entre com o segundo numero: ";
	cin>> numero2;
	cout<<"Entre com o terceiro numero: ";
	cin>> numero3;
	
	soma = numero1 + numero2 + numero3;
	cout<<"Soma = "<<soma<<endl;
	
	media = (numero1 + numero2 + numero3) / 3;
	cout<<"	Media = "<<media<<endl;
	
	if (numero1 >= numero2) {
		cout<<"O numero 1 e maior = "<<numero1<<endl;
	}
	else {
        if (numero1 >= numero3) {
		cout<<"O numero 1 e maior = "<<numero1<<endl;
	}
	else {
        if (numero2 >= numero3) {
		cout<<"O numero 2 e maior = "<<numero2<<endl;
	}
	else {
		cout<<"O numero 3 e maior = "<<numero3<<endl;
	}
    }
    }
    }
	
	
      
    return 0; 
} 