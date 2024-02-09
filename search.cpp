#include <cstdlib>
#include <iostream>
using namespace std;

int* generate_table(int table_size) {
    int* tablica = new int[table_size];
    srand(time(NULL));
    for (int i = 0; i < table_size; i++) {
        int losowa = rand() % 100;
        tablica[i] = losowa;
    }
    return tablica;
}


int* bubble_sort(int table_size, int* table) {
    for (int j = 0; j < table_size; j++) {
        for (int i = 0; i < table_size - 1; i++) {
            if (table[i] > table[i + 1]) {
                int temp = table[i];
                table[i] = table[i + 1];
                table[i + 1] = temp;
            }
        }
    }
    return table;
}

