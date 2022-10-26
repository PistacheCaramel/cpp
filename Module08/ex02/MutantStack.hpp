/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:27:21 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/26 17:27:23 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>

template <typename T>
class	MutantStack: public std::stack <T>
{
	public:
					MutantStack(void): std::stack <T>(){}
					MutantStack(const  MutantStack & ref): std::stack <T>(ref){}
		virtual			~MutantStack(void){}
		MutantStack&		operator=( MutantStack const &src)
					{
						if (*this == src)
							return (*this);
						this->c = src.c;
						return (*this);
					}
		typedef typename	std::stack<T>::container_type::iterator				iterator;
		typedef typename	std::stack<T>::container_type::reverse_iterator			reverse_iterator;

		typedef typename	std::stack<T>::container_type::const_iterator			const_iterator;
		typedef typename	std::stack<T>::container_type::const_reverse_iterator		const_reverse_iterator;

		iterator			begin(void)
						{
							return (this->c.begin());
						}
		iterator			end(void)
						{
							return (this->c.end());
						}
		reverse_iterator		rbegin(void)
						{
							return (this->c.rbegin());
						}
		reverse_iterator		rend(void)
						{
							return (this->c.rend());
						}

		const_iterator			begin(void) const
						{
							return (this->c.begin());
						}
		const_iterator			end(void) const
						{
							return (this->c.end());
						}
		const_reverse_iterator		rbegin(void) const
						{
							return (this->c.rbegin());
						}
		const_reverse_iterator		rend(void) const
						{
							return (this->c.rend());
						}

};

#endif
