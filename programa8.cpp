// Simple C++ program to display "Hello World" 
// Header file for input output functions 
#include<iostream>  
#include<iomanip>
  
using namespace std; 

void troca(int& c, int& d)
{
	int temp = c;
	c=d;
	d=temp;
	//cout<<c<<" dentro "<<d<<endl;
}  
// main function - 
// where the execution of program begins 
int main() 
{ 
	int a=10, b=5;
	cout<<a<<" "<<b<<endl;
	troca(a,b);
	cout<<a<<" "<<b<<endl;
	
    return 0; 
} 