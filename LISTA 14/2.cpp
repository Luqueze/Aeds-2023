#include <iostream>

using namespace std;

class ExcecaoValorInvalidoDado {
    int valor;
public:
    ExcecaoValorInvalidoDado(int v){
        this->valor = v;
    };
    string getMessage() {
        return "Valor invalido " + to_string(valor);
    }
};

int main()
{
    try {
        int valor;
        cout << "Digite um n�mero inteiro de 1 a 6:";
        cin >> valor;
        if(valor < 1 || valor > 6)
            throw ExcecaoValorInvalidoDado(valor);
        cout << "O valor tirado no dado foi " << valor << endl;
    } catch(ExcecaoValorInvalidoDado& e) {
        cout << e.getMessage() << endl;
    }

    return 0;
}
