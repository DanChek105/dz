#include <iostream>

using namespace std;

int main(){
	char str[100];
	cin.getline(str, 40);
	int size = strlen(str);
	int palin = 0;
	for (int i = 0; i < size/2; i++) {
		if (str[i] != str[size - i - 1]) {
			cout << "no";
			palin = 1;
			break;
		}

	}
	if (palin == 0) {
		cout << "yeah";
	}

}