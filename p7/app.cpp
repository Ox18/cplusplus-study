#include<iostream>

using namespace std;

int main(){

	string food = "pizza";
	string &meal = food;
	string soda = "inka cola";
	string cola = soda;
	
	cout << food<<endl;
	cout << meal<<endl;
	cout << soda<<endl;
	cout << cola<<endl;
	
	food = "burguer";
	soda = "Coca cola";
	
	cout << "----" <<endl;
	cout << food<<endl;
	cout << meal<<endl;
	cout << soda<<endl;
	cout << cola<<endl;	
	
	return 0;
}
