#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;     

     
void invertirHastaPos(int a[], int n, int p){
	int i = 0;
        int j = p;
        int t;
        while (i<=j){
        	t = a[i];
       	        a[i] = a[j];
                a[j] = t;
                i++;
                j--;
        }
    }
     

void mostrar(int a[],int n){
        int i = 0;
        while (i<n){
                cout << a[i];
                if (i!=(n-1))
                cout << " ";
                i++;
        }
    }

     
void flip(int a[], int n, int p){
        invertirHastaPos(a, n, n-p);
}
     

int posRealMasChicoHasta(int a[], int n, int f){    
        int i = 0;
        int res = 0;
        while (i<=(n-1-f)){
        	if (a[i]<=a[res])
                res = i;
        	i++;
        }
        return res;
}
     

int posElemMasChico(int a[], int n, int k){    
        int i = k;                 
        int res = k;               
        while (i<n){
        	if (a[i]<=a[res])
        	        res = i;
       	        i++;
        }
        return res;
}

   
int posRealAPosFlip(int a[], int n, int p){
        int res;
        if ((p-n) < 0)
            return -(p-n);
        else
            return p-n;
}

     
bool ordenadoMayorAMenor(int a[], int n){
        bool resp = true;
        int i = 0;
        while (i<(n-1)){
        	if (a[i]<=a[i+1])
        	        resp = false;
       	        i++;
        }
        return resp;
}
     

bool estaOrdMenAMay(int a[], int n){
        bool res = true;
        int i = 0;
        while (i<(n-1)){
        	if (a[i] >= a[i+1])
        	        res = false;
       	        i++;
        }
        return res;
}

     
void flipCycle(int stack[], int n){
        int flips[3000];
        int r = 0;
        int j = 0;
     
        while (j<=n){
     
                if (estaOrdMenAMay(stack, n)) {break;} 

                flips[r] = posRealAPosFlip(stack, n, (posRealMasChicoHasta(stack, n, j)));
                r++;
     
                flip(stack, n, posRealAPosFlip(stack, n, (posRealMasChicoHasta(stack, n, j))));
     
                if (ordenadoMayorAMenor(stack, n)) break;
     
                flips[r] = j+1;
                r++;
     
                flip(stack, n, j+1);
                j++;
     
                if (ordenadoMayorAMenor(stack, n)) break;
        }
     

        if (ordenadoMayorAMenor(stack, n)){
        	flips[r] = 1;
       	        flip(stack, n, 1);
                r++;
                flips[r] = 0;
                r++;
                flips[r] = 666;

        }else{
	        flips[r] = 0;
                flips[r+1] = 666;

        }
     

        int t = 0;
        cout << endl;
        while (flips[t]!=666){
                cout << flips[t] << " ";
                t++;
        }
        cout << endl;
}
     
     
     
int main(){

	while(true){        
		int array[50];
	
		string s; 
		stringstream ss;

		getline(cin, s); 
		ss.str(s);




		if (!(cin.good())){break;}
		
		int a; 
		int i = 0;

		while (ss.good()){
			ss >> array[i];
			i++;
		}

     			
        	mostrar(array, i);
		flipCycle(array, i);

	}
     
        return 0;
}


