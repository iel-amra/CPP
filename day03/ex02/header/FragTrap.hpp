/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 19:14:39 by belam             #+#    #+#             */
/*   Updated: 2023/04/10 22:14:56 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP
# define FRAG_TRAP
# include <ClapTrap.hpp>

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(const FragTrap &a);
    void operator=(const FragTrap &a);

    FragTrap(const std::string &name);
    void highFivesGuys(void);
 
private:
};

#endif