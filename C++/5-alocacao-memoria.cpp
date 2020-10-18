/*
#include <iostream>
#include <locale.h>
#include <stdlib.h>
//#include <string>

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

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *px;

    px = new int; // Alocando espaço da memória

    delete px; // limpando variável da memória


    

    return 0;
}
 */

/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
//#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    // int ponteiro1[3] = {10, 20, 30};
    // int ponteiro2[3] = {10, 20, 30};
    // int ponteiro3[3];

    int *ponteiro1, *ponteiro2, *ponteiro3;


    ponteiro1 = new int[3];
    ponteiro2 = new int[3];
    ponteiro3 = new int[3];

    *(ponteiro2 + 0) = 10;
    *(ponteiro2 + 1) = 20;
    *(ponteiro2 + 2) = 30;


    *(ponteiro1 + 0) = 10;
    *(ponteiro1 + 1) = 20;
    *(ponteiro1 + 2) = 30;


    for (int i = 0; i < 3; i++)
        *(ponteiro3 + i) = *(ponteiro1 + i) + *(ponteiro2 + i);
    // *(ponteiro3 + 0) = *(ponteiro1 + 0) + *(ponteiro2 + 0);
    // *(ponteiro3 + 1) = *(ponteiro1 + 1) + *(ponteiro2 + 1);
    // *(ponteiro3 + 2) = *(ponteiro1 + 2) + *(ponteiro2 + 2);

    cout << *(ponteiro3 + 0) << endl
         << *(ponteiro3 + 1) << endl
         << *(ponteiro3 + 2) << endl;


        //  delete[] ponteiro1;
        //  delete[] ponteiro2;
        //  delete[] ponteiro3;

    return 0;
}
 */

/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float media;
};


int main() {
    setlocale(LC_ALL, "Portuguese");

    Aluno *pAluno;
    Aluno aluno;

    pAluno = new Aluno;


    aluno.nome = "Gustavo";
    aluno.idade = 21;
    aluno.media = 9;

    pAluno->nome = "Henrique";
    pAluno->idade = 21;
    pAluno->media = 21.2;



    delete pAluno;

    return 0;
}  */

/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Veiculo {
    string marca;
    string modelo;
    int anoFabricacao;
    int qtdPortas;
};

Veiculo obterDados(Veiculo *veiculo){
    cout << "Marca: ";
    cin >> veiculo->marca;
    cout << "Modelo: ";
    cin >> veiculo->modelo;
    cout << "Ano de Fabricação: ";
    cin >> veiculo->anoFabricacao;
    cout << "Quantidade de Portas: ";
    cin >> veiculo->qtdPortas;

    return *veiculo;

}

void imprimirDados(Veiculo *veiculo){
    system("clear");
    cout << "Marca: " << veiculo->marca << endl;
    cout << "Modelo: " << veiculo->modelo << endl;
    cout << "Ano de Fabricação: " << veiculo->anoFabricacao << endl;
    cout << "Quantidade de Portas: " << veiculo->qtdPortas << endl;

}

void alocarMemoria(Veiculo *veiculo){
    veiculo = new Veiculo;
}

void desalocarMemoria(Veiculo *veiculo){
    delete veiculo;
}

int main() {

    Veiculo *veiculo1;
    veiculo1 = new Veiculo;


    obterDados(veiculo1);
    imprimirDados(veiculo1);
    alocarMemoria(veiculo1);
    desalocarMemoria(veiculo1);

    setlocale(LC_ALL, "Portuguese");


    return 0;
} */

/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
//#include <string>

using namespace std;

struct Aluno {
    string nome;
    int idade;
    float media;
};

int main() {
    setlocale(LC_ALL, "Portuguese");


    Aluno *pAluno;

    pAluno = new Aluno[3];

    (pAluno + 0)->nome = "Maria";
    (pAluno + 0)->idade = 21;
    (pAluno + 0)->media = 8.2;

    (pAluno + 1)->nome = "Maria";
    (pAluno + 1)->idade = 21;
    (pAluno + 1)->media = 8.2;

    (pAluno + 2)->nome = "Maria";
    (pAluno + 2)->idade = 21;
    (pAluno + 2)->media = 8.2;


    return 0;
} 

 */

#include <iostream>
#include <locale.h>
#include <stdlib.h>
//#include <string>

using namespace std;

struct Pessoa{
    string nome;
};

struct Aluno{
    string curso;
    Pessoa pessoa;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    Aluno aluno;
    aluno.pessoa.nome = "Gustavo";


    return 0;
} 