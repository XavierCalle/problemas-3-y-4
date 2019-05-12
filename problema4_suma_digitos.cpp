#include<iostream>
using namespace std;

int suma(int n);

int main(){
	
	int n=0;
	cout<<"Ingrese un numero => ";
	cin>> n;
	cout<<suma(n);
	
	return 0;
}

int suma(int n){
	if(n>0){
		return (n%10)+suma(n/10);
	}
	else
		return 0;
}
