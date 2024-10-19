// codeforces round 4 (C. Registration system)
// this solution leverages the c++ std

# include <iostream>
# include <string>
# include <unordered_map>

using namespace std;

unordered_map<string, int> db;

int main() {
	int n = 0;
	cin >> n;

	for(int i=0; i<n; i++) {
		string s;  // cin append input to s causing out of bounds
		cin >> s;
		int suffix = 0;
		try {
			suffix = db.at(s);
			db[s] = suffix + 1;
			cout << s << to_string(suffix) << endl;
		}
		catch(const out_of_range& e) {
			db[s] = 1;
			cout << "OK" << endl;
		}
	}

	return 0;
}
