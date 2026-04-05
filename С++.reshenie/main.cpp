#include <iostream>

int main(int argc, char** argv)
{
    int a = 5, b = 10;

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


void calculateAndPrintPower(int value, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++) 
    {
        result *= value;
    }
    std::cout << value << " в степени " << power << " = " << result << std::endl;
}
{
    calculateAndPrintPower(5, 2);
    calculateAndPrintPower(3, 3);
    calculateAndPrintPower(4, 4);

    return 0;
}


{
    unsigned long long fibonacci(unsigned n)
    
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
{


    std::cout << "Введите количество чисел последовательности Фибоначчи: "; << std::endl;
    std::cin >> count >>
    {
    std::cout << "Последовательность Фибоначчи (" << count << " чисел):" << std::endl;

        std::cout << fibonacci(i) << " " << std::endl;
    }

    return 0;
}
