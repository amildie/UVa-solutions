#include <iostream>

using namespace std;

void mostrar(int a[], int n){
    cout << "[";
    int i = 0;
    while (i<n){
        cout << " " << a[i] << " ";
        i++;
    }
    cout << "]";
}

int stackMax(int a[], int n){
    int i = 1;
    int max = a[0];
    while (i<(n)){
        if (max<a[i])
            max = a[i];
        i++;
    }
    return max;
}

int stackMin(int a[], int n){
    int i = 1;
    int max = a[0];
    while (i<(n)){
        if (max>a[i])
            max = a[i];
        i++;
    }
    return max;
}

bool distintos(int a[], int n){
    int i = 0;
    bool encontrado = false;
    while (i<(n-1) && !encontrado){
        if (a[i] != a[i+1])
            encontrado = true;
        i++;
        }
    return encontrado;
}

void restarUnoAlMasGrande(int a[], int n){
    int i = 0;
    while (i<n){
        if (a[i] == stackMax(a, n)){
            a[i]--;
            break;
        }
    i++;
    }
}

void sumarUnoAlMasChico(int a[], int n){
    int i = 0;
    while (i<n){
        if (a[i] == stackMin(a, n)){
            a[i]++;
            break;
        }
    i++;
    }
}

int reacomodar(int a[], int n){
    int i = 0;
    while (distintos (a, n)){
        restarUnoAlMasGrande(a, n);
        sumarUnoAlMasChico(a, n);
        i++;
    }
    return i;
}


int main(){
    int k = 1;
    int respuestas[50000];
    int r = 1;

//asignacion de valores
    while (true){
        int stacks[50];
        int cantStacks;
        int i = 0;
        cin >> cantStacks;
        if (cantStacks==0)
            break;
        while (cantStacks!=0){
            cin >> stacks[i];
            i++;
            cantStacks--;
        }
        respuestas[r] = reacomodar(stacks, i);
        r++;
        k++;
    }

//muestro los resultados
    int m = 1;
    while (m<r){
        cout << "Set #" << m << endl;
        cout << "The minimum number of moves is " << respuestas[m] << "." << endl;
        cout << endl;
        m++;
    }
}
