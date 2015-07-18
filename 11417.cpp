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
#include <cstring>
#include <queue>
#ifdef TEST
	#include "tools.h" 
#endif
using namespace std;

int GCD(int i, int j) {
    if(j == 0) return i;
    return GCD(j, i%j);
}

int G(int N) {
    int G = 0;
    for(int i = 1; i < N; i++) {
        for(int j = i+1; j <= N; j++) {
            G += GCD(i,j);
        }
    }
    return G;
}

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif
    
	int N;
    while(cin >> N && N > 0)
        cout << G(N) << endl;    
    
    return 0;
}
