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

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");

    int x;
    int z;
    int *ph;

    x = 100;
    z = x;
    ph = &x;

    cout << "Valor de x: " << x << endl;
    cout << "Endereço de memória de x: " << &x << endl;
    cout << "z: " << z << endl;
    cout << "PH: " << *ph << endl;



    return 0;
}
*/

/*
#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int *retornaNumero();

int main() {
    setlocale(LC_ALL, "Portuguese");

    int *pA;
    pA = retornaNumero();

    cout << "Valor de *pA: " << *pA << endl;
    cout << "Valor de *pA: " << *pA << endl;




    return 0;
}


int *retornaNumero() {
    static int x = 100;

    return &x;
}

*/


/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");


    float notas[4] = {1.2, 2.4, 3.2, 85};
    int index = 3;


    cout << *(notas + index) << endl;
    cout << *(notas + 3) << endl;
    cout << notas[index] << endl;
    cout << notas[3] << endl;


    return 0;
} */

/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    float temperaturas[3];

    cout << "Digite a 1ª temperatura: " << endl;
    cin >> *(temperaturas + 0);
    cout << "Digite a 2ª temperatura: " << endl;
    cin >> *(temperaturas + 1);
    cout << "Digite a 3ª temperatura: " << endl;
    cin >> *(temperaturas + 2);

    cout << "\n\nAs temperaturas lidas são:\n\n";
    cout << *(temperaturas + 0) << endl << *(temperaturas + 1) << endl << *(temperaturas + 2) << endl ;



    return 0;
} */


/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float salario;
};


int main() {
    setlocale(LC_ALL, "Portuguese");

    Pessoa pessoa1;

    pessoa1.nome = "Maria";
    pessoa1.idade = 35;
    pessoa1.salario = 1200.5;

    
    Pessoa pessoa2;
    Pessoa *pPes;

    pPes = &pessoa2;

    pPes->nome = "Gustavo";
    pPes->idade = 21;
    pPes->salario = 1500;


    cout << "Nome: " << pPes->nome << endl;
    cout << "Idade: " << pPes->idade << endl;
    cout << "Salário: " << pPes->salario << endl;
    return 0;
}  */

/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float salario;
};



void obterDados(Pessoa *pessoa1);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Pessoa pessoa1;

    obterDados(&pessoa1);
    


    cout << "Nome: " << pessoa1.nome << endl;
    cout << "Idade: " << pessoa1.idade << endl;
    cout << "Salário: " << pessoa1.salario << endl;
    return 0;
} 

void obterDados(Pessoa *pPes){
    cout << "Digite o nome: ";
    cin >> pPes->nome;
    cout << "Digite a idade: ";
    cin >> pPes->idade;
    cout << "Digite o salário: ";
    cin >> pPes->salario;


} */

/* #include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct Veiculo {
    string modelo;
    int ano;
    int portas;
};

void obterDados(Veiculo *veiculo1);

int main() {
    setlocale(LC_ALL, "Portuguese");

    Veiculo veiculo1;


    obterDados(&veiculo1);

    system("clear");
    cout << "Modelo do veículo: " << veiculo1.modelo << "\n";
    cout << "Ano do veículo: " << veiculo1.ano << "\n";
    cout << "Número de portas do veículo: " << veiculo1.portas << "\n";
    

    return 0;
} 



void obterDados(Veiculo *veiculo1){
    cout << "Digite o modelo do veículo: ";
    getline( cin, veiculo1->modelo);
    cout << "Digite o ano do veículo: ";
    cin >> veiculo1->ano;
    cout << "Digite o número de portas do veículo: ";
    cin >> veiculo1->portas;

} */

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    return 0;
}