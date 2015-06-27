#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

int cantDig(long long n){
    long long cant = 0;
    while(n > 0){
        cant++;
        n = n/10;
    }
    return cant;
}

long long getReverse(long long n){
    long long t = 1;
    for(int i = 0; i < cantDig(n)-1; ++i) t = t*10;
    long long j = 10;
    long long l = 1;
    long long p = 0;
    for(int i = 0; i < cantDig(n); ++i){
        p += ((n%j - n%(j/10))/l)*t;
        j = j*10;
        l = l*10;
        t = t/10;
    }
    return p;
}

int main(){
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    long long n;
    int cantCases;
    cin >> cantCases;

    for(int y = 0; y < cantCases; ++y){
        cin >> n;
        int i = 0;
        while(i < 1000){
            if(n == getReverse(n)) break;
            else{
                n = n + getReverse(n);
            }
            i++;
        }
        cout << i << " " << n << endl;
    }
    return 0;
}
