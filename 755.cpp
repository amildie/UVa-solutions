#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <map>
using namespace std;

string clearInput(string s) {
	string trans = "22233344455566677778889999";
	string t;
	for(int i = 0; i < s.length(); ++i) {
		if(s[i] != '-')
			if(s[i] > 64)
				t += trans[s[i]-65];
			else
				t += s[i];
	}	
	return t;
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif
	
	int n, m;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		
		cin >> m;
		map<string, int> numbers;
		string s;
	
		for(int j = 0; j < m; ++j) {
			cin >> s;
			string num = clearInput(s);
			if(numbers.find(num) == numbers.end())
				numbers.insert(pair<string,int>(num,1));
			else
				numbers[num]++;
		}
	
		bool noDups = true;
		for(map<string,int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
			if(it->second > 1) {
				cout << it->first.substr(0, 3) << "-" << it->first.substr(3, 7) << " " << it->second << endl;
				noDups = false;
			}
		}
		if(noDups) cout << "No duplicates.\n";
		if(i < n-1) cout << endl;
		
	}
	
	return 0;
	
}
