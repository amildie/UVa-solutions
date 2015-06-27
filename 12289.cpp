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
	
	string word;
	int n; cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> word;
		if(word.length() == 5) cout << "3" << endl;
		else{
			if(word[0] == 'o' && word[1] == 'n') cout << "1" << endl;
			else if(word[0] == 'o' && word[2] == 'e') cout << "1" << endl;
			else if(word[1] == 'n' && word[2] == 'e') cout << "1" << endl;
			else if(word[0] == 't' && word[1] == 'w') cout << "2" << endl;
			else if(word[0] == 't' && word[2] == 'o') cout << "2" << endl;
			else if(word[1] == 'w' && word[2] == 'o') cout << "2" << endl;
		}
	}

	return 0;
}
