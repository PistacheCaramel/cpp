/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:26:02 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/26 17:26:04 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

class	DontFindException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Don't find this.");
			}
	};

template < typename T >
typename T::iterator	easyfind(T & container, int to_find)
{
	typename T:: iterator	it;

	it = find(container.begin(), container.end(), to_find);
	if (it == container.end())
		throw DontFindException();
	else
		return (it);

}

#endif
