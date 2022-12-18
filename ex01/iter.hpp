#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T>
void iter(T *arr, unsigned int size, void(*f)(T &arg))
{
    for (unsigned int i = 0; i < size; i++)
        f(*arr++);
}

template<typename T>
void fuc3(T &c)
{
    int i;

    i = -1;
    while (c[++i]) {
        c[i]-=32;
    }
}
#endif