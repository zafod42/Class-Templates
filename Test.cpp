#pragma once

#include "Header.h"

template<class T>
Test<T>::Test(const T& d) : data(d) {};

template<class T>
T Test<T>::get()
{
    return data;
}