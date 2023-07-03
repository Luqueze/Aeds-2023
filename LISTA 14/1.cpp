#include <iostream>

using namespace std;

int main(){
    try {
        int valor;
        cout << "Digite um n�mero inteiro de 1 a 6:";
        cin >> valor;
        if(valor < 1 || valor > 6)
            throw valor;
        cout << "O valor tirado no dado foi " << valor << endl;
    } catch(int erro) {
        cout << "Valor invalido " << erro << endl;
    }

    return 0;
}
