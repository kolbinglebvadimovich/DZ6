#include <iostream>

int main(int argc, char** argv)
{
    int a = 1, b = 5;

    int s = sum( a , b );
    int dif = diff( a , b );
    int mult = multiplication( a , b );
    double div = division( a , b );


    std::cout << a << " + " << b << " = " << s << std::endl;
    std::cout << a << " - " << b << " = " << dif << std::endl;
    std::cout << a << " * " << b << " = " << mult << std::endl;
    std::cout << a << " / " << b << " = " << div << std::endl;


    return 0;
}

int main(int argc, char** argv)
{

    int value = 5, power = 2, result = 1; // Значение раз.
    value = 3, power = 2, result = 1; // Значение два.
    value = 4, power = 3, result = 1; // Значение три.
    for(int i = 0, i < power; i++)
    {
        result *= value;
    }
    std::cout << value << " в степени " << power << " = " << result << std::endl; // Вывведение в консоль.


    return 0;
}
int main(int argc, char** argv)
{
    std::cout << "Введитe число" << std::endl;
    for(int a = 0, b = 1, e = 2, r = 3, g = 5.)
    std::cout << "Введитe число" << std::endl;
    std::cin << variable << std::endl;
    std::cout << variable << std::endl;
}







