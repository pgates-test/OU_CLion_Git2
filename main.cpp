#include <iostream>

float Policz (int a, int b)
{
    return a/(float)b;
}
int main()
{
    std::cout << "Hello, World!" << std::endl;
    std::cout <<"W pierwszym branchu; 2+3=" << Policz(2,3) << std::endl;
    return 0;
}
