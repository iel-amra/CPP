/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 17:26:14 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/17 18:18:49 by iel-amra         ###   ########.fr       */
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

private :
    void execute(Bureaucrat const & executor) const;
    const std::string _target;
};

#endif