#include <iostream>
#include "search.hpp"
using namespace std;

void printTable(int table_size, int *table){
  cout << "tablica: | ";
  for(int i = 0; i < table_size; i++){
    cout << table[i]<<" | ";
  }
  cout <<"\n";
}


int main() {
  cout << "podaj wielkosc tablicy: ";
  int table_size;
  cin >> table_size; 
  int * generated = generate_table(table_size);
  printTable(table_size, generated);

  cout << "prosze wpisać 1 dla sortowania albo 2 dla wyszukiwania\n";
  int choice;
  cin >> choice;
   if(choice == 1){
     cout << "prosze wpisać cyfrę odpowiadającą algorymowi\n";
     cout << "1 dla bąbelkowego\n";
     cout << "2 dla koktajlowe\n";
     cout << "3 dla przez scalanie\n";
     cout << "4 dla szybkie\n";
     cout << "5 dla przez wstawianie\n";

     cin >> choice;
     switch(choice){
       case 1:
          bubble_sort(table_size, generated);
       break;
       case 2:
        break;
       case 3:
        break;
       case 4:
        break;
       case 5:
        break;
       default:  
         cout << "niepoprawna liczba";
     }
   }
  
// wybór 1 lub 2 gdzie 1 to sortowania a 2 to wyszukiwania
// wybór od 1 do 4 gdzie każda cyfra oznacza inne wyszukiwanie/sortowanie
  
  
 
  cout << "\nposortowana tablica: \n";
  printTable(table_size, generated);
  
}

