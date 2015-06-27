#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <cstdio>
using namespace std;

int sumarDigitos(int n){
    int r = 0;
    int m = 0;
    while(n!=0){
        r = n%10;
        n = n/10;
        m = m+r;
    }
    return m;
}

int reducir(int n){
    int m = n;
    while(m > 9){
        m = sumarDigitos(m);
    }
    //cout << "m: " << m << endl;
    return m;
}

int sumarString(string s){
    int n = 0;
    for(int i = 0; i < s.length(); ++i){
        int k = (int)s[i];
        if(k >= 97 && k <= 122) n += (int)s[i]-96;//cout << (int)s[i]-96 << endl;
        if(k >= 65 && k <= 90) n += (int)s[i]-64; //cout << (int)s[i]-64 << endl;
    }
    return n;
}

int main(){

    #ifdef TEST
        //freopen("test.in", "r", stdin);
        //freopen("test.out", "w", stdout);
    #endif

    string s1;
    string s2;

    while(!cin.eof()){
        getline(cin, s1);
        getline(cin, s2);

        int n = reducir(sumarDigitos(sumarString(s1)));
        int m = reducir(sumarDigitos(sumarString(s2)));

        if(n == 0 || m == 0) break;

        if (n > m) cout << setprecision (2) << fixed << ((float)m/(float)n) * 100 << " %" << endl;
        else cout << setprecision (2) << fixed << ((float)n/(float)m) * 100 << " %" << endl;
    }

    return 0;
}


