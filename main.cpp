#include <iostream>
#include "search.hpp"
using namespace std;

int main() {
    cout << "podaj wielkosc tablicy: ";
    int table_size;
    cin >> table_size;
    int* generated = generate_table(table_size);
    for (int i = 0; i < table_size; i++) {
        cout << generated[i] << "\n";
    }
}