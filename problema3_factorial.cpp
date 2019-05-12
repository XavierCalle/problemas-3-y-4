#include<iostream>
using namespace std;

int facto(int n);
string muestra(int n);

int main(){
	int n;
	cout<<"Ingrese un numero => ";
	cin>>n;
	cout<<endl;
	cout<<muestra(n)<<facto(n);		
	return 0;
}

int facto(int n)
{
    int fact;
    if (n==0)
		return 1;
    else
        return n*facto(n-1);
} 

string muestra(int n){
	
	if(n==1){
		cout<<n;
		string t="= ";
		return t;
	}
	else{
		cout<<n<<".";
	}
	return muestra(n-1);	
}

