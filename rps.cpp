#include <string>

std::string rps(const std::string& p1, const std::string& p2) {
  std::string r = "rock";
  std::string s = "scissors";
  std::string p = "paper";
  std::string result;
  if(p1 == p2){
    return "Draw!";
  }else if((p1 == r && p2 == s) || (p1 == s && p2 == p) || (p1 == p && p2 ==r)){
    result = "Player 1 won!";
    return result;
  }else if((p1 == s && p2 == r) || (p1 == p && p2 == s) || (p1 == r && p2 ==p)){
    result = "Player 2 won!";
    return result;
  }
  return result;
}