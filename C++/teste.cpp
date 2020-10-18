#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");

    string nome = "Hello World";
    
    transform(nome.begin(), nome.end(),nome.begin(), ::toupper);

    cout << nome;


    return 0;
} 