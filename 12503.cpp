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
		//freopen("test.out", "w", stdout);
	#endif
	
	int t; cin >> t;
	for(int j = 0; j < t; ++j){
		int n; cin >> n;
		vector<string> pastMoves;
		int p = 0;
		string s;
		getline(cin, s);
		for(int i = 0; i < n; ++i){
			getline(cin, s);
			if(s == "LEFT") p--;
			else if(s == "RIGHT") p++;
			else{
				while(s != "LEFT" && s != "RIGHT"){
					s.erase(0, 8);
					int index = stoi(s);
					s = pastMoves[index-1];
				}
				if(s == "LEFT") p--;
				else if(s == "RIGHT") p++;
			}
			pastMoves.push_back(s);
		}
		cout << p << endl;
	}
	return 0;
}
