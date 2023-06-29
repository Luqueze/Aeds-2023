#include<iostream>
#include<fstream>
#include<string>
/* cadastro de veículos para uma loja de automóveis. O programa 
deve permitir CADASTRAR um novo veículo, EDITAR os dados de um veículo existente, PESQUISAR por 
um veículo e EXCLUIR um veículo. */
//Os  veículos  deverão ser armazenados em um arquivo texto
using namespace std;


class Carro{
    private:

        string placa;
        string marca;
        string modelo;
        int ano;
        float preco;
        int tipo; //1- carro 2- moto
        string observacao; //infomação opcional

    public:

        //construtor
        Carro(string placa, string marca, string modelo, int ano, float preco, int tipo, string observacao){
            this->placa = placa;
            this->marca = marca;
            this->modelo = modelo;
            this->ano = ano;
            this->preco = preco;
            this->tipo = tipo;
            this->observacao = observacao;
        }

        //set
        void setPlaca(string placa){
            this->placa = placa;
        }

        void setMarca(string marca){
            this->marca = marca;
        }

        void setModelo(string modelo){
            this->modelo = modelo;
        }

        void setAno(int ano){
            this->ano = ano;
        }

        void setPreco(float preco){
            this->preco = preco;
        }

        void setTipo(int tipo){
            this->tipo = tipo;
        }

        void setObservacao(string observacao){
            this->observacao = observacao;
        }

        //get
        string getPlaca(){
            return placa;
        }

        string getMarca(){
            return marca;
        }

        string getModelo(){
            return modelo;
        }

        int getAno(){
            return ano;
        }

        float getPreco(){
            return preco;
        }

        int getTipo(){
            return tipo;
        }

        string getObservacao(){
            return observacao;
        }

        //imprimir
       /*  void imprimir(){
            cout << "Placa: " << placa << endl;
            cout << "Marca: " << marca << endl;
            cout << "Modelo: " << modelo << endl;
            cout << "Ano: " << ano << endl;
            cout << "Preço: " << preco << endl;
            cout << "Tipo: " << tipo << endl;
            cout << "Observacao: " << observacao << endl;
        } */

        //função para listar os veiculos do arquivo
        void listar(){
            cout << "Placa: " << placa << endl;
            cout << "Marca: " << marca << endl;
            cout << "Modelo: " << modelo << endl;
            cout << "Ano: " << ano << endl;
            cout << "Preço: " << preco << endl;
            cout << "Tipo: " << tipo << endl;
            cout << "Observacao: " << observacao << endl;
        }

        

        //função para pesquisar um veiculo
        void pesquisar(){
            cout << "Insira a placa do veiculo: " << endl;
            cin >> placa;
        }

        //função para cadastrar um novo veiculo
        void cadastrar(){
            cout << "Insira a placa do veiculo: " << endl;
            cin >> placa;
            cout << "Insira a marca do veiculo: " << endl;
            cin >> marca;
            cout << "Insira o modelo do veiculo: " << endl;
            cin >> modelo;
            cout << "Insira o ano do veiculo: " << endl;
            cin >> ano;
            cout << "Insira o preço do veiculo: " << endl;
            cin >> preco;
            cout << "Insira o tipo do veiculo: " << endl;
            cin >> tipo;
            cout << "Insira a observação do veiculo caso haja: " << endl;
            cin >> observacao;
        }

        //destrutor
        ~Carro(){
            cout << "destrutor" << endl;
        }
        
};

int main(){

    FILE *arq;

    

    int opcao;
    string placa;
    string marca;
    string modelo;
    int ano;
    float preco;
    int tipo; //1- carro 2- moto
    string observacao; //infomação opcional
    string placaArquivo;

    cout <<"Insira a opção desejada: " << endl;
    cout << "1- CADASTRAR um novo veiculo" << endl;
    cout << "2- EDITAR os dados de um veiculo existente" << endl;
    cout << "3- PESQUISAR por um veiculo" << endl;
    cout << "4- EXCLUIR um veiculo" << endl;
    cout << "5- LISTAR VEICULOS" << endl;
    cout << "6- SAIR" << endl;

    cin >> opcao;

    switch (opcao){

        case 1://cadastrar um novo veiculo
        
            cout << "Insira a placa do veiculo: " << endl;
            cin >> placa;
            cout << "Insira a marca do veiculo: " << endl;
            cin >> marca;
            cout << "Insira o modelo do veiculo: " << endl;
            cin >> modelo;
            cout << "Insira o ano do veiculo: " << endl;
            cin >> ano;
            cout << "Insira o preço do veiculo: " << endl;
            cin >> preco;
            cout << "Insira o tipo do veiculo: " << endl;
            cin >> tipo;
            cout << "Insira a observação do veiculo caso haja: " << endl;
            cin >> observacao;
            {
            Carro c(placa, marca, modelo, ano, preco, tipo, observacao);

            //abertura de arquivo
            
            arq = fopen("veiculos.txt", "a");
            
            fprintf(arq, "%s %s %s %d %.2f %d %s\n", c.getPlaca().c_str(), c.getMarca().c_str(), c.getModelo().c_str(), c.getAno(), c.getPreco(), c.getTipo(), c.getObservacao().c_str());
            //fechamento de arquivo
            fclose(arq);
            }
            
            
            break;

        case 2://editar dados
            cout << "Insira a placa do veiculo que deseja editar: " << endl;
            cin >> placa;

            //abertura de arquivo
            arq = fopen("veiculos.txt", "r");
            //criar vetor para guardar placa, usar essa string para ler placa
            while(!feof(arq)){ //enquanto não chegar no final do arquivo
                fscanf(arq, "%s %s %s %d %f %d %s\n", placa.c_str(), marca.c_str(), modelo.c_str(), &ano, &preco, &tipo, observacao.c_str());
                if(placa == placa){ //se a placa digitada for igual a placa do arquivo
                    //chamar função para editar dados
                    cout << "Insira a placa do veiculo: " << endl;
                    cin >> placa;
                    cout << "Insira a marca do veiculo: " << endl;
                    cin >> marca;
                    cout << "Insira o modelo do veiculo: " << endl;
                    cin >> modelo;
                    cout << "Insira o ano do veiculo: " << endl;
                    cin >> ano;
                    cout << "Insira o preço do veiculo: " << endl;
                    cin >> preco;
                    cout << "Insira o tipo do veiculo: " << endl;
                    cin >> tipo;
                    cout << "Insira a observação do veiculo caso haja: " << endl;
                    cin >> observacao;

                
                    fclose(arq);
                    

                    {   
                    Carro* c = new Carro(placa, marca, modelo, ano, preco, tipo, observacao);

                    arq = fopen("veiculos.txt", "a");
                    fprintf(arq, "%s %s %s %d %.2f %d %s\n", c->getPlaca().c_str(), c->getMarca().c_str(), c->getModelo().c_str(), c->getAno(), c->getPreco(), c->getTipo(), c->getObservacao().c_str());

                    fclose(arq);
                    }
                }
            }
            break;

        case 3: // pesquisar veiculo
            cout << "Insira a placa do veiculo que deseja pesquisar: " << endl;
            cin >> placa;

            arq = fopen("veiculos.txt", "r");
            while (!feof(arq)) {
                fscanf(arq, "%s %s %s %d %f %d %s\n", placaArquivo.c_str(), marca.c_str(), modelo.c_str(), &ano, &preco, &tipo, observacao.c_str());
                if (placa == placaArquivo) {
                    Carro c(placaArquivo, marca, modelo, ano, preco, tipo, observacao);
                    c.listar();
                }else{
                    cout << "Veiculo não encontrado" << endl;
                }
            }

            fclose(arq);
            break;
            


        case 4://excluir veiculo

            cout << "Insira a placa do veículo que deseja excluir: " << endl;
            cin >> placa;

            

            arq = fopen("veiculos.txt", "r");
            while(!feof(arq)){ //enquanto não chegar no final do arquivo
                fscanf(arq, "%s %s %s %d %f %d %s\n", placa.c_str(), marca.c_str(), modelo.c_str(), &ano, &preco, &tipo, observacao.c_str());
                if(placa == placa){ //se a placa digitada for igual a placa do arquivo
                    cout << "Placa: " << placa << endl;
                    cout << "Marca: " << marca << endl;
                    cout << "Modelo: " << modelo << endl;
                    cout << "Ano: " << ano << endl;
                    cout << "Preço: " << preco << endl;
                    cout << "Tipo: " << tipo << endl;
                    cout << "Observação: " << observacao << endl;
                }
            }
            fclose(arq);
            break;


        case 5://listar todos os veiculos presentes no arquivo
            arq = fopen("veiculos.txt", "r");
            while(!feof(arq)){ //enquanto não chegar no final do arquivo
                fscanf(arq, "%s %s %s %d %f %d %s\n", placa.c_str(), marca.c_str(), modelo.c_str(), &ano, &preco, &tipo, observacao.c_str());
                cout << "\nPlaca: " << placa.c_str() << endl;
                cout << "Marca: " << marca.c_str() << endl;
                cout << "Modelo: " << modelo.c_str()<< endl;
                cout << "Ano: " << ano << endl;
                cout << "Preco: " << preco << endl;
                cout << "Tipo: " << tipo << endl;
                cout << "Observacao: \t" << observacao.c_str() << endl;
            }
            fclose(arq);
            break;

        case 6: //sair do programa
            cout << "Saindo do programa..." << endl;
            break;

        default:
            cout << "Opção invalida!" << endl;
            break;        
                

       
    }

    

    return 0;
}