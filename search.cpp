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
