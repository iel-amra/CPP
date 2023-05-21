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
    AForm *makeForm(const std::string & type, const std::string & target) const;

private:
    AForm *_getPardonForm(const std::string & target) const;
    AForm *_getShrubberyForm(const std::string & target) const;
    AForm *_getRobotForm(const std::string & target) const;
    void _init();
    AForm * (Intern::*_creator[3])(const std::string &) const;
    std::string _map[3];
};

#endif