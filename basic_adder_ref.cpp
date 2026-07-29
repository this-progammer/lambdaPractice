#include <iostream>

/*
    Programmer : Aether
*/

/*basic adder*/

int main() {
    
    int x = 0;
    int y = 0;
    
    auto add = [&](int x, int y){
        auto equ = x + y;
        std::cout << equ << "\n";
    };
    
    add(42, 10);

    return 0;
}
