/*
                                * Jolly Jumpers *

    Se dice que una serie de n numeros es "jolly" si la serie conformada por los valores absolutos
    de las sucesivas restas lugar a lugar forma una serie que va desde 1 a n-1.

    Por ejemplo, supongamos que tenemos la serie 1 4 2 3

    Quiero calcular la serie de restas sucesivas. Esta es:

    4-1: 3   ---> 3
    2-4: -2  ---> 2
    3-2: 1   ---> 1

    Lo que nos devuelve la serie 3 2 1, cosa que va desde el 1 al 3. Es jolly.

*/

#include <iostream>
using namespace std;

int abs(int n){
    if (n<0)
        return -n;
    else
        return n;
}

bool pertenece(int m, int serie[], int n){
    bool esta = false;
    int i = 0;
    while (i<n){
        if (m==serie[i])
            esta = true;
        i++;
    }
    return esta;
}


int main(){

    while(true){

        int longSerie;

        /* Ingreso la longitud de la serie de esta iteracion */
        cin >> longSerie;
        if (cin.eof()) break;

        int serie[3000];
        int serieJumps[3000];

        /* Ingreso los valores de la serie */
        int i = 0;
        while (i<longSerie){
            cin >> serie[i];
            i++;
        }

        /* Genero el array de saltos */
        i = 0;
        int j = 0;
        while (i<(longSerie-1)){
            serieJumps[i] = abs(serie[i+1]-serie[i]);
            i++;
        }

        /* Me fijo si es Jolly */
        i = 1;
        bool esJolly = true;
        while (i<=(longSerie-1)){
            if ((pertenece(i, serieJumps, (longSerie-1)))==0)
                esJolly = false;
            i++;
        }

        /* Output */
        if (esJolly)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }

    return 0;
}
