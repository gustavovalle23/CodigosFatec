// #include <iostream>
// #include <locale.h>
// #include <stdlib.h>
// #include <string>

// using namespace std;

// void exibirX(int vlrX);

// int main() {
// setlocale(LC_ALL, "Portuguese");


// int x = 0;

// // while (true) {
// //     cout << "Valor de x: " << x << endl; 

// //     x++;
// // }

// exibirX(x);

// return 0;
// }

// void exibirX(int vlrX) {
//     cout << "Valor de vlrX: " << vlrX << endl;
//     vlrX++;

//     if (vlrX < 251) {
//         exibirX(vlrX);
//     }

// }

// #include <iostream>
// #include <locale.h>
// #include <stdlib.h>
// #include <string>

// using namespace std;

// void exibirX(int vlrX);

// int main() {
// setlocale(LC_ALL, "Portuguese");


// int x = 3;

// exibirX(x);


// return 0;
// }

// void exibirX(int vlrX) {
//     if (vlrX > 0) {
//         vlrX--;
//         cout << "Teste" << vlrX << endl;
//         exibirX(vlrX);

//     }
// }

#include <iostream>
#include <locale.h>
#include <stdlib.h>
#include <string>

using namespace std;

void pares(int num);

int main() {
setlocale(LC_ALL, "Portuguese");

int num = 0;

pares(num);


return 0;
}

void pares(int num) {

    if (num < 20){
        cout << num << endl;
        num += 2;
        pares(num);
    }

}