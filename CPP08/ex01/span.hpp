#ifndef SAPN_HPP
# define SAPN_HPP

# include <vector>

class Span
{
private:
    std::vector<int>    vec;
    size_t              size;
public:
    typedef std::vector<int>::iterator  it;

    Span(size_t size);
    Span(const Span& other);
    Span&   operator = (const Span& other);
    const size_t&       getSize(void) const;
    const std::vector<int>&  getVector(void) const;

    void    addNumber(int);
    void    addNumber(it begin, it end);
    size_t  shortestSpan(void);
    size_t  longestSpan(void);

    class OutOfRangeException : public std::exception
    {
    public:
        const char * what() const throw();
    };
    
    class FewNumbersException : public std::exception
    {
    public:
        const char * what() const throw();
    };
};

#endif