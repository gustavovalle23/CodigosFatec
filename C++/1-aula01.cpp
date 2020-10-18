// #include <iostream>
// #include <locale.h> // setlocale
// #include <stdlib.h> // system
// #include <string> // Textos em geral

// using namespace std;

// int main() {
// 	setlocale(LC_ALL, "Portuguese");



//     return 0;
// }

// #include <iostream>
// #include <locale.h> // setlocale
// #include <stdlib.h> // system
// #include <string> // Textos em geral
// #include <iomanip>

// using namespace std;

// int main() {
//     setlocale(LC_ALL, "Portuguese");
//     cout << fixed << setprecision(2); // Define o nro de casas decimais


// system("pause");
// return 0;
// }

// #include <iostream>
// #include <locale.h> // setlocale
// #include <stdlib.h> // system
// #include <string> // Textos em geral
// #include <iomanip>

// using namespace std;

// int main() {
// 	setlocale(LC_ALL, "Portuguese");

// 	int x, y;

//     // cout << "Hello World" ;


//     x = 100;
//     y = 200;

//     cout << "Valor x: " << x << endl;
//     cout << "Valor y: " << y << endl;


//     return 0;
// }


/*
#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	float x;

    cout << "Hello World\n";
    cin >> x;
    cout << "Valor de x: " << x << endl;

    return 0;
}
*/


/*
#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
// #include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int age;
	string name;

	cout << "Type your age: ";
	cin >> age;
	cout << "\nType your name: ";

	cin.ignore();
    getline( cin, name);
    cout << "The " << name << " has " << age << " years old" << endl;


    return 0;
}
*/

// EXERCICIO 01


/*
#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
#include <unistd.h>

using namespace std;

int main() {
	system("clear");

	setlocale(LC_ALL, "Portuguese");

	int codigo;

	while (true) {
		cout << "Digite o código do produto desejado: ";
		cin >> codigo;
		if (codigo == 1) {
			cout << "Alimento não-perecível\n\n";
		    sleep(2);
		    system("clear");
		} else if (codigo == 2 || codigo == 3 || codigo == 4) {
			cout << "Alimento perecível\n\n";
		    sleep(2);
		    system("clear");
		} else if (codigo == 5 || codigo == 6) {
			cout << "Vestuário\n\n";
		    sleep(2);
		    system("clear");
		} else if (codigo == 7) {
			cout << "Higiene pessoal\n\n";
		    sleep(2);
		    system("clear");
		} else if (codigo >= 8 && codigo <= 15) {
			cout << "Limpeza e utensílios domésticos\n\n";
		    sleep(2);
		    system("clear");
		} else {
			cout << "Inválido\n\n";
		    sleep(2);
		    system("clear");
		}

	}

    return 0;
}
*/

// EXERCICIO 02
/*
#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral
// #include <iomanip>

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");

	int num = 0;

	cout << "***Números pares:***\n\n";

	while (num <= 80){
		if (num % 2 == 0){
			cout << "num = " << num << " ";
		}
		num++;
	}

	cout << "\n\n***Divisores por 4:*** \n\n";
	num = 0;

	while (num <= 80){
		if (num % 4 == 0) {
			cout << num << " ";
		}
		num++;
	}

	cout << endl;


    return 0;
}

*/
/*
#include <iostream>
#include <locale.h> // setlocale
#include <stdlib.h> // system
#include <string> // Textos em geral

using namespace std;

int soma(int a, int b = 10);

int main() {
	setlocale(LC_ALL, "Portuguese");

	cout soma(2);


    return 0;
}

int soma(int a, int b = 10) {

	int adicao =  a+b;

	return adicao;
}*/


#include <iostream>

using namespace std;

int soma(int n, int add = 0);

int main() {
	int num = 10;
	
	// num = inc_num(num);
	cout << num << endl; // imprime 10
	// num = inc_num(num, 1);
	cout << num << endl; // imprime 11
	return 0;
}

int soma(int n, int add = 0) {
	return n + add;
}