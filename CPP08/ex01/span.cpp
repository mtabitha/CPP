#include "span.hpp"

Span::Span(size_t size) : size(size)
{}

Span::Span(const Span& other)
{
    *this = other;
}

Span& Span::operator = (const Span& other)
{
    size = other.getSize();
    vec = other.getVector();
    return (*this);
}

const size_t&           Span::getSize(void) const
{
    return (size);
}

const std::vector<int>& Span::getVector(void) const
{
    return (vec);
}

void    Span::addNumber(int nbr)
{
    if (vec.size() + 1 > size)
        throw OutOfRangeException();
    vec.push_back(nbr);
}

void    Span::addNumber(it begin, it end)
{
    if (vec.size() + std::distance(begin, end) > size)
        throw OutOfRangeException();
    vec.insert(vec.end(), begin, end);
}

size_t  Span::shortestSpan(void)
{
    if (vec.size() < 2)
        throw FewNumbersException();

    size_t  span = UINT_MAX;

    std::sort(vec.begin(), vec.end());
    for(int i = 0; i + 1 < vec.size(); ++i)
    {
        size_t nbr = vec[i + 1] - vec[i];
        nbr < span ? span = nbr : 0;
    }
    return (span);
}

size_t  Span::longestSpan(void)
{
    if (vec.size() < 2)
        throw FewNumbersException();

    it max = std::max_element(vec.begin(), vec.end());
    it min = std::min_element(vec.begin(), vec.end());
    return (*max - *min);
}

const char * Span::OutOfRangeException::what() const throw()
{
    return ("Out of Range");
}

const char * Span::FewNumbersException::what() const throw()
{
    return ("Few Numbers");
}

