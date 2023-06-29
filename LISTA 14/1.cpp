#include<iostream>

using namespace std;
    int dado;
    int main(){
        try {
            
            cin >> dado;

            if(dado > 6 ){
                throw exception();
            }
            if(dado < -1){
                throw dado;
            }else{
                cout << dado;
            }
        } catch (exception& e) {
            cout << "Erro: valor invalido" << endl;
            cout << "Valor informado: " << dado << endl;
        }

        catch (int e) {
            cout << "Erro: valor negativo" << endl;
            cout << "Valor informado: " << e << endl;
            
        }

    

        return 0;



    }