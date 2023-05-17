/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:26:14 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/17 14:16:34 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM
# include <AForm.hpp>
# include <cstdlib>


class RobotomyRequestForm : public AForm
{
public :
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm & ref);
    RobotomyRequestForm &operator=(const RobotomyRequestForm & rhs);

    RobotomyRequestForm(std::string target);

private :
    void execute(Bureaucrat const & executor) const;
    const std::string _target;
};

#endif