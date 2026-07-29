#include <iostream>

/*
    Programmer : Aether
*/

/*templates added with multi*/

int main() {
    auto multi_func = []<typename T>(T a, T b) {
        return a*b;
    };
    
    auto n = multi_func(10, 14);
    std::cout << n << "\n";
    
    return 0;
}
