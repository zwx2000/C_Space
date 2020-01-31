#ifndef MYUTIL_H
#define MYUTIL_H
#include <iostream>

//¿©¥Û»›¡ø
template<class T>
void ChangeSize1D(T * &a, const int oldSize, const int newSize)
{
    if(newSize < 0) throw "New length must be >= 0";

    T* temp = new T[newSize];
    int number = oldSize>newSize?newSize:oldSize;
    std::copy(a,a+number, temp);
    delete[] a;
    a = temp;
}

#endif // MYUTIL_H
