#include <iostream>
#include <cmath>
using namespace std;

int parteEntera(float x){
    return (int (x));
}

bool esEntero(float x){
    if (parteEntera(x) == x)
        return 1;
    else
        return 0;
}

int main(){
    while(true){
        int n;
        cin >> n;
        int m;
        cin >> m;

        if (n==0 && m==0) break;

        int cant = 0;
        while(n<=m){
            if (esEntero(sqrt(n)))
                cant++;
            n++;
        }
        cout << cant << endl;

    }
    return 0;
}
