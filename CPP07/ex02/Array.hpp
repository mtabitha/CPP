#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    T       *ptr;
    int     size;
public:
    Array() : size(1)
    {
        ptr = new T[size];
    }

    Array(unsigned int size) : size(size)
    {
        ptr = new T[size];
    }

    Array(const Array& copy)
    {
        size = copy.getSize();
        ptr = new T[size];
        for (int i = 0; i < size; ++i)
            ptr[i] = copy[i];
    }

    Array&  operator = (const Array& copy)
    {
        delete [] ptr;
        size = copy.getSize();
        ptr = new T[size];
        for (int i = 0; i < size; ++i)
        ptr[i] = copy[i];
    }

    T&      operator [] (const int & i) const 
    {
        if (i < 0 || i >= size)
            throw Array::BadIteratorException();
        return (ptr[i]);
    }

    int     getSize(void) const
    { return (size);}

    class BadIteratorException : public std::exception
    {
    public:
        const char * what() const throw()
        { return ("Bad Iterator"); }
    };

    ~Array()
    { delete [] ptr; }
};

#endif