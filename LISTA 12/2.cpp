#include<iostream>
#include<string>

using namespace std;

class relogio {
private:
    int hora;
    int minuto;
    int segundo;

public:
    //construtor
    relogio(int hora, int minuto, int segundo) {
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }

    //set
    void setHora(int hora, int minuto, int segundo) {
        this->hora = hora;
        this->minuto = minuto;
        this->segundo = segundo;
    }

    void avancarHorario() {
        if (segundo >= 59) {
            segundo = 0;
            if (minuto >= 59) {
                minuto = 0;
                if (hora >= 23) {
                    hora = 0;
                } else {
                    hora++;
                }
            } else {
                minuto++;
            }
        } else {
            segundo++;
        }

    }

    
    //get
    int getHora() {
        return hora;
    }

    int getMinuto() {
        return minuto;
    }

    int getSegundo() {
        return segundo;
    }

    //imprimir
    void imprimirDados() {
        cout << "Hora: " << hora << endl;
        cout << "Minuto: " << minuto << endl;
        cout << "Segundo: " << segundo << endl;
    }

};

int main(){

    relogio relogio(12, 30, 30);
    cout << "Horario atual: \n";
    relogio.imprimirDados();

    //chamada de função para avançar o horario
    relogio.avancarHorario();

    cout << "\nHorario atualizado: \n";
    relogio.imprimirDados();

    return 0;
}


