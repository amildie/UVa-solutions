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

char convert(char c){
	if(c == 'W') return '%';
	if(c == '%') return 'J';
	if(c == '?') return '\"';
	if(c == '\"') return '_';
	if(c == '\\') return '\\';


	string map_1 = " qwertyuiopasdfghjklzxcvbnmQERTYUIOPASDFGHJKLZXCVBNM1234567890,.<>[]{}~!@#$*()_+':|`=-;/^&";
	string map_2 = " 456.orsuyb789aehtdc0zx,inw$^>ORSUYB&*(AEHTDC)ZX<INW123qjlmfp/vgVG;=:+~!@#QFP?{}-K|`][k'LM";
	int pos = map_1.find(c);
	return map_2[pos];
}

/*
`1234567890-=qwertyuiop[]\asdfghjkl;'zxcvbnm,./~!@#$%^&*()_+QWERTYUIOP{}|ASDFGHJKL:"ZXCVBNM<>?
`123qjlmfp/[]456.orsuyb;=\789aehtdck-0zx,inwvg'~!@#QJLMFP?{}$%^>ORSUYB:+|&*(AEHTDCK_)ZX<INWVG"
*/

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
	    freopen("test.out", "w", stdout);
	#endif
	
	string s;
	while(getline(cin, s)){
		for(int i = 0; i < s.length(); ++i){
			cout << convert(s[i]);
		}
		cout << endl;
	}


	return 0;
}
