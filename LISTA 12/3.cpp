#include<iostream>
#include<string>

using namespace std;

//capacidade = 50 litros
class tanque {
private:
    int quantidade;

public:

    //construtor
    tanque(int quantidade) {
        this->quantidade = quantidade;
    }

    //set
    void setQuantidade(int quantidade) {
        this->quantidade = quantidade;
    }

    //get
    int getQuantidade() {
        return quantidade;
    }

    //imprimir
    void imprimirGasolina() {
        cout << "Quantidade: " << quantidade << endl;
    }

    int distanciaPercorrida(int consumo){
        return quantidade * consumo;
    }

    void imprimirDistancia(int consumo){
        cout << "Distancia percorrida: " << distanciaPercorrida(consumo) << endl;
    }

    int gasolinaGasta(int distancia, int consumo){
        return distancia / consumo;
    }

    void abastecer(int quantidade){
        if (quantidade + this->quantidade > 50){
            cout << "Tanque cheio" << endl;
        } else {
            this->quantidade += quantidade;
        }
    }

    void dirigir(int distancia, int consumo){
        if (quantidade - gasolinaGasta(distancia, consumo) < 0){
            cout << "Gasolina insuficiente" << endl;
        } else {
            quantidade -= gasolinaGasta(distancia, consumo);
        }
    }




};

int main() {

    tanque carro1(20), carro2(30);

    carro1.imprimirGasolina();
    carro2.imprimirGasolina();

    carro1.abastecer(10);
    carro2.abastecer(20);

    carro1.imprimirGasolina();
    carro2.imprimirGasolina();

    carro1.dirigir(100, 10);
    carro2.dirigir(100, 10);

    carro1.imprimirGasolina();
    carro2.imprimirGasolina();

    carro1.imprimirDistancia(10);
    carro2.imprimirDistancia(10);

    return 0;


}