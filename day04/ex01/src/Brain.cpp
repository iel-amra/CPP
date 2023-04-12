/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:47:54 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 17:47:15 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

Brain::Brain()
{
}

Brain::~Brain()
{
}

Brain::Brain(const Brain & brain) : _ideas(brain._ideas)
{
}

void Brain::operator=(const Brain & brain)
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = brain._ideas[i];
}

const std::string Brain::getIdea(const int i) const
{
    if (i >= 0 && i <= 100)
        return (_ideas[i]);
    std::cerr << "Bad indice in Brain" << std::endl;
    return("");
}

void Brain::setIdea(const std::string & idea, const int i)
{
    if (i >= 0 && i <= 100)
    {
        _ideas[i] = idea;
        return;
    }
    std::cerr << "Bad indice in Brain" << std::endl;
}