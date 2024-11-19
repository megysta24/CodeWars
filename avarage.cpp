#include <vector>

double calcAverage(const std::vector<int>& values){
  double result = 0;
  int count = 0;
  for(size_t i = 0;i < values.size();i++){
    result += values[i];
    count++;
  }
  return result / count;
}