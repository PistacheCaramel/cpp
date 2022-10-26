/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:27:11 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/26 17:27:12 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>

void	ft_deque(void)
{
	std::cout << "deque test \n" << std::endl;
	std::deque<int> keuhu;

	keuhu.push_back(5);
	keuhu.push_back(17);
	std::cout << keuhu.back() << std::endl;
	keuhu.pop_back();
	std::cout << keuhu.size() << std::endl;
	keuhu.push_back(3);
	keuhu.push_back(5);
	keuhu.push_back(737);
	//[...]
	keuhu.push_back(0);
	std::deque<int>::iterator it = keuhu.begin();
	std::deque<int>::iterator ite = keuhu.end();
	++it;
	--it;
	std::cout << "Print = " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	ft_list(void)
{
	std::cout << "list test \n" << std::endl;
	std::list<int>	listy;

	listy.push_back(5);
	listy.push_back(17);
	std::cout << listy.back() << std::endl;
	listy.pop_back();
	std::cout << listy.size() << std::endl;
	listy.push_back(3);
	listy.push_back(5);
	listy.push_back(737);
	//[...]
	listy.push_back(0);
	std::list<int>::iterator it = listy.begin();
	std::list<int>::iterator ite = listy.end();
	++it;
	--it;
	std::cout << "Print = " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	ft_vector(void)
{
	std::cout << "vector test \n" << std::endl;
	std::vector<int>	vectore;

	vectore.push_back(5);
	vectore.push_back(17);
	std::cout << vectore.back() << std::endl;
	vectore.pop_back();
	std::cout << vectore.size() << std::endl;
	vectore.push_back(3);
	vectore.push_back(5);
	vectore.push_back(737);
	//[...]
	vectore.push_back(0);
	std::vector<int>::iterator it = vectore.begin();
	std::vector<int>::iterator ite = vectore.end();
	std::cout << "Print = " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

void	ft_const_test(void)
{
	MutantStack<int> mstack;

	std::cout << "const test \n" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::const_iterator it = mstack.begin();
	MutantStack<int>::const_iterator ite = mstack.end();
	std::cout << "Print = " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "const vector test \n" << std::endl;
	std::vector<int>	vectore;

	vectore.push_back(5);
	vectore.push_back(17);
	std::cout << vectore.back() << std::endl;
	vectore.pop_back();
	std::cout << vectore.size() << std::endl;
	vectore.push_back(3);
	vectore.push_back(5);
	vectore.push_back(737);
	vectore.push_back(0);
	std::vector<int>::const_iterator itt = vectore.begin();
	std::vector<int>::const_iterator itte = vectore.end();
	std::cout << "Print = " << std::endl;
	while (itt != itte)
	{
		std::cout << *itt << std::endl;
		++itt;
	}
	std::vector<int> s(vectore);
}

void	ft_rev_const_test(void)
{
	MutantStack<int> mstack;

	std::cout << "rev const test \n" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::const_reverse_iterator it = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator ite = mstack.rend();
	std::cout << "Print = " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "rev const vector test \n" << std::endl;
	std::vector<int>	vectore;

	vectore.push_back(5);
	vectore.push_back(17);
	std::cout << vectore.back() << std::endl;
	vectore.pop_back();
	std::cout << vectore.size() << std::endl;
	vectore.push_back(3);
	vectore.push_back(5);
	vectore.push_back(737);
	vectore.push_back(0);
	std::vector<int>::const_reverse_iterator itt = vectore.rbegin();
	std::vector<int>::const_reverse_iterator itte = vectore.rend();
	std::cout << "Print = " << std::endl;
	while (itt != itte)
	{
		std::cout << *itt << std::endl;
		++itt;
	}
	std::vector<int> s(vectore);
}

void	ft_rev_test(void)
{
	MutantStack<int> mstack;

	std::cout << "rev test \n" << std::endl;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::reverse_iterator it = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite = mstack.rend();
	std::cout << "Print = " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "rev vector test \n" << std::endl;
	std::vector<int>	vectore;

	vectore.push_back(5);
	vectore.push_back(17);
	std::cout << vectore.back() << std::endl;
	vectore.pop_back();
	std::cout << vectore.size() << std::endl;
	vectore.push_back(3);
	vectore.push_back(5);
	vectore.push_back(737);
	vectore.push_back(0);
	std::vector<int>::reverse_iterator itt = vectore.rbegin();
	std::vector<int>::reverse_iterator itte = vectore.rend();
	std::cout << "Print = " << std::endl;
	while (itt != itte)
	{
		std::cout << *itt << std::endl;
		++itt;
	}
	std::vector<int> s(vectore);
}

void	ft_constructors_test(void)
{
	std::cout << "constructors tests" << std::endl;
	MutantStack<std::string> mstack;

	for (int i = 0; i < 10; i++)
		mstack.push("Hello World");

	MutantStack<std::string> test(mstack);
	MutantStack<std::string>::iterator it = test.begin();
	MutantStack<std::string>::reverse_iterator ite = test.rbegin();
	std::cout << *it << " , "  << *ite << std::endl;

	MutantStack<std::string> test2;
	test2 = test;
	std::cout << *(test2.begin()) << " , " << *(test2.rbegin()) << std::endl;
}

void	ft_MoaRtest(void)
{
	std::cout << "MoaRtest" << std::endl;
	MutantStack<int> mstack;
	
	srand(time(NULL));	
	for (int i = 0; i < 100; i++)
		mstack.push(rand()%1000);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "size = " <<  mstack.size() << std::endl;
	mstack.pop();
	mstack.pop();
	std::cout << "size after pop = " <<  mstack.size() << std::endl;
	std::cout << "top = " <<  mstack.top() << std::endl;
}

int		main(void)
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
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Print = " << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	ft_vector();
	std::cout << std::endl;
	ft_list();
	std::cout << std::endl;
	ft_deque();
	std::cout << std::endl;
	ft_const_test();
	std::cout << std::endl;
	ft_constructors_test();
	std::cout << std::endl;
	ft_rev_test();
	std::cout << std::endl;
	ft_rev_const_test();
	std::cout << std::endl;
	ft_MoaRtest();
	return 0;
}
