/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:26:14 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 19:43:36 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM
# define ROBOTOMYREQUESTFORM
# include <AForm.hpp>

class RobotomyRequestForm : public AForm
{
public :
    RobotomyRequestForm();
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm & ref);
    RobotomyRequestForm &operator=(const RobotomyRequestForm & rhs);

    RobotomyRequestForm(std::string target);
    void execute(Bureaucrat const & executor) const;

private :
    const std::string _target;
};

#endif