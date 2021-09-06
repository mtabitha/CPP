#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <random>
#include <iostream>

Base*   A_Create(void)
{ return (new A); }

Base*   B_Create(void)
{ return (new B); }

Base*   C_Create(void)
{ return (new C); }

void identify(Base* p)
{
    dynamic_cast<A*>(p) != nullptr ? std::cout << "A" <<std::endl : 0;
    dynamic_cast<B*>(p) != nullptr ? std::cout << "B" <<std::endl : 0;
    dynamic_cast<C*>(p) != nullptr ? std::cout << "C" <<std::endl : 0;
}

void identify(Base& p)
{
    try
    { (void)dynamic_cast<A&>(p); std::cout << "A" <<std::endl; }
    catch(const std::exception& e){}
    try
    { (void)dynamic_cast<B&>(p); std::cout << "B" <<std::endl; }
    catch(const std::exception& e){}
    try
    { (void)dynamic_cast<C&>(p); std::cout << "C" <<std::endl; }
    catch(const std::exception& e){}
}

Base*   generate(void)
{
    typedef  Base* (*BaseFactories)();

    BaseFactories massCreate[3] = {&A_Create, &B_Create, &C_Create};

    std::random_device rd;
    std::mt19937 generator(rd());
    std::uniform_int_distribution<> distribution(0, 2);

    int nbr = distribution(generator);
    return (massCreate[nbr]());
}

int main(void)
{
    Base*   base = generate();
    identify(base);
    identify(*base);
    return (0);
}