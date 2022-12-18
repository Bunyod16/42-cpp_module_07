#include "iter.hpp"
#include <iostream>
#include <string>

void fuc(char &c)
{
    c -= 32;
}

void fuc2(char &c)
{
    c -= 31;
}

int main(void)
{
    // char *arr;

    // arr = strdup("yoyoyoyo");
    // ::iter(arr, (unsigned int)8, fuc);
    // std::cout << arr << std::endl;
    // free(arr);

    // arr = strdup("yoyoyoyo");
    // ::iter(arr, (unsigned int)8, fuc2);
    // std::cout << arr << std::endl;
    // free(arr);

    char **big_arr;
    big_arr = (char **)malloc(sizeof(char *) * 4);
    big_arr[0] = strdup("yoyoyoyo");
    big_arr[1] = strdup("popopopo");
    big_arr[2] = strdup("gogogogo");
    big_arr[3] = NULL;
    std::cout << big_arr[0] << std::endl;
    std::cout << big_arr[1] << std::endl;
    std::cout << big_arr[2] << std::endl;

    ::iter(big_arr, (unsigned int)3, fuc3);
    std::cout << big_arr[0] << std::endl;
    std::cout << big_arr[1] << std::endl;
    std::cout << big_arr[2] << std::endl;
}