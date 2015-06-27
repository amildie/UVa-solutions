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

void draw_wave(int a){
	int max = a;
	int h = 1;
	bool up = true;
	for(int i = 0; i < (2*a)-1; ++i){
		for(int j = 0; j < h; ++j){
			cout << h;
		}cout << endl;
		if(up) h++;
		else h--;
		if(h >= a) up = false;		
	}
}

int main(){
	
	#ifdef TEST
		freopen("test.in", "r", stdin);
		freopen("test.out", "w", stdout);
	#endif

	//amplitud (altura)
	//frecuencia (cantidad de veces que la vamos a mostrar)
	int n; cin >> n;

	for(int t = 0; t < n; ++t){

		int a; cin >> a;
		int f; cin >> f;

		for(int i = 0; i < f; ++i){
			draw_wave(a);
			if(!(i == f-1 && t == n-1))
			cout << endl;
		}

	}


	return 0;
}
