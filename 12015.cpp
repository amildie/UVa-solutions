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
using namespace std;

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif

	int n; cin >> n;
	for(int i = 0; i < n; ++i) {
		string s;
		int m;
		int max = -1;
		vector<string> most; 
		for(int j = 0; j < 10; ++j) {
			cin >> s;
			cin >> m;
			
			if(m > max) {
				max = m;
				most.clear();
				most.push_back(s);
			} else if(m == max) most.push_back(s);
		}
		
		cout << "Case #" << i+1 << ":" << endl;
		for(int k = 0; k < most.size(); ++k) {
			cout << most[k] << endl;
		}
		
		
	}
	
	return 0;
}
