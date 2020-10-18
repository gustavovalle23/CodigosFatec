/*
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");


    return 0;
} 
*/

/* 
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

// Dados sobre o ALUNO
struct Dados {
    int codFilme;
    string nome;
    float ano;
};

// Estrutura do Nó
struct No {
    Dados dados;    // estrutura guardada dentro da lista
    No *proximoNo;  // aponta para o próximo Nó da lista
};



int main() {
    setlocale(LC_ALL, "Portuguese");

    No *pMaria;
    No *pJose;
    No *pJesus;

    No *pAtual;

    pMaria = new No;
    
    pMaria->dados.codFilme = 100;
    pMaria->dados.nome = "Maria";
    pMaria->dados.ano = 9.5;
    pMaria->proximoNo = NULL;


    pJose  = new No;
    pJose->dados.nome = "José";
    pJose->dados.ano = 9.5;
    pJose->proximoNo = NULL;

    
    
    pJesus = new No;
    pJesus->dados.nome = "Jesus";
    pJesus->dados.ano = 9.5;
    pJesus->proximoNo = NULL;





    delete pMaria;
    delete pJose;
    delete pJesus;


    return 0;
} */

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

// Dados sobre o ALUNO
struct Dados {
    int codFilme;
    int ano;
    string nome;
    string genero;
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
bool inserirListaInicio(Lista *ptrLista, int codFilme,
                        string nome, string genero, int ano);
bool inserirListaFim(Lista *ptrLista, int codFilme,
                        string nome, string genero, int ano);
void exibirFilmeAno(Lista *ptrLista, int ano);


int main() {

    setlocale(LC_ALL, "Portuguese");
    bool operacaoOK;

    Lista *pLista;
    pLista = criarLista();


    inserirListaInicio(pLista, 10, "Star Wars", "Ficção", 1982);
    inserirListaInicio(pLista, 20, "Love Rosie", "Romance", 2016);
    inserirListaInicio(pLista, 30, "Os Mercenários", "Ação", 2017);
    inserirListaFim(pLista, 20, "Love Rosie", "Romance", 2016);
    // inserirListaFim(pLista, 30, "Os Mercenários", "Ação", 2017);



    exibirLista(pLista);


    cout << "\n\n";

    exibirFilmeAno(pLista, 2016);







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
bool inserirListaInicio(Lista *ptrLista, int codFilme,
                        string nome, string genero, int ano) {


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

    ptrNoNovo->dados.codFilme = codFilme;
    ptrNoNovo->dados.nome = nome;
    ptrNoNovo->dados.genero = genero;
    ptrNoNovo->dados.ano = ano;

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
        cout << "Código do filme: " << ptrNoAtual->dados.codFilme << endl;
        cout << "Nome: " << ptrNoAtual->dados.nome << endl;
        cout << "Gênero: " << ptrNoAtual->dados.nome << endl;
        cout << "Ano: " << ptrNoAtual->dados.ano << endl << endl << endl;

        ptrNoAtual = ptrNoAtual->proxNo;
    }
    cout << endl;
}


bool inserirListaFim(Lista *ptrLista, int codFilme,
                        string nome, string genero, int ano) {


    No *ptrNoNovo;
    No *ptrNoAtual;

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

    ptrNoNovo->dados.codFilme = codFilme;
    ptrNoNovo->dados.nome = nome;
    ptrNoNovo->dados.genero = genero;
    ptrNoNovo->dados.ano = ano;
    ptrNoNovo->proxNo = NULL;

    ptrNoNovo->proxNo = ptrLista->inicio;

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

void exibirFilmeAno(Lista *ptrLista, int ano) {
    No *ptrNoAtual;

    ptrNoAtual = ptrLista->inicio;

    while (ptrNoAtual != NULL) {
        if (ptrNoAtual->dados.ano >= ano) {
            cout << "Código do filme: " << ptrNoAtual->dados.codFilme << endl;
            cout << "Nome: " << ptrNoAtual->dados.nome << endl;
            cout << "Gênero: " << ptrNoAtual->dados.nome << endl;
            cout << "Ano: " << ptrNoAtual->dados.ano << endl << endl << endl;

        }


        ptrNoAtual = ptrNoAtual->proxNo;
    }
}