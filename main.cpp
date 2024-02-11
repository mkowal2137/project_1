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
     cout << "prosze wpisać cyfrę odpowiadającą sortowaniu\n";
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
         cocktail_sort(table_size,generated);
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
    cout << "\nposortowana tablica: \n";
    printTable(table_size, generated);
     return 0;
  }

  
  if(choice == 2){
    cout << "prosze wpisać cyfrę odpowiadającą wyszukiwaniu\n";
    cout << "1 dla liniowe\n";
    cout << "2 dla liniowe z wartownikiem\n";
    cout << "3 dla skokowe\n";
    cout << "4 dla binarne\n";
    cout << "5 dla interpolacyjne\n";

    cin >> choice;
    cout << "prosze podac wyszukiwana liczbe: ";
    int searched;
    cin >> searched;
      switch(choice){
        case 1:
          linear_search(table_size,generated,searched);
          break;
        case 2:
          linear_search_with_sentry(table_size,generated,searched);
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
    return 0;
  }
}
  
