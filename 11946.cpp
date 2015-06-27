#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <cstdio>
using namespace std;


void translate(string s){
    for(int i = 0; i < s.length(); ++i){
        if(s[i] == '3') cout << "E";
        else if(s[i] == '0') cout << "O";
        else if(s[i] == '1') cout << "I";
        else if(s[i] == '4') cout << "A";
        else if(s[i] == '9') cout << "P";
        else if(s[i] == '8') cout << "B";
        else if(s[i] == '5') cout << "S";
        else if(s[i] == '7') cout << "T";
        else if(s[i] == '2') cout << "Z";
        else if(s[i] == '6') cout << "G";
        else cout << s[i];
    }//
}

int main(){

    #ifdef TEST
        //freopen("test.in", "r", stdin);
        //freopen("test.out", "w", stdout);
    #endif

    string s1;
    int n;
    cin >> n;
    getline(cin, s1);

    for(int i = 0; i < n; ++i){
        while(!cin.eof()){
            getline(cin, s1);
            if(s1.length() == 0) break;
            translate(s1);
            cout << endl;
        }if (i != n-1 )cout << endl;
    }
    return 0;
}


