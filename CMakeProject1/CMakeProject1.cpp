// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"
#include <vector>

std::vector<int> vec;

void func(int i)
{
    std::cout << i << std::endl;  // CONDITIONAL BREAKPOINT
    if (i == 20)
    {
        std::cout << "foo" << std::endl;  // BREAKPOINT
        std::cout << "bar" << std::endl;
        std::cout << "baz" << std::endl;
        std::cout << "qux" << std::endl;
        std::cout << "zap" << std::endl;
    }
    if (i == 90)
    {
        throw std::runtime_error("ninety");
    }
    vec.push_back(i);
}

int main(int argc, char** argv)
{
    try
    {
        for (int i = 0; i < 100; i++)
        {
            func(i);
        }
    }
    catch (const std::exception &)
    {
    }
}
