#include <iostream>

void printHello();
double sum(double first, double second);
void printName(std::strig name);

int main()
{
    printHello();
    double variable1 { 110.0 };
    double variable2 { 55.1 };
    std::cout << "Sim :" << sum(variable1 , variable2) << std::endl;

    printName ("Gleb");

    return EXIT_SUCCESS;

}

void printHello()
{
    if ( true )
    {
        return;
    }

    std::cout << "Hello Gleb!!!" << std::endl;

}
    
double sum(double first, double second);
{
    return first + second;
}

void printName (std::string name)
{
    std::cout << "Hello, " << name << std::endl;
}





