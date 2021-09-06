#ifndef BRAIN_HPP
# define BRAIN_HPP
# define SIZE_BUF 2
# include <iostream>

class Brain
{
public:
    Brain();
    Brain(const Brain& copy);
    Brain& operator = (const Brain& copy);
    const std::string   *getIdeas(void) const;
    void                setIdeas(const std::string *other);
    void                printIdeas(void) const;
    ~Brain();
private:
    std::string     ideas[SIZE_BUF];
};

#endif 