/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:06:37 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/26 16:28:15 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template<typename T>
class MutantStack : public std::stack<T>
{
public:
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack & ref);
    MutantStack operator=(const MutantStack & rhs);

    T &operator[](unsigned int);
};

#include <MutantStack.tpp>

#endif