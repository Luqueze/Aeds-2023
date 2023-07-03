#include <iostream>
#include <exception>
using namespace std;
int main(){
    try{
        int x, y, z;
        cout << "Digite dois numeros inteiros > 0 : ";
        cin >> x >> y;
        if (y < 0 || x < 0){
            throw exception();
        }
        else{
            z = x / y;
        }
        
    }
    catch (exception& e){
        cout << "excecao ocorreu: numero negativo" << endl;
    }
    return 0;
}
