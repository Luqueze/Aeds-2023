#include <iostream>
#include <string>

using namespace std;

class Pessoa {
private:
    string nome;
    int idade;
    double altura;

public:
    //construtor
    Pessoa(string nome, int idade, double altura) {
        this->nome = nome;
        this->idade = idade;
        this->altura = altura;
    }

    //set
    void setNome(string nome) {
        this->nome = nome;
    }

    void setIdade(int idade) {
        this->idade = idade;
    }

    void setAltura(double altura) {
        this->altura = altura;
    }

    //get
    string getNome() {
        return nome;
    }

    int getIdade() {
        return idade;
    }

    double getAltura() {
        return altura;
    }

    //imprimir
    void imprimirDados() {
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << endl;
        cout << "Altura: " << altura << endl;
    }
};

int main() {
    //exemplo de uso da classe Pessoa
    Pessoa pessoa("Joao", 25, 1.75);
    pessoa.imprimirDados();

    //alterar os atributos da pessoa
    pessoa.setNome("Maria");
    pessoa.setIdade(30);
    pessoa.setAltura(1.65);

    //imprime os novos dados
    pessoa.imprimirDados();

    return 0;
}
