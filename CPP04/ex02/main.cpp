#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

/*int main()
{
	std::cout << "		<---- TEST 1 ---->" << std::endl;
    Animal      *arr[10];

    for (int i = 0; i < 10; ++i)
        if ( i < 5)
            arr[i] = new Dog();
        else 
            arr[i] = new Cat();
    for (int i = 0; i < 10; ++i)
        delete arr[i];

	std::cout << "		<---- TEST 2 (Assigment) ---->" << std::endl;
    { 
        Cat cat;
        Cat copy;
        std::string ptr[10] = {"hello" , "world"};

        copy.getBrain().setIdeas(ptr);
        copy.getBrain().printIdeas();

        cat = copy;
        cat.getBrain().printIdeas();
    }
    { 
        Dog dog;
        Dog copy;
        std::string ptr[10] = {"hello" , "world"};

        copy.getBrain().setIdeas(ptr);
        copy.getBrain().printIdeas();

        dog = copy;
        dog.getBrain().printIdeas();
    }
    std::cout << "		<---- TEST 2 (Copy constructor)---->" << std::endl;
    { 
        Cat copy;
        std::string ptr[10] = {"hello" , "world"};
        copy.getBrain().setIdeas(ptr);

        Cat cat(copy);
        cat.getBrain().printIdeas();
    }
    { 
        Dog copy;
        std::string ptr[10] = {"hello" , "world"};
        copy.getBrain().setIdeas(ptr);
        
        Dog dog(copy);
        dog.getBrain().printIdeas();
    }
    while (true);
    return (0);
} */
int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
}