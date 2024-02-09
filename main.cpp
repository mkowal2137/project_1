#include <iostream>
#include "search.hpp"
using namespace std;

void printTable(int table_size, int* table) {
    cout << "tablica: \n";
    for (int i = 0; i < table_size; i++) {
        cout << table[i] << "\n";
    }
}

int main() {
    cout << "podaj wielkosc tablicy: ";
    int table_size;
    cin >> table_size;
    int* generated = generate_table(table_size);

    printTable(table_size, generated);
    bubble_sort(table_size, generated);
    cout << "posortowana tablica: \n";
    printTable(table_size, generated);

}

