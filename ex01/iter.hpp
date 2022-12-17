#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template<typename T, int N, typename Func>
void iter(T (&arr)[N], Func f)
{
    for (int i = 0; i < N; i++)
        f(arr[i]);
}

#endif