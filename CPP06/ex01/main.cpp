#include "Serialization.hpp"

int main(void)
{
    Data *data = new Data(13, 4, 1990);

    uintptr_t raw;
    raw = serialize(data);

    Data *d_copy = deserialize(raw);

    std::cout << "   <--- Data --->" << std::endl;
    std::cout << *data << std::endl;
    std::cout << " <--- Copy Data --->" << std::endl;
    std::cout << *d_copy << std::endl;
    delete data;
    return (0);
}