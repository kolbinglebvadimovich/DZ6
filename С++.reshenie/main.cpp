#include <iostream>

int main()

{
    int veriable1{ 200 };
    int veriable2{ 500 };
    
    std::cout << std::noboolalpha;
    std::cout << veriable1 == veriable2 << std::endl; //Решение примера.
    std::cout << veriable1 += veriable2 << std::endl; //Решение примера.
    std::cout << veriable1 > veriable2 << std::endl; //Решение примера.
    std::cout << veriable1 < veriable2 << std::endl; //Решение примера.
    std::cout << veriable1 != veriable2 << std::endl; //Решение примера.
    std::cout << veriable1 >= veriable2 << std::endl; //Решение примера.
    std::cout << veriable1 <= veriable2 << std::endl; //Решение примера.

    return EXIT_SUCCESS;

}



