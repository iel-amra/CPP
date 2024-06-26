/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:26:14 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 19:56:08 by belam            ###   ########.fr       */
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
    void execute(Bureaucrat const & executor) const;

private :
    const std::string _target;
};

#endif