#include<iostream>
#include<string>

using namespace std;

int main(int argc, char *argv[])
{
	int lineno {0};
	cin >> lineno;
	
	string output {};
	int len {0};

	string line {};
	// for(; lineno-- > 0; cin >> line){
	while(lineno-- > 0){
		cin >> line;
		len = line.length();
		output += (len > 10) ? line[0] + to_string(len - 2) + line[len-1]: line;
		output += '\n';
	}

	cout << output;
	return 0;
}

