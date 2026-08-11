#include <iostream>
#include <array>

/*Programmer : Aether*/

void Draw_Grid(){
    int i = 0; // input
    int grids[64]; // columns and rows, max is 64
    std::cin >> grids[i];
    //count checking
    if( grids[i] > 64 ){
        std::cout << "Grid Columns And Rows Count To High...\n";
    }
    // columns and rows
    char col[2] = "_";
    char row[2] = "|";
    //store in an array
    std::array<char*, 4> grid_elements = { col, row }; //useless, didn't end up using
    for( auto j = 0; j < grids[i]; j++ ){
         auto drawGrid = [&](){
            char map[64] = {
                col[i], row[i], col[i],
                col[i], row[i], col[i],
                col[i], row[i], col[i],
                col[i], row[i], col[i],
                col[i], row[i], col[i],
                col[i], row[i], col[i],
                col[i], row[i], col[i],
                col[i], row[i], col[i],
                col[i], row[i], col[i],
                col[i], row[i], col[i],
            };
            std::cout << map << std::endl;
         };
         drawGrid();
    }
}

int main() {
    Draw_Grid();
    return 0;
}

//output : *i entered 10 btw
/*

_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_
_|__|__|__|__|__|__|__|__|__|_


=== Code Execution Successful ===
*/
