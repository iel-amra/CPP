/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:09:29 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/17 18:35:03 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <ShrubberyCreationForm.hpp>
# include <RobotomyRequestForm.hpp>
# include <PresidentialPardonForm.hpp>

class Intern
{
public:
    Intern();
    Intern(const Intern & cpy);
    ~Intern();
    Intern &operator=(const Intern & rhs);
    
    AForm *getPardonForm(const std::string & target) const;
    AForm *getShrubberyForm(const std::string & target) const;
    AForm *getRobotForm(const std::string & target) const;

private:
    AForm * (Intern::*_creator[3])(const std::string &);
};

#endif