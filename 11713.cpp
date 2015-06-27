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

bool esVocal(char c){
	if((int) c == 97 || (int) c == 101 || (int) c == 105 || (int) c == 111 || (int) c == 117) return true;
	else return false;
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
	    freopen("test.out", "w", stdout);
	#endif
	
	int n;
	cin >> n;

	//valores de vocales: 97 101 105 111 117

	for(int i = 0; i < n; ++i){
		string s, t;
		cin >> s >> t;
		if(s.length() != t.length()) cout << "No" << endl;
		else{
			for(int j = 0; j < s.length(); ++j){
				if((esVocal(s[j]) && !esVocal(t[j])) || (!esVocal(s[j]) && esVocal(t[j]))){
					cout << "No" << endl; 
					break;
				}else if((!esVocal(s[j]) && !esVocal(t[j])) && s[j] != t[j]){
					cout << "No" << endl;
					break;
				}
				if(j == s.length()-1){
					cout << "Yes" << endl;
					break;					
				}
			}

		}

	}


	return 0;
}
