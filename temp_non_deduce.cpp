#include <iostream>
#include <concepts>
#include <vector>

/*
    Programmer : Aether
*/

/*templated lambdas*/

int main() {

// just returns num, no deducable paramets, must be called explicitly
    auto f = []<typename T>()->T{
        return {36};
    };
    
    /*explicit call*/
    int j = f.operator ()<int>();
    
    std::cout << j << "\n";
    
    return 0;
}
