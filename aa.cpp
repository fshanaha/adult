#include <iostream>
using namespace std;

int main(){
	string dev = "sev";
    int num = 0;
	string name;
	cin >> name;
	while(name != "0"){
		for(short i = 0; i <= 100; i++) {
    		cout << name << " ";
		}
		cout << '\n';
		cin >> name;
	}
	
    return 0;
}
