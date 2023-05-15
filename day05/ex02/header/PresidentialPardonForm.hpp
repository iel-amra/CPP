/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:26:14 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/15 19:43:33 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM
# define PRESIDENTIALPARDONFORM
# include <AForm.hpp>

class PresidentialPardonForm : public AForm
{
public :
    PresidentialPardonForm();
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm & ref);
    PresidentialPardonForm &operator=(const PresidentialPardonForm & rhs);

    PresidentialPardonForm(std::string target);
    void execute(Bureaucrat const & executor) const;

private :
    const std::string _target;
};

#endif