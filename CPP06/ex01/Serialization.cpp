#include "Serialization.hpp"

Data::Data(ui day, ui month, ui year) : day(day), month(month), year(year)
{}

ui Data::getDay(void) const
{
    return (day);
}

ui Data::getMonth(void) const
{
    return (month);
}

ui Data::getYear(void) const
{
    return (year);
}

std::ostream& operator << (std::ostream& cout, const Data& data)
{
    return (cout    << "day: " << data.getDay() << std::endl
                    << "month: " << data.getMonth() << std::endl
                    << "year: " << data.getYear());
}


uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}