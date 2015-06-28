/*
	Es trivial que si la reina esta ubicada en una posicion p, y la pieza esta ubicada en una posicion q, la cantidad de movimientos puede ser:
	0 si son el mismo lugar, 1 si q esta diagonal u horizontal a p o 2 si no esta ni diagonal ni horizontal. Voy a usar este enfoque para resolverlo.
*/
#include <iostream>
using namespace std;

bool estanEnDiagonal(int qX, int qY, int pX, int pY){
	int i = 0;
	bool loEncontre = false;
	while (i <= 8 && !loEncontre){
		i++;
		loEncontre = ((pX == qX + i && pY == qY + i) || (pX == qX - i && pY == qY - i) || (pX == qX + i && pY == qY - i) || (pX == qX - i && pY == qY + i));
	}
	return loEncontre;
}

int main(){
	int qX, qY, pX, pY, resp;
	while (true){
		resp = 2;
		cin >> qX >> qY >> pX >> pY;

		if (qX == 0 && qY == 0 && pX == 0 && pY == 0)
            		break;

		if (qX == pX && qY == pY) //Estan en el mismo lugar
            		resp = 0;

        	if ((qX == pX && qY != pY) || (qX != pX && qY == pY) || estanEnDiagonal(qX, qY, pX, pY)) //Estan en linea recta o en diagonal
            		resp = 1;

        	cout << resp << endl;
    	}
}
