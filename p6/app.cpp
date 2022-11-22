#include<iostream>

using namespace std;

struct {
	string pass;
} keyUser, keyPanel, keyDashboard;

int main(){
	
	keyUser.pass = "Abc.";
	keyPanel.pass = "Bcd.";
	keyDashboard.pass = "Cde.";
	
	return 0; 
}
