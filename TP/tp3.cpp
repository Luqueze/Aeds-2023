#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

class Carro {
private:
    char placa[10];
    char marca[20];
    char modelo[20];
    int ano;
    float preco;
    int tipo; // 1- carro 2- moto
    char observacao[50]; // informacao opcional

public:
    Carro(const char* placa, const char* marca, const char* modelo, int ano, float preco, int tipo, const char* observacao) {
        strncpy(this->placa, placa, sizeof(this->placa));
        strncpy(this->marca, marca, sizeof(this->marca));
        strncpy(this->modelo, modelo, sizeof(this->modelo));
        this->ano = ano;
        this->preco = preco;
        this->tipo = tipo;
        strncpy(this->observacao, observacao, sizeof(this->observacao));
    }

    //metodo get{
    const char* getPlaca() {
        return placa;
    }

    const char* getMarca() {
        return marca;
    }

    const char* getModelo() {
        return modelo;
    }

    int getAno() {
        return ano;
    }

    float getPreco() {
        return preco;
    }

    int getTipo() {
        return tipo;
    }

    const char* getObservacao() {
        return observacao;
    }
    //}fim get
    void listar() {
        cout << "Placa: " << placa << endl;
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Preco: " << preco << endl;
        cout << "Tipo: " << tipo << endl;
        cout << "Observacao: " << observacao << endl;
    }
};

//função para exibir o numero de veiculos no arquivo txt na primeira linha
int getVeiculoCount() {
    FILE* arquivo = fopen("veiculos.txt", "r");

    if (arquivo == NULL) {
        cout << "Erro ao abrir o arquivo." << endl;
        return 0;
    }

    int count = 0;
    char linha[200];

    while (fgets(linha, sizeof(linha), arquivo)) {
        count++;
    }

    fclose(arquivo);

    return count;
}

//função para listar todos os veiculos
void listarVeiculos() {
    FILE* arquivo = fopen("veiculos.txt", "r");

    if (arquivo == NULL) {
        cout << "Erro ao abrir o arquivo." << endl;
        return;
    }

    int count = getVeiculoCount();

    if (count == 0) {
        cout << "Nenhum veiculo cadastrado." << endl;
        fclose(arquivo);
        return;
    }

    cout << "Quantidade de veiculos cadastrados: " << count << endl;

    char linha[200];
    while (fgets(linha, sizeof(linha), arquivo)) {
        cout << linha;
    }

    fclose(arquivo);
}

//função para pesquisar um veiculo, dado uma placa
void pesquisarVeiculo() {
    char placa[10];
    cout << "Insira a placa do veiculo que deseja pesquisar: ";
    cin >> placa;

    FILE* arquivo = fopen("veiculos.txt", "r");

    if (arquivo == NULL) {
        cout << "Erro ao abrir o arquivo." << endl;
        return;
    }

    char linha[200];
    bool encontrado = false;

    while (fgets(linha, sizeof(linha), arquivo)) {
        if (strstr(linha, placa) != NULL) {
            cout << linha;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Veiculo nao encontrado." << endl;
    }

    fclose(arquivo);
}

//função para cadastar um veiculo, com todos seus dados
void cadastrarVeiculo() {
    char placa[10];
    char marca[20];
    char modelo[20];
    int ano;
    float preco;
    int tipo;
    char observacao[50];

    cout << "Placa: ";
    cin >> placa;
    cout << "Marca: ";
    cin >> marca;
    cout << "Modelo: ";
    cin >> modelo;
    cout << "Ano: ";
    cin >> ano;
    cout << "Preco: ";
    cin >> preco;
    cout << "Tipo (1- carro, 2- moto): ";
    cin >> tipo;
    cout << "Observacao: ";
    cin.ignore();
    cin.getline(observacao, sizeof(observacao));

    FILE* arquivo = fopen("veiculos.txt", "a");

    if (arquivo == NULL) {
        cout << "Erro ao abrir o arquivo." << endl;
        return;
    }

    fprintf(arquivo, "%s;%s;%s;%d;%.2f;%d;%s\n", placa, marca, modelo, ano, preco, tipo, observacao);

    fclose(arquivo);

    cout << "Veiculo cadastrado com sucesso." << endl;
}

//funçao para editar um veiculo, dado a placa
void editarVeiculo() {
    char placa[10];
    cout << "Insira a placa do veiculo que deseja editar: ";
    cin >> placa;

    FILE* arquivo = fopen("veiculos.txt", "r");
    FILE* arquivoTemp = fopen("veiculos_temp.txt", "w");

    if (arquivo == NULL || arquivoTemp == NULL) {
        cout << "Erro ao abrir o arquivo." << endl;
        return;
    }

    char linha[200];
    bool encontrado = false;

    while (fgets(linha, sizeof(linha), arquivo)) {
        if (strstr(linha, placa) != NULL) {
            cout << "Insira os novos dados do veiculo:" << endl;

            char novaLinha[200];
            char novoPlaca[10];
            char novaMarca[20];
            char novoModelo[20];
            int novoAno;
            float novoPreco;
            int novoTipo;
            char novaObservacao[50];

            cout << "Placa: ";
            cin >> novoPlaca;
            cout << "Marca: ";
            cin >> novaMarca;
            cout << "Modelo: ";
            cin >> novoModelo;
            cout << "Ano: ";
            cin >> novoAno;
            cout << "Preco: ";
            cin >> novoPreco;
            cout << "Tipo (1- carro, 2- moto): ";
            cin >> novoTipo;
            cout << "Observacao: ";
            cin.ignore();
            cin.getline(novaObservacao, sizeof(novaObservacao));

            snprintf(novaLinha, sizeof(novaLinha), "%s;%s;%s;%d;%.2f;%d;%s\n", novoPlaca, novaMarca, novoModelo, novoAno, novoPreco, novoTipo, novaObservacao);

            fputs(novaLinha, arquivoTemp);
            encontrado = true;
        } else {
            fputs(linha, arquivoTemp);
        }
    }

    fclose(arquivo);
    fclose(arquivoTemp);

    remove("veiculos.txt");
    rename("veiculos_temp.txt", "veiculos.txt");

    if (encontrado) {
        cout << "Veiculo editado com sucesso." << endl;
    } else {
        cout << "Veiculo nao encontrado." << endl;
    }
}

//função para excluir um veiculo, dado a placa
void excluirVeiculo() {
    char placa[10];
    cout << "Insira a placa do veiculo que deseja excluir: ";
    cin >> placa;

    FILE* arquivo = fopen("veiculos.txt", "r");
    FILE* arquivoTemp = fopen("veiculos_temp.txt", "w");

    if (arquivo == NULL || arquivoTemp == NULL) {
        cout << "Erro ao abrir o arquivo." << endl;
        return;
    }

    char linha[200];
    bool encontrado = false;

    while (fgets(linha, sizeof(linha), arquivo)) {
        if (strstr(linha, placa) != NULL) {
            encontrado = true;
        } else {
            fputs(linha, arquivoTemp);
        }
    }

    fclose(arquivo);
    fclose(arquivoTemp);

    remove("veiculos.txt");
    rename("veiculos_temp.txt", "veiculos.txt");

    if (encontrado) {
        cout << "Veiculo excluido com sucesso." << endl;
    } else {
        cout << "Veiculo nao encontrado." << endl;
    }
}

int main() {
    int opcao;

    do {
        cout << "\nSistema de Gerenciamento de Veiculos" << endl;
        cout << "1 - Listar Veiculos" << endl;
        cout << "2 - Pesquisar Veiculo" << endl;
        cout << "3 - Cadastrar Veiculo" << endl;
        cout << "4 - Editar Veiculo" << endl;
        cout << "5 - Excluir Veiculo" << endl;
        cout << "6 - Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                listarVeiculos();
                break;
            case 2:
                pesquisarVeiculo();
                break;
            case 3:
                cadastrarVeiculo();
                break;
            case 4:
                editarVeiculo();
                break;
            case 5:
                excluirVeiculo();
                break;
            case 6:
                cout << "Encerrando o programa." << endl;
                break;
            default:
                cout << "Opcao invalida." << endl;
                break;
        }
    } while (opcao != 6);

    return 0;
}
