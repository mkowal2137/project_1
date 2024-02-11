#include <cstdlib>
#include <iostream>
using namespace std;

int * generate_table(int table_size) {
  int *tablica = new int[table_size];
  srand(time(NULL));
  for(int i = 0; i <table_size; i++) {
    int losowa = rand() % 100;
    tablica[i]=losowa;
  }
  return tablica;
}


int * bubble_sort(int table_size, int * table){
  for(int j = 0; j < table_size; j++){
    for(int i = 0; i < table_size - 1; i++){
      if (table[i] > table[i+1]){
        int temp = table[i];
        table[i] = table[i+1];
        table[i+1] = temp;  
      }
    }
  }
  return table;
}
 
void linear_search(int table_size, int * table,int searched){
    /* funkcja musi dostać liczbę wyszukiwaną w tablicy a następnie powinna 
        przejść przez tablicę i porównywać liczbę z danymi w tablicy
        po znalezieniu daynch powinna wypisać miejsce w tablicy lub napisać że nie ma
        takiej liczby w tablicy
*/
  

  for(int i=0; i < table_size;i++){
    if(searched == table[i]){
      cout <<"liczba"<<searched<<"znajduje sie pod indeksem "<< i <<"\n";
      return;
    }}
      cout << "liczba nieznaleziona\n";
}

void linear_search_with_sentry(int table_size, int * table, int searched){
  int* array= new int[table_size +1];
  /*  przenieść dane z table do array
  for jest tu po to żeby przechodził po pojedzyńczych kratkach table i wstawiał je do array
   */ 
  for(int i=0;i < table_size;i++){
    array[i] = table[i];
  }
  array[table_size]= -1;
  int i=0;

  while(array[i]!=-1){
    if(searched == array[i]){
      cout <<"liczba "<<searched<<" znajduje sie pod indeksem "<< i <<"\n";
    }
     i++;
  }
      cout << "dotarto do wartownika\n";
}

int * cocktail_sort(int table_size, int * table){

  int bottom =0;
  int top = table_size -1;
  bool change = true;
  while(change == true){
    change = false;
    for(int i = bottom;i<top;i++){
      if(table[i] > table[i+1]){
        int temp = table[i];
        table[i] = table[i+1];
        table[i+1] = temp;
        change = true;
      }
    }
    top = top -1;
    for(int i = top;i> bottom;i--){
      if(table[i] < table[i-1]){
        int temp = table[i];
        table[i] = table[i-1];
        table[i-1] = temp;
        change = true;
      }
    }
    bottom = bottom +1;
  }
  return table;
}

int * insert_sort(int table_size, int * table){
  for(int i=1;i < table_size;i++){
    int inserted_element = table[i];
    int j = i-1;
    while(j>=0 && table[j]> inserted_element){
      table[j+1]= table[j];
      j= j-1;
    }
      table[j+1] = inserted_element;
  }
  return table;
}