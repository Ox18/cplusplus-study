// Repaso sobre structures

#include<iostream>

using namespace std;

struct {
	int myNum;
	string myString;
	
} myStructure;


int main(){
	myStructure.myNum = 1;
	myStructure.myString = "Hello mundo!";
	
	cout<<myStructure.myNum;
	cout<<myStructure.myString;
	
	
	return 0;
}
