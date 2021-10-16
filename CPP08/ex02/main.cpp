/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldavids <ldavids@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:24:30 by ldavids           #+#    #+#             */
/*   Updated: 2021/10/02 22:52:40 by ldavids          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <string>
#include <iostream>
#include <list>


//Main officiel
/*int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}*/

int main()
{
	std::cout << "MUTANTSTACK" << std::endl;

    MutantStack<int>    mstack;

    mstack.push(5);
    mstack.push(99);

    std::cout << "TOP : " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "SIZE : " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);

    //[...]
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while(it != ite){
        std::cout << *it << std::endl;
        ++it;
    }
	std::cout << std::endl;
	std::cout << "COPY" << std::endl;
    MutantStack<int>  s(mstack);
	it = s.begin();
    ite = s.end();

    ++it;
    --it;

    while(it != ite){
        std::cout << *it << std::endl;
        ++it;
    }

    std::cout << "\nLIST" << std::endl;


    std::list<int>    list;

    list.push_back(5);
    list.push_back(99);

    std::cout << "TOP = " << list.back() << std::endl;

    list.pop_back();

    std::cout << "Size = " << list.size() << std::endl;

    list.push_back(3);
    list.push_back(5);
    list.push_back(737);

    //[...]
    list.push_back(0);

    std::list<int>::iterator itlist = list.begin();
    std::list<int>::iterator itliste = list.end();

    ++itlist;
    --itlist;

    while(itlist != itliste){
        std::cout << *itlist << std::endl;
        ++itlist;
	}
}
