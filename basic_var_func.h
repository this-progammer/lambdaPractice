#include <iostream>

/*programmer : Aether*/

int main() {
    
    int x = 42;
    
    auto func = [&]() {
        x += 52;
        std::cout << x << "\n";
    };
    
    /*func caller*/
    func();
    
    return 0;
}
