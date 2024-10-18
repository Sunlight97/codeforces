#include<iostream>

using namespace std;

const int LEN = 30;

int dmin[LEN];
int dmax[LEN];

int minTotal=0, maxTotal=0;
int day=0, total=0;

void schedule(int diff) {
	int d = 0, reminder=0;
	while (diff > 0) {
		reminder = d++ % day;
		if (dmax[reminder] > dmin[reminder]){
			dmax[reminder]--;
			diff--;
		}
	}
}

int main() {
	cin >> day; cin >> total;
	for (int i=0; i<day; i++) {
		cin >> dmin[i]; cin >> dmax[i];
		minTotal += dmin[i];
		maxTotal += dmax[i];
	}

	if (minTotal > total || maxTotal < total) {
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
		schedule(maxTotal - total);
		for (int i=0; i<day; i++) {
			cout << dmax[i] << " ";
		}
		cout << endl;
	}

	return 0;
}

