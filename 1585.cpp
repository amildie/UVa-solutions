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
using namespace std;

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
	    freopen("test.out", "w", stdout);
	#endif
	
	int n;
	cin >> n;
	for(int t = 0; t < n; ++t){
		
		string s;
		cin >> s;

		int n = 0;
		int sum = 0;
		for(int i = 0; i < s.length(); ++i){
			if(s[i] == 'O') n++;
			else n = 0;
			sum += n;
		}

		cout << sum << endl;
	}

	return 0;
}
