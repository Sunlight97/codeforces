#include <iostream>

using namespace std;

int main(){
	int weight {0};
	cin >> weight;
	if(weight % 2 == 0 && weight > 3)
		cout << "YES" << "\n";
	else
		cout << "NO" << "\n";
	return 0;
}

