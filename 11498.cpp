#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;

int main(){
    //freopen("test.in", "r", stdin);
    //freopen("test.out", "w", stdout);

    int n, x, y, a, b;
    while(true){
        cin >> n;
        if(n == 0) break;
        cin >> x >> y;
        for(int i = 0; i < n; ++i){
            cin >> a >> b;
            if(a > x && b > y) cout << "NE" << endl;
            else if(a < x && b > y) cout << "NO" << endl;
            else if(a > x && b < y) cout << "SE" << endl;
            else if(a < x && b < y) cout << "SO" << endl;
            else if(a == x || b == y) cout << "divisa" << endl;
        }
    }


    return 0;
}
