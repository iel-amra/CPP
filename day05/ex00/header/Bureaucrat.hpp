/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:39:51 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/03 16:50:46 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>

class Bureaucrat
{
public:

    class GradeTooHighException : std::exception
    {
    public :
        std::string what();
    }

    class GradeTooLowException : std::exception
    {
    public :
        std::string what();
    }

    Bureaucrat();
    Bureaucrat(const std::string & name);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat & ref);
    Bureaucrat &operator=(const Bureaucrat & rhs);
    std::string getName() const;
    unsigned char getGrade() const;
    void promote();
    void demote();

private:
    const std::string   _name;
    unsigned char       _grade;
};

ostream & operator<<(ostream & os, const Bureaucrat & bu);

#endif