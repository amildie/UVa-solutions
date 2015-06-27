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
	
	while(true){
		int n; cin >> n;
		if(n == 0) break;
		string s; cin >> s;

		for(int i = 0; i < s.length(); ++i){
			string t = "";
			int m = s.length()/n;
			for(int j = 0; j < m; ++j, ++i){
				t += s[i];
			}
			--i;
			reverse(t.begin(), t.end());
			cout << t;
		}
		cout << endl;
	}

	return 0;
}
