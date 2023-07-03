#include <iostream>
#include <string>
using namespace std;
    class Pessoa{
    protected:
        string nome;

    public:
        Pessoa(string nome){
            this->nome = nome;
        }
        virtual ~Pessoa() {}
        virtual void imprimir(){
            cout << "[Pessoa, nome=" << nome << "]" << endl;
        }
    };//end class Pessoa

    class PessoaFisica : public Pessoa {
        string cpf;

    public:
        PessoaFisica(string nome, string cpf) : Pessoa(nome){
            this->cpf = cpf;
        }
        void imprimir(){
            cout << "[PessoaFisica, nome=" << nome << ", cpf=" << cpf << "]" << endl;
        }
    };//end class PessoaFisica

    class PessoaJuridica : public Pessoa{
        string cnpj;

    public:
        PessoaJuridica(string nome, string cnpj) : Pessoa(nome){
            this->cnpj = cnpj;
        }
        void imprimir()
        {
            cout << "[PessoaJuridica, nome=" << nome << ", cnpj="
                << cnpj << "]" << endl;
        }
    };
    int main(){
        PessoaFisica pessoaFisica("Joao da Silva", "123456789-00");
        PessoaJuridica pessoaJuridica("Empresa do Joao SA",
                                    "12.299.535/0001-94");
        Pessoa p1("Kng dinamarques\n");
        p1.imprimir();                            
        Pessoa *pessoa;
        pessoa = &pessoaFisica;
        pessoa->imprimir();
        pessoa = &pessoaJuridica;
        pessoa->imprimir();
        return 0;
    }
