#include<iostream>

using namespace std;

int main(){
	
	// memory address
	string food = "pizza";
	
	cout << food;
	cout << &food;

	
	// pointer value
	string* ptr = &food;
	
	cout << food << "\n";
	cout << &food << "\n";
	cout << ptr << "\n";
	
	
	return 0;
}
