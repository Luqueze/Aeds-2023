#include<iostream>

using namespace std;
    class negativoException : public exception{
        private:
            int valor;

        public:
        negativoException(int valor){
            this -> valor = valor;
        }
        string what(){
            return "negativoException: "+ to_string(valor);
        }    
    };
    
    int main(){
    
        try {
            int dado;
            cin >> dado;

            if(dado > 6 ){
                throw exception();
            }
            if(dado < -1){
                throw negativoException(dado);
            }else{
                cout << dado;
            }
        } catch (negativoException& e) {
            cout << "Erro: valor invalido" << endl;
            cout << "Valor informado: " << e.what() << endl;
        }

        catch (exception& e) {
            cout << "Erro: valor invalido" << endl;
            cout << "Valor informado: " << e.what() << endl;
        }

        

    

        return 0;



    }