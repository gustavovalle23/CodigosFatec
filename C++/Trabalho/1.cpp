#include <iostream>
#include <locale.h> 
#include <stdlib.h> 
#include <string>

using namespace std;


int main() {
	setlocale(LC_ALL, "Portuguese");

    int *ponteiro;

    *(ponteiro + 0) = 100;



	return 0;
}