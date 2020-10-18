// #include <iostream>
// #include <locale.h>
// #include <stdlib.h>
// #include <string>

// using namespace std;

// int main() {
//     setlocale(LC_ALL, "Portuguese");
//
//     return 0;
// }

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <iomanip>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
    float salario;
};



int main() {
    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);
    
    Pessoa aluno;

    cout << "Nome: ";
    getline(cin, aluno.nome);

    cout << "Idade: ";
    cin >> aluno.idade;

    cout << "Salário: ";
    cin >> aluno.salario;



    cout << "\n\nNome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Salário: " << aluno.salario << endl;



    return 0;
}

// #include <iostream>
// #include <locale.h>
// #include <stdlib.h>
// #include <string>

// using namespace std;

// int main() {
//     setlocale(LC_ALL, "Portuguese");
//
//     return 0;
// }


/*#include <iostream>
#include <locale.h>
#include <string>
#include <iomanip> // setprecision(2)


using namespace std;


struct Pessoa {
    string nome;
    int idade;
    float salario;
};


Pessoa inserirDados();
void exibirDados(Pessoa novoAluno);


int main() {

    setlocale(LC_ALL, "Portuguese");
    cout << fixed << setprecision(2);

    Pessoa aluno;

    aluno = inserirDados();

    exibirDados(aluno);






    return 0;
}

Pessoa inserirDados(){
    Pessoa novoAluno;

    novoAluno.nome = "Gustavo Valle";
    novoAluno.idade = 22;
    novoAluno.salario = 300.50;

    return novoAluno;
}

void exibirDados(Pessoa novoAluno) {
    cout << "Nome: " << novoAluno.nome << endl;
    cout << "Idade: " << novoAluno.idade << endl;
    cout << "Salário: R$" << novoAluno.salario << endl;

}

*/


#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

struct CadastroVeiculo{
    string modelo;
    int anoFabricacao;
    int numeroDePortas;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    system("clear");
    CadastroVeiculo veiculo;


    cout << "Modelo do veículo: ";
    getline(cin, veiculo.modelo);

    cout << "Ano do veículo: ";
    cin >> veiculo.anoFabricacao;

    cout << "Número de portas do veículo: ";
    cin >> veiculo.numeroDePortas;


    cout << "Veículo: " << veiculo.modelo << endl;
    cout << "Ano do veículo: " << veiculo.anoFabricacao << endl;
    cout << "Quantidade de portas: " << veiculo.numeroDePortas << endl;

    return 0;
}



