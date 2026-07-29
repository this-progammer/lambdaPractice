#include <iostream>

/*
  Programmer : Aether
*/

int main() {
    int i = 5;
    int j = 10;
    int k = 15;
    
    auto stack = [=]() {
        std::cout << i << "\n";
        std::cout << j << "\n";
        std::cout << k << "\n";
    };
    
    stack();
    
    return 0;
}
