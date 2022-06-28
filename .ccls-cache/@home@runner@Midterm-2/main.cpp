#include <iostream>

using namespace std;

template <class T>
T interpolSearch(T& val, T* array, int max){
  
  for(int i=0;i<max;i++){
    if(val < array[0] || val > array[max-1]){
      return -1;
    }
    if(array[i]==val){
      return i;
    }
  }
}

int main() {
  int max = 10;
  int X[] = {8, 6, 9, 8, 11, 3, 6};
  int value = 8;
  interpolSeainterpol = interpolSearch(value, &X[1], max);
  cout<<interpol<<endl;
}