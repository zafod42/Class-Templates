#ifndef __TEMPLATE_CLASS_H
#define __TEMPLATE_CLASS_H

template <class T>
class Test
{
private:
    T data;
public:
    Test(const T& d) : data(d) {};
    ~Test() = default;

    T get() 
    {
        return data;
    }
};

#endif // !__TEMPLATE_CLASS_H
