#include <iostream>

using namespace std;

class Forma {
public:
    ~Forma() {};

    virtual double perimetro() = 0; //Funcao virtual pura. A definicao fica com subclasse

    virtual double area() = 0; //Funcao virtual pura. A definicao fica com subclasse

    virtual void imprimir() = 0; //Funcao virtual pura. A definicao fica com subclasse

    static void mostrarForma(Forma* forma) {
        forma->imprimir();
        cout << "perimetro: " << forma->perimetro() << endl;
        cout << "area: " << forma->area() << endl;
    }
};

class Retangulo : public Forma {
protected:
    double base, altura;

public:
    Retangulo(double b, double h){
        this->base = b;
        this->altura = h;
    }
    ~Retangulo() {}

    double perimetro() {
        return 2 * (base + altura);
    }

    double area() {
        return base * altura;
    }

    void imprimir() {
        cout << "[Retangulo, base=" << base << ", altura=" << altura << "]" << endl;
    }
};

class Quadrado : public Retangulo {
public:
    Quadrado(double l): Retangulo(l, l) {}

    void imprimir() {
        cout << "[Quadrado, lado=" << base << "]" << endl;
    }
};

class Circulo : public Forma {
protected:
    double raio;

public:
    Circulo(double r): raio(r) {}

    double perimetro() {
        return 2 * 3.14 * raio;
    }

    double area() {
        return 3.14 * raio * raio;
    }

    void imprimir() {
        cout << "[Circulo, raio=" << raio << "]" << endl;
    }
};

int main()
{
    Retangulo retangulo(10, 5);
    Quadrado quadrado(3);
    Circulo circulo(1);

    Forma::mostrarForma(&retangulo);
    Forma::mostrarForma(&quadrado);
    Forma::mostrarForma(&circulo);
    return 0;
}
