/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:47:53 by iel-amra          #+#    #+#             */
/*   Updated: 2023/04/12 17:41:07 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
public:
    Brain();
    virtual ~Brain();
    Brain(const Brain & brain);
    void operator=(const Brain & brain);

    const std::string getIdea(const int i) const;
    void setIdea(const std::string & idea, const int i);

private:
    std::string _ideas[100];
};

#endif