/* 

This problem never specifies what to do with an empty line. 
 
Turns out, every empty line has to be processed, and 
the program must output an empty line. 

Very funny.

*/

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
#include <map>
using namespace std;

bool pairCompareSecond(const pair<int, char>& firstElem, const pair<int, char>& secondElem) {
    return firstElem.second > secondElem.second;
}

bool pairCompareFirst(const pair<int, char>& firstElem, const pair<int, char>& secondElem) {
    return firstElem.first < secondElem.first;
}

int main(){
    
    #ifdef TEST
        freopen("test.in", "r", stdin);
        freopen("test.out", "w", stdout);
    #endif
    
    char s[1024];
    int j = 0;
    
    while(true) {
        
        for(int i = 0; i < 1024; ++i) s[i] = 0;
        if (!gets(s)) break;
        
        string aux = string(s);
        if(aux.length() == 0) cout << endl;
        
        int a[1024];
        vector< pair <int, char> > v;
        
        for(int i = 0; i < 1024; ++i)
            a[i] = 0;
        
        bool valid = false;
        for(int i = 0; i < 1024; ++i) {
            if(s[i] > 31 && s[i] < 127 && s[i] != '\0' && s[i] != '\n' && s[i] != '\r') {
                valid = true;
                a[s[i]]++;
            }
        }
        if(!valid) continue;
        
        for(int i = 0; i < 1000; ++i) {
            if(a[i] > 0)
                v.push_back(make_pair(a[i], i));
        }
        
        stable_sort(v.begin(), v.end(), pairCompareSecond);
        stable_sort(v.begin(), v.end(), pairCompareFirst);
        
        if(j++ > 0) cout << endl;
        for(int i = 0; i < v.size(); ++i) {
            cout << (int) v[i].second << " " << v[i].first;
            if(i < v.size()-1) cout << endl; 
        }
        cout << endl;
        
    }
    
    return 0;
    
}
