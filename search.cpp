#include <cstdlib>
#include <iostream>
#include <cmath>
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

  for(int i=0; i < table_size;i++){
    if(searched == table[i]){
      cout <<"liczba"<<searched<<"znajduje sie pod indeksem "<< i <<"\n";
      return;
    }}
      cout << "liczba nieznaleziona\n";
}

void linear_search_with_sentry(int table_size, int * table, int searched){
  int* array= new int[table_size +1];
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

int binear_search(int table_size, int * table, int searched){
  insert_sort(table_size, table);
  int left = 0;
  int right= table_size-1;
  int index;
  while(left<=right){
    index = floor((left + right)/2);
    if (table[index] < searched){
      left = index +1;
    }
    else if(table[index]> searched){
      right = index -1;
    }
    else{
      cout<<"index jest równy: "<<index;
      return index;
    }
  }
  return index;
}


void quick_sort(int* table, int leftIndex, int rightIndex){
    int i = leftIndex;
    int j = rightIndex;
    int pivot = table[leftIndex];

    while (i <= j)
    {
        while (table[i] < pivot)
        {
          i++;
        }

        while (table[j] > pivot)
        {
          j--;
        }

        if (i <= j)
        {
          int temp = table[i];
            table[i] = table[j];
            table[j] = temp;
          i++;
          j--;
        }
    }

    if (leftIndex < j)
        quick_sort(table, leftIndex, j);

    if (i < rightIndex)
        quick_sort(table, i, rightIndex);
}

void jump_search(int table_size, int* table, int searched) {
  int block = (int)(sqrt(table_size));
  int index = 0;
  while (table[min(block, table_size) - 1] < searched) {
    index = block;
    block += (int)(sqrt(table_size));
    if (index >= table_size)
      return;
  }
  while (table[index] < searched) {
    index++;
    if (index == min(block, table_size)) {
      return;
    }
  }
  if (table[index] == searched){
    cout << "Szukana liczna jest pod indexem:" << index;
    return;
  }
  cout << "nie znaleziono";
  return ;
}