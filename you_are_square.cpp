#include <iostream>

bool is_square(int n) {
  int i = 2;
  if(i * i != n){
    i++;
  }
  return true;
}

int main(){
    std::cout << is_square(25);
}