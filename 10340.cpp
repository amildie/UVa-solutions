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
	
	string s, t;
	while(cin >> s >> t){
		
		//cout << "quiero ver que s:" << s << " esta adentro de t:" << t << endl;
		
		int n = 0;
		int j = 0;
		for(int i = 0; i < s.length(); ++i){
			while(j < t.length()){
				if(s[i] == t[j]){
					t[j] = '-';
					n++;
					break;
				}
				++j;
			}
		}
		if(n == s.length()) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	
	return 0;
}
