#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	
	int suma = 0;
	
	int numeros[6] = {1,2,3,4,5,6};
	
	for(int i = 0; i < 6; i++){
		suma += numeros[i];
	}
	
	cout<<suma;
	
	return 0;
}
