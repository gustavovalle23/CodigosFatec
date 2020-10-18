
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

// Dados sobre o ALUNO
struct Dados {
    int codProduto;
    string descricao;
    float preco;
    string fabricante;
};

// Estrutura do Nó
struct No {
    Dados dados; // estrutura guardada dentro da lista
    No *proxNo;  // aponta para o próximo Nó da lista
};

// Nó início da lista
struct Lista {
    int qtdNo;

    No *inicio;
};

Lista *criarLista();
void liberarLista(Lista *ptrLista);
void exibirLista (Lista *ptrLista);
bool inserirListaInicio(Lista *ptrLista, int codProduto, string descricao, float preco, string fabricante);
bool inserirListaFim(Lista *ptrLista, int codProduto, string descricao, float preco, string fabricante);


int main() {

    setlocale(LC_ALL, "Portuguese");
    bool operacaoOK;

    Lista *pLista;
    pLista = criarLista();


    // inserirListaInicio(pLista, 10, "Produto diverso1", 190.2, "Desconhecido");
    // inserirListaInicio(pLista, 20, "Produto diverso2", 390.2, "Desconhecido1");
    // inserirListaInicio(pLista, 30, "Produto diverso3", 120.2, "Desconhecido2");
    inserirListaFim(pLista, 30, "Produto diverso3", 120.2, "Desconhecido2");




    exibirLista(pLista);


    cout << "\n\n";








    liberarLista(pLista);

    return 0;
}

//--------------------------------------------------------
// CRIAR LISTA
//--------------------------------------------------------
Lista *criarLista() {

    Lista *ptrLista;

    ptrLista = new Lista;

    // Se a lista NÃO pode ser criada
    if (ptrLista == NULL) {
        cout << "Não foi possível criar a lista!" << endl;
        return NULL;
    }

    // Como a lista está vazia o INÍCIO aponta para NULL
    ptrLista->qtdNo = 0;
    ptrLista->inicio = NULL;

    return ptrLista;
}

//--------------------------------------------------------
// LIBERAR LISTA
//--------------------------------------------------------
void liberarLista(Lista *ptrLista) {

    No *ptrNoAtual;

    //Se a lista NÃO foi criada
    if (ptrLista == NULL) {

        cout << "A lista não está criada!" << endl;
        return;
    }

    // Exclui cada Nó da lista
    while (ptrLista->inicio != NULL) {

        ptrNoAtual = ptrLista->inicio;
        ptrLista->inicio = ptrNoAtual->proxNo;

        delete ptrNoAtual;
    }

    delete ptrLista;
}

//--------------------------------------------------------
// INSERIR NO INÍCIO DA LISTA
//--------------------------------------------------------
bool inserirListaInicio(Lista *ptrLista, int codProduto, string descricao, float preco, string fabricante) {


    No *ptrNoNovo;

    //Se a lista NÃO foi criada
    if (ptrLista == NULL)
    {
        cout << "A lista não está criada!" << endl;
        return false;
    }

    //-------------------------------
    // Cria o novo nó
    //-------------------------------
    ptrNoNovo = new No;

    if (ptrNoNovo == NULL) {
        cout << "Memória insulficiente!" << endl;
        return false;
    }

    ptrNoNovo->dados.codProduto = codProduto;
    ptrNoNovo->dados.fabricante = fabricante;
    ptrNoNovo->dados.descricao = descricao;
    ptrNoNovo->dados.preco = preco;

    ptrNoNovo->proxNo = ptrLista->inicio;

    ptrLista->inicio = ptrNoNovo;

    // Incrementa o quantidade de Nós
    ptrLista->qtdNo++;

    return true;
}

void exibirLista (Lista *ptrLista) {
    No *ptrNoAtual;

    // Se a lista não foi criada
    if (ptrLista == NULL) {
        cout << "A lista não está criada!" << endl;
        return;
    }

    // Se não tiver nenhum Nó na lista

    if (ptrLista->inicio == NULL) {
        cout << "A lista está vazia!" << endl;

        return;
    }

    ptrNoAtual = ptrLista->inicio;

    while (ptrNoAtual != NULL) {
        cout << "Código do filme: " << ptrNoAtual->dados.codProduto << endl;
        cout << "fabricante: " << ptrNoAtual->dados.fabricante << endl;
        cout << "Gênero: " << ptrNoAtual->dados.fabricante << endl;
        cout << "preco: " << ptrNoAtual->dados.preco << endl << endl << endl;

        ptrNoAtual = ptrNoAtual->proxNo;
    }
    cout << endl;
}


bool inserirListaFim(Lista *ptrLista, int codProduto, string descricao, float preco, string fabricante) {


    No *ptrNoNovo;
    No *ptrNoAtual;

    //Se a lista NÃO foi criada
    if (ptrLista == NULL) {
        cout << "A lista não está criada!" << endl;
        return false;
    }

    //-------------------------------
    // Cria o novo nó
    //-------------------------------
    ptrNoNovo = new No;

    if (ptrNoNovo == NULL) {
        cout << "Memória insulficiente!" << endl;
        return false;
    }

    ptrNoNovo->dados.codProduto = codProduto;
    ptrNoNovo->dados.descricao = descricao;
    ptrNoNovo->dados.fabricante = fabricante;
    ptrNoNovo->dados.preco = preco;
    ptrNoNovo->proxNo = NULL;


    ptrNoAtual = ptrLista->inicio;

    // Se não houver nenhum nó na lista

    if (ptrNoAtual == NULL) {
        ptrLista->inicio = ptrNoNovo;
    }
    else {
        // Localiza o último nó
        while (ptrNoAtual->proxNo != NULL) {
            ptrNoAtual = ptrNoAtual->proxNo;
        }
        ptrNoAtual->proxNo = ptrNoNovo;
    }
    // Incrementa a quantidade de Nós

    ptrLista->qtdNo++;

    return true;
}

