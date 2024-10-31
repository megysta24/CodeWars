#include <string>
using namespace std ; 

string reverseString (string str ) {
  char n = str.size();
  for(int i = 0; i < n / 2; i++){
    char temp = str[i];
    str[i] = str[n - i - 1];
    str[n - i - 1] = temp;
  }
  return str;
}