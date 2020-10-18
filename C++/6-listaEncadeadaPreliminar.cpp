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

struct Aluno {
    string nome;
    int idade;
    float media;

    Aluno *proximo;
};

int main() {
    setlocale(LC_ALL, "Portuguese");    

    Aluno *pMaria;
    Aluno *pJose;
    Aluno *pJesus;


Aluno *pAtual;



    pMaria = new Aluno;
    pMaria->nome = "Maria";
    pMaria->idade = 45;
    pMaria->media = 9.5;
    pMaria->proximo = NULL;




    pJose = new Aluno;
    pJose->nome = "Jose";
    pJose->idade = 50;
    pJose->media = 9.0;
    pJose->proximo = NULL;



    pJesus = new Aluno;
    pJesus->nome = "Jesus";
    pJesus->idade = 33;
    pJesus->media = 10.0;
    pJesus->proximo = NULL;


    pMaria->proximo = pJose;
    pJose->proximo = pJesus;


    // pAtual = pMaria;

    cout << "Endereço: "  << pMaria << endl;
    cout << "Nome: "  << pMaria->nome << endl;
    cout << "Idade: " << pMaria->idade << endl;
    cout << "Próximo: " << pMaria->proximo << endl << endl;

    cout << "Endereço: "  << pJose << endl;
    cout << "Nome: "  << pJose->nome << endl;
    cout << "Idade: " << pJose->idade << endl;
    cout << "Próximo: " << pJose->proximo << endl << endl;


    cout << "Endereço: "  << pJesus << endl;
    cout << "Nome: "  << pJesus->nome << endl;
    cout << "Idade: " << pJesus->idade << endl;
    cout << "Próximo: " << pJesus->proximo << endl << endl;



    delete pJesus;
    delete pMaria;
    delete pJose;


    return 0;
}
*/

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float media;

    Aluno *proximo;
};

int main() {
    setlocale(LC_ALL, "Portuguese");    

    Aluno *pMaria;
    Aluno *pJose;
    Aluno *pJesus;


Aluno *pAtual;



    pMaria = new Aluno;
    pMaria->nome = "Maria";
    pMaria->idade = 45;
    pMaria->media = 9.5;
    pMaria->proximo = NULL;




    pJose = new Aluno;
    pJose->nome = "Jose";
    pJose->idade = 50;
    pJose->media = 9.0;
    pJose->proximo = NULL;



    pJesus = new Aluno;
    pJesus->nome = "Jesus";
    pJesus->idade = 33;
    pJesus->media = 10.0;
    pJesus->proximo = NULL;


    pMaria->proximo = pJose;
    pJose->proximo = pJesus;



    pAtual = pMaria;

    while (pAtual != NULL){
        if (pAtual->nome == "Jesus"){
            cout << "Endereço: "  << pAtual << endl;
            cout << "Nome: "  << pAtual->nome << endl;
            cout << "Idade: " << pAtual->idade << endl;
            cout << "Próximo: " << pAtual->proximo << endl << endl;
            
            break;

        }

        pAtual = pAtual->proximo;
    }



    // cout << "Endereço: "  << pAtual << endl;
    // cout << "Nome: "  << pAtual->nome << endl;
    // cout << "Idade: " << pAtual->idade << endl;
    // cout << "Próximo: " << pAtual->proximo << endl << endl;

    // pAtual = pJose;

    // cout << "Endereço: "  << pAtual << endl;
    // cout << "Nome: "  << pAtual->nome << endl;
    // cout << "Idade: " << pAtual->idade << endl;
    // cout << "Próximo: " << pAtual->proximo << endl << endl;

    // pAtual = pJesus;

    // cout << "Endereço: "  << pAtual << endl;
    // cout << "Nome: "  << pAtual->nome << endl;
    // cout << "Idade: " << pAtual->idade << endl;
    // cout << "Próximo: " << pAtual->proximo << endl << endl;



    delete pJesus;
    delete pMaria;
    delete pJose;


    return 0;
}