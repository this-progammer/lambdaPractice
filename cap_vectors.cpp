#include <iostream>
#include <vector>

/*
  Programmer : Aether
*/

int main() {
   std::vector<int> n = { 1, 2, 3, 4, 5, 6 };
       auto j = [&](){
         auto t = n;
         t.push_back(10);
         t.push_back(7);
         t.push_back(32);
         //t[3] - 1;
         std::cout << t.size() << "\n";
         std::cout << t[4] << "\n";
       };
           j();
    return 0;
}
