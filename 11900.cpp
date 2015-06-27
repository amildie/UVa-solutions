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

int max_huev(vector<int>& pesos, int P, int Q){
	//No puedo poner mas de P huevos
	//No pueden pesar mas de Q gramos
	sort(pesos.begin(), pesos.end());
	int n = 0;
	int w = 0;
	for(int i = 0; i < pesos.size(); ++i){
		if(n < P && w+pesos[i] <= Q){
			w += pesos[i];
			n++;
		}else break;
	}
	return n;
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif

	int T; cin >> T;
	for(int i = 0; i < T; ++i){
		int n, P, Q;
		cin >> n >> P >> Q;
		vector<int> pesos;
		int t;
		for(int j = 0; j < n; ++j){
			cin >> t;
			pesos.push_back(t);
		}
		cout << "Case " << i+1 << ": " << max_huev(pesos, P, Q) << endl;
	}
	
	return 0;
}
