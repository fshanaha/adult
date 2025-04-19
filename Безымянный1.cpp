#include <iostream>
using namespace std;

int main() {
	string list[10] = {};
	
	for (int i = 0; i < 10; i++) {
		string tmp;
		getline(cin, tmp);
		
		if (tmp == "0") {
			break;
		}
		list[i] = tmp;
	}
	
	cout << "Shop list:" << endl;
	for (int count = 0; count < 10; count++) { 
		cout << list[count] << endl;
	} 
	return 0;	
}


