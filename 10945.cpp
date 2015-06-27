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
	
	string s;
	while(getline(cin, s)){
		
		if(s == "DONE") break;
		
		s.erase(remove(s.begin(),s.end(),'.'), s.end());
		s.erase(remove(s.begin(),s.end(),','), s.end());
		s.erase(remove(s.begin(),s.end(),'!'), s.end());
		s.erase(remove(s.begin(),s.end(),'?'), s.end());
		s.erase(remove(s.begin(),s.end(),' '), s.end());
		transform(s.begin(),s.end(),s.begin(),::toupper);
		
		bool esPal = true;
		for(int i = 0; i < s.length(); ++i){
			if(s[i] != s[s.length()-1-i]){
				esPal = false;
				break;
			}
		}
		
		if(esPal) cout << "You won't be eaten!" << endl;
		else cout << "Uh oh.." << endl;
	}
	
	return 0;
}
