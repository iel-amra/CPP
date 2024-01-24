/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:06:37 by iel-amra          #+#    #+#             */
/*   Updated: 2024/01/24 15:59:09 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

template<typename T>
class MutantStack : public std::stack<T>
{
public:

    class iterator
    {
    public:
        iterator();
        iterator(int i);
        iterator(int i, MutantStack *stack);
        ~iterator();
        iterator(const iterator & ref);
        iterator &operator=(const iterator & rhs);
        T &operator*();
        bool operator!=(const iterator & rhs);
        bool operator==(const iterator & rhs);
        iterator &operator++(int); // check syntax
        iterator operator++();
    private:
        int _i;
        MutantStack *_stack;
    }
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack & ref);
    MutantStack &operator=(const MutantStack & rhs);

    T &operator[](unsigned int);

    private :
        iterator _begin;
        iterator _end;
};

#include <MutantStack.tpp>

#endif