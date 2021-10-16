/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:55:05 by ldavids           #+#    #+#             */
/*   Updated: 2021/09/28 15:26:25 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 10

int main(int, char**)
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
	///////CHECK THE DIFF WITH ARRAY OF INT/\\\\\\\\\\\\\\\\\/
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
	///////CHECK THE DEEP COPY/\\\\\\\\\\\\\\\\\\\\\\\\\\\\\/
    Array<int> tmp = numbers;
    Array<int> test(tmp);
	std::cout << "-----PROOF OF DEEP COPY-----" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
    {
		if (test[i] != numbers[i])
   		{
            std::cout << "Not the same copy" << std::endl;
    	}
	}
	for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        test[i] = value;
    }
	std::cout << "Original               Deep copied + rand" << std::endl;
	for (int i = 0; i < MAX_VAL; i++)
    {
        if (test[i] != numbers[i])
        {
            std::cout << numbers[i] << "              " << test[i] << std::endl;
        }
    }
	std::cout << std::endl;
	std::cout << "Randomized Original    Deep copied" << std::endl;
	  for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
	for (int i = 0; i < MAX_VAL; i++)
    {
        if (test[i] != numbers[i])
        {
            std::cout << numbers[i] << "              " << test[i] << std::endl;
        }
    }
	std::cout << std::endl;
	///////OUT OF BOUNDS CHECK/\\\\\\\\\\\\\\\\\\\\\\\\\\\\/
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "1\n";
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << "2\n";
    }
    delete [] mirror;//
    return 0;
}



/*#include <iostream>
#include <cstdlib>

#define xassert(exp) \
	{ \
		if ((exp)) \
			std::cout << "\e[92mPASSED\e[39m: " << #exp << std::endl; \
		else { \
			std::cout << "\e[91mFAILED\e[39m: " << #exp << "    (line: " << __LINE__ << ")" << std::endl; \
			exit(1); \
		} \
	}

#include "Array.hpp"

int
main(void)
{
	std::string words[] = {
		"Hello", "World", "From", "the", "array", "template", "with", "string", "as", "his", "type"
	};

	Array<std::string> empty;
	xassert(empty.size() == 0);

	try {
		empty[1] = "Hello";

		xassert(!"Should have thrown a IndexOutOfBoundsException");
	} catch (std::exception &e) {
		xassert(std::string(e.what()) == std::string("index: 1, size: 0"));
	}

	Array<std::string> strings(10);
	xassert(strings.size() == 10);

	unsigned int index;
	for (index = 0; index < 10; ++index) {
		strings[index] = words[index];

		xassert(strings[index] == words[index]);
	}

	try {
		strings[index] = words[index];

		xassert(!"Should have thrown a IndexOutOfBoundsException");
	} catch (std::exception &e) {
		xassert(std::string(e.what()) == std::string("index: 10, size: 10"));
	}

	try {
		strings[50000] = "";

		xassert(!"Should have thrown a IndexOutOfBoundsException");
	} catch (std::exception &e) {
		xassert(std::string(e.what()) == std::string("index: 50000, size: 10"));
	}

	try {
		strings[-1] = "";

		xassert(!"Should have thrown a IndexOutOfBoundsException");
	} catch (std::exception &e) {
		xassert(std::string(e.what()) == std::string("index: -1, size: 10"));
	}

	for (unsigned int index = 0; index < strings.size(); ++index)
	{
		std::cout << "[" << index << "] = " << strings[index] << std::endl;
	}

	Array<int> ints(20);
	xassert(ints.size() == 20);

	for (index = 0; index < 20; ++index) {
		ints[index] = index;

		xassert(ints[index] == index);
	}

	try {
		ints[index] = index;

		xassert(!"Should have thrown a IndexOutOfBoundsException");
	} catch (std::exception &e) {
		xassert(std::string(e.what()) == std::string("index: 20, size: 20"));
	}

	for (unsigned int index = 0; index < ints.size(); ++index)
	{
		std::cout << "[" << index << "] = " << ints[index] << std::endl;
	}

	Array<std::string> copy;
	xassert((copy = strings).size() == strings.size());

	xassert(copy[0] == strings[0]);
	xassert(!(copy[0] = "modified").empty() && copy[0] != strings[0]);

	Array<std::string> copyByConstructor(strings);
	xassert(copyByConstructor.size() == strings.size());
}
*/