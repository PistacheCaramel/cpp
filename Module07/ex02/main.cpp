#include "Array.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#define MAX_VAL 750


int	do_mandatory(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
    return 0;
}
int	main(void)
{
	std::cout << "Doing mandatory tests given with subject" << std::endl;
	int i = do_mandatory();
	if (i)
		return (i);

	std::cout << std::endl << std::endl << "Doing some more tests" << std::endl;

	Array	<std::string>array1;
	Array	<std::string>array2(20);

	try
	{
		for (int i = 0; i < 20; i++)
			array1[i] = "Coucou!";	
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}
	try
	{
		array1 = array2;
		for (int i = 0; i < 20; i++)
			array2[i] = "Coucou!";
		for (int i = 0; i < 20; i++)
			std::cout << array2[i] << std::endl;
		for (int i = 0; i < 20; i++)
			std::cout << array1[i] << std::endl;
		Array<std::string> vals(4000);
		vals = array2;
		for (int i = 0; i < 4000; i++)
			std::cout << array2[i] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;	
	}

    Array   <std::string>arrayempty;
    array2 = arrayempty;
    Array   <std::string>arrayempty2;
    arrayempty = arrayempty2;

	std::cout << "fin tests" << std::endl;
}
