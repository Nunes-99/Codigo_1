// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 

int cubo(int num){
	cout<<"chamou int "<<endl;
	return num*num*num;
}
float cubo(float num, int x){
	cout<<"chamou float" <<endl;
	return num*num*num;
}
double cubo(double num){
	cout<<"chamou double" <<endl;
	return num*num*num;
}
// main function - 
// where the execution of program begins 
int main() 
{ 	
	cout<<cubo(4)<<endl;
	cout<<cubo(12.5, 3)<<endl;
	cout<<cubo(4567.89)<<endl;
    return 0; 
} 