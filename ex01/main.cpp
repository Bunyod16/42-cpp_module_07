#include "iter.hpp"
#include <iostream>
#include <string>

void fuc(char &c)
{
    c -= 32;
}

int main(void)
{
    std::string str = "yoyoyoyo";
    char arr[str.size() + 1];

    str.copy(arr, str.size());
    arr[str.size()] = '\0';
    ::iter(arr, 8, fuc);
    std::cout << arr << std::endl;
}