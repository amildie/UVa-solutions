#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	
	#ifdef test
		freopen("ageSort.in", "r", stdin);
		freopen("ageSort.out", "w", stdout);
	#endif
	
	int n;
	int t;
	
	while(true){
		
		int cantEdades[101] = {0};
		
		cin >> t;
		int edadMax = 0;
		
		if(t == 0) break;
		
		for(int k = 0; k < t; ++k){
			cin >> n;
			cantEdades[n]++;
			if(n > edadMax)
				edadMax = n;
		}
		
		for(int i = 0; i <= edadMax; ++i){
			for(int j = 1; j <= cantEdades[i]; ++j){
				if(j == cantEdades[edadMax] && i == edadMax){
					cout << i << endl;
				}else{
					cout << i << " ";
				}
			}
		}
		
	}
	
	return 0;
}
