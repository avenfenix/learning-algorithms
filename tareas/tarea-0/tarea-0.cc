/* 

    Tarea 0 - Algoritmos y Complejidad

    Nombre:  Juan Parra
    Rol:     201973094-0

    ____________________
    Concepto  |  Tiempo
    Revisión       15
    Desarrollo     20
    Informe        10

*/

#include <list>
#include <iostream>

using namespace std;

void printear(list<int>);

int main(){
    list<int> lista;
    string input, token;
    getline(cin, input);
    int end = input.length();
    for (int pos=0; pos < input.length();){
        int indel = input.substr(pos, end).find(" ");
        token = input.substr(pos , indel);
        int local = stoi(token);
        lista.push_back(local);
        pos = pos + token.length() + 1;
    }
    lista.sort();
    printear(lista);
    return 0;
}

void printear(list<int> l){
    for (int n : l){
        cout << n << " ";
    }
    cout << "\n";
}