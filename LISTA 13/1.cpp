#include<iostream>
#include<string>

using namespace std;

class AnimalEstimacao {

    private:
        string nome;
        string raca;

    public:

        AnimalEstimacao(string nome, string raca) {
            this->nome = nome;
            this->raca = raca;
        }

        //set
        void setNome(string nome) {
            this->nome = nome;
        }

        void setRaca(string raca){
            this->raca = raca;
        }

        //get
        string getNome() {
            return nome;
        }

        string getRaca() {
            return raca;
        }

        //imprimir
        void imprimirDados() {
            cout << "Nome: " << nome << endl;
            cout << "Raca: " << raca << endl;
        }
};

class Cachorro : public AnimalEstimacao{
    public:
        void late(){
            cout << "Au au" << endl;
        }
    Cachorro(string nome, string raca) : AnimalEstimacao(nome, raca) {}    
      
};

class Gato : public AnimalEstimacao{
    public:
        void mia(){
            cout << "Miau" << endl;
        }
    Gato(string nome, string raca) : AnimalEstimacao(nome, raca) {}    

};

int main(){
    Cachorro cachorro("Rex", "Vira-lata");
    Gato gato("Mingau", "Persa");

    cachorro.imprimirDados();
    cachorro.late();
    printf("\n");

    gato.imprimirDados();
    gato.mia();

    return 0;
}

