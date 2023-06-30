#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int contarCarrosCadastrados() {
    FILE* arquivo = fopen("veiculos.txt", "r");

    if (arquivo == NULL) {
        return 0;
    }

    int contador = 0;
    char linha[200];

    while (fgets(linha, sizeof(linha), arquivo)) {
        contador++;
    }

    fclose(arquivo);

    return contador;
}

void listarVeiculos() {
    FILE* arquivo = fopen("veiculos.txt", "r");

    if (arquivo == NULL) {
        cout << "Erro ao abrir o arquivo." << endl;
        return;
    }

    int contador = contarCarrosCadastrados();
    cout << "Total de carros cadastrados: " << contador << endl;

    char linha[200];
    while (fgets(linha, sizeof(linha), arquivo)) {
        cout << linha;
    }

    fclose(arquivo);
}

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

    int contador = contarCarrosCadastrados() + 1; // Incrementa o contador

    fprintf(arquivo, "%s;%s;%s;%d;%.2f;%d;%s\n", placa, marca, modelo, ano, preco, tipo, observacao);

    fclose(arquivo);

    cout << "Veiculo cadastrado com sucesso. Total de carros cadastrados: " << contador << endl;
}

//função para editar os dados do veiculo
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
        if (strstr(linha, placa) == NULL) {
            fputs(linha, arquivoTemp);
        } else {
            encontrado = true;
        }
    }

    fclose(arquivo);
    fclose(arquivoTemp);

    remove("veiculos.txt");
    rename("veiculos_temp.txt", "veiculos.txt");

    if (encontrado) {
        int contador = contarCarrosCadastrados() - 1; // Decrementa o contador
        cout << "Veiculo excluido com sucesso. Total de carros cadastrados: " << contador << endl;
    } else {
        cout << "Veiculo nao encontrado." << endl;
    }
}

int main() {
    int opcao;
    do {
        cout << "\nMENU DE OPCOES" << endl;
        cout << "1- Listar veiculos" << endl;
        cout << "2- Pesquisar veiculo" << endl;
        cout << "3- Cadastrar veiculo" << endl;
        cout << "4- Editar veiculo" << endl;
        cout << "5- Excluir veiculo" << endl;
        cout << "6- Sair" << endl;
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
                cout << "Encerrando o programa..." << endl;
                break;
            default:
                cout << "Opcao invalida." << endl;
        }
    } while (opcao != 6);

    return 0;
}
