/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:03:43 by ybendavi          #+#    #+#             */
/*   Updated: 2022/10/21 01:30:35 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
	private:
			std::string	_ideas[100];
	public:
					Brain(void);
					Brain(const  Brain&);
					~Brain(void);
			Brain&		operator=( Brain const &src);
			
			std::string	getIdeas(int index) const;
			void		setIdeas(int index, std::string idea);
};

std::ostream &	operator<<(std::ostream & o, Brain const & i);
#endif

