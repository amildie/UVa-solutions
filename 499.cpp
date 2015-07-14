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
#include <cctype>
#include <cstring>
using namespace std;

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif

	string s;
	int charCount[1000];
	memset(charCount, 0, sizeof(charCount));
	
	while(getline(cin, s)) {
		
		int max = -1;
		vector<char> most;
		bool atLeastOneValid = false;
		
		for(int i = 0; i < s.length(); ++i) {
			if(isalnum(s[i])) {
				atLeastOneValid = true;
				charCount[s[i]]++;
				if(charCount[s[i]] > max) {
					max = charCount[s[i]];
					most.clear();
					most.push_back(s[i]);
				} else if(charCount[s[i]] == max) {
					most.push_back(s[i]);
				}
			}
		}
		
		if(s.length() == 0 || !atLeastOneValid) {
			cout << "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz 0" << endl;
			continue;
		}
				
		sort(most.begin(), most.end());
		for(int i = 0; i < most.size(); ++i) {
			cout << most[i];
		}
		cout << " " << max << endl;
		
		memset(charCount, 0, sizeof(charCount));
		
	}
	
	return 0;
}
