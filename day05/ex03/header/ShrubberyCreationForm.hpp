/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:26:14 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/17 18:19:08 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFROM
# define SHRUBBERYCREATIONFROM
# include <fstream>
# include <AForm.hpp>

class ShrubberyCreationForm : public AForm
{
public :
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(const ShrubberyCreationForm & ref);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm & rhs);

    ShrubberyCreationForm(std::string target);


private :
    const std::string _target;
    void execute(Bureaucrat const & executor) const;
};

#endif