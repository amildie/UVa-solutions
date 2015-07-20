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
#include <math.h>
#ifdef TEST
	#include "tools.h" 
#endif
using namespace std;

void calculate(int L){
    double w = (double) (60 * L) / 100;
    double r = (double) L / 5;
    double circArea = 2*acos(0.0)*r*r;
    double rectArea = (double) (L * w) - circArea;
    cout << setiosflags(ios::fixed) << setprecision(2) << circArea << " " << rectArea << endl;
}


int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif
    
	int T, L;
    cin >> T;
    while(T--) {
        cin >> L;
        calculate(L);
    }

    return 0;
}
