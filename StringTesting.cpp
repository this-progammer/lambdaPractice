//StringTesting.cpp
//Aether, Hunter M.
#include <string>
#include <iostream>

void StringIsEmpty(std::string& n) {
    n.empty() << true;
}

void OutStringLength(std::string& n) {
    std::cout << n.length() << std::endl;
} 

int main() {

    static std::string UsrStr;
    std::cin >> UsrStr;
    OutStringLength( UsrStr );
    
  return 0;
}
