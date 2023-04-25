/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:47:54 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/25 10:14:34 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>

using   std::cout;
using   std::endl;

Brain::Brain()
{
    cout << "New brain created" << endl;
}

Brain::~Brain()
{
    cout << "A brain got crushed" << endl;
}

Brain::Brain(const Brain & brain) : _ideas(brain._ideas)
{
    cout << "Careful when copying brain !" << endl;
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
    std::cerr << "Bad indice in Brain" << endl;
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