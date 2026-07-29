#include <iostream>

/*
    Programmer : Aether
*/

/*rand loop inc++*/
int main() {

    auto f = [&]() {
        for( auto j = 1; j != 11; j++ ) {
                if( j > 9 ){
                    std::cout << "j equ to high" << std::endl;
                }
                std::cout << j << std::endl;
        }
    };
    
    f();
    
    return 0;
}
