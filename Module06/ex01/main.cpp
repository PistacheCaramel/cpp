/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:55:42 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/24 12:55:43 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data		data;
	uintptr_t	serialized;
	Data		*deserialized;

	data.str = "a string";
	data.str2 = "another string";
	data.i = 42;
	data.f = 42.42;
	data.d = 42.4242424242;

	std::cout << "In my struct data i have 2 string, an int, a float and a double:" << std::endl
			<< data.str << std::endl
			<< data.str2 << std::endl
			<< data.i << std::endl
			<< data.f << std::endl
			<< data.d << std::endl;
	serialized = serialize(&data);
	deserialized = deserialize(serialized);
	std::cout << "Now, in my struct data i have 2 string, an int, a float and a double:" << std::endl
			<< deserialized->str << std::endl
			<< deserialized->str2 << std::endl
			<< deserialized->i << std::endl
			<< deserialized->f << std::endl
			<< deserialized->d << std::endl;


}
