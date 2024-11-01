#include <string>
int square_digits(int num) { 
std::string str = std::to_string(num);
std::string result;  
for(char digitchar : str) {
    int digit = digitchar - '0';    
result += std::to_string(digit * digit);
  } return std::stoi(result);
}