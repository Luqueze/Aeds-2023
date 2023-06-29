#include<iostream>
#include<fstream>
#include<string>
/* cadastro de veículos para uma loja de automóveis. O programa 
deve permitir CADASTRAR um novo veículo, EDITAR os dados de um veículo existente, PESQUISAR por 
um veículo e EXCLUIR um veículo. */
//Os  veículos  deverão ser armazenados em um arquivo texto
using namespace std;

int contador = 0;
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

int contarCarros() {
    int contador = 0;
    FILE* arq = fopen("veiculos.txt", "r");
    if (arq != NULL) {
        fscanf(arq, "%d", &contador);
        fclose(arq);
    } else {
        cout << "Não foi possível abrir o arquivo" << endl;
    }
    return contador;
}


void atualizarContador(int contador) {
    FILE* arq = fopen("veiculos.txt", "r+");
    if (arq != NULL) {
        fprintf(arq, "%d\n", contador);
        fclose(arq);
    } else {
        cout << "Não foi possível abrir o arquivo" << endl;
    }
}


int main(){

    atualizarContador(contarCarros());
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

    do{
        cout << "Insira a opcao desejada: " << endl;
        cout << "1- LISTAR todos os veiculos" << endl;
        cout << "2- PESQUISAR um veiculo" << endl;
        cout << "3- CADASTRAR um veiculo" << endl;
        cout << "4- EDITAR um veiculo" << endl;
        cout << "5- EXCLUIR um veiculo" << endl;
        cout << "6- SAIR do programa" << endl;

        cin >> opcao;

        switch (opcao){

            case 1://listar todos os veiculos presentes no arquivo
                arq = fopen("veiculos.txt", "r");
                while(!feof(arq)){ //enquanto não chegar no final do arquivo
                    fscanf(arq, "%s %s %s %d %f %d %s\n", placa.c_str(), marca.c_str(), modelo.c_str(), &ano, &preco, &tipo, observacao.c_str());
                    cout << "\nPlaca: " << placa.c_str() << endl;
                    cout << "Marca: " << marca.c_str() << endl;
                    cout << "Modelo: " << modelo.c_str()<< endl;
                    cout << "Ano: " << ano << endl;
                    cout << "Preco: " << preco << endl;
                    cout << "Tipo: " << tipo << endl;
                    cout << "Observacao: " << observacao.c_str() << endl;
                }
                fclose(arq);
                break;

            case 2: // pesquisar veiculo
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

            case 3://cadastrar um novo veiculo
            
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

                getline(cin, observacao);
                {
                    
                Carro c(placa, marca, modelo, ano, preco, tipo, observacao);

                
                
                arq = fopen("veiculos.txt", "a");
                
                fprintf(arq, "%s %s %s %d %.2f %d %s\n", c.getPlaca().c_str(), c.getMarca().c_str(), c.getModelo().c_str(), c.getAno(), c.getPreco(), c.getTipo(), c.getObservacao().c_str());
                
                fclose(arq);

                int contador = contarCarros() + 1;
                atualizarContador(contador);
                }
                
                
                break;

            case 4://editar dados
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

            
                


            case 5: // excluir veiculo //V
                {
                    cout << "Insira a placa do veiculo que deseja excluir: " << endl;
                    cin >> placa;

                    FILE* arq = fopen("veiculos.txt", "r");
                    FILE* arquivoTemp = fopen("temp.txt", "w");

                    bool veiculoEncontrado = false;

                    char placaArquivo[100];
                    char marca[100];
                    char modelo[100];
                    int ano;
                    float preco;
                    int tipo;
                    char observacao[100];

                    while (fscanf(arq, "%s %s %s %d %f %d %s\n", placaArquivo, marca, modelo, &ano, &preco, &tipo, observacao) != EOF) {
                        if (placa == placaArquivo) {
                            veiculoEncontrado = true;
                            continue;
                        }
                        fprintf(arquivoTemp, "%s %s %s %d %.2f %d %s\n", placaArquivo, marca, modelo, ano, preco, tipo, observacao);
                    }

                    fclose(arq);
                    fclose(arquivoTemp);

                    remove("veiculos.txt");
                    rename("temp.txt", "veiculos.txt");

                    if (veiculoEncontrado) {
                        cout << "Veiculo excluido com sucesso!" << endl;
                        contador -= contador;
                        atualizarContador(contador);
                    } else {
                        cout << "Veiculo nao encontrado." << endl;
                    }
                    break;
                }


            

            case 6: //sair do programa //V
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opção invalida!" << endl;
                break;        
                
        }

        if(opcao !=6){
            cout << endl << "APERTE qualquer tecla e pressione ENTER para voltar ao menu: ";
            cin.ignore();
            cin.get();
        }

    }while(opcao != 6);

    return 0;
}