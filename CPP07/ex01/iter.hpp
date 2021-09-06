#ifndef ITER_HPP
# define ITER_HPP

template<typename T>
void	inc(T& t)
{
	++t;
}

template<typename T>
void	iter(T* ptr, int size, void(*f)(T& t))
{
	for(int i = 0; i < size; ++i)
		f(ptr[i]);	
}

#endif