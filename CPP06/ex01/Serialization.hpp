#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>

typedef unsigned int ui;

struct  Data
{
private:
    ui day;
    ui month;
    ui year;
public:
    Data(ui day, ui month, ui year);
    ui getDay(void) const;
    ui getMonth(void) const;
    ui getYear(void) const;
};

std::ostream& operator << (std::ostream&, const Data&);

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif