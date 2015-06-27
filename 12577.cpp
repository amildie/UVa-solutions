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
		
	string s;
	int i = 1;
	while(getline(cin, s)){
		if(s == "Hajj") cout << "Case " << i << ": Hajj-e-Akbar" << endl; 
		if(s == "Umrah") cout << "Case " << i << ": Hajj-e-Asghar" << endl;
		if(s == "*") break;
		i++;
	}

	return 0;
}
