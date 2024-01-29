/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:06:37 by iel-amra          #+#    #+#             */
/*   Updated: 2023/10/09 20:52:52 by belam            ###   ########.fr       */
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
        iterator(unsigned int i, MutantStack *stack);
        ~iterator();
        iterator(const iterator & ref);
        iterator &operator=(const iterator & rhs);
        T &operator*();
        bool operator!=(const iterator & rhs);
        bool operator==(const iterator & rhs);
        iterator &operator++(); // check syntax
        iterator operator++(int);
    private:
        unsigned int _i;
        MutantStack *_stack;
    };
    MutantStack();
    ~MutantStack();
    MutantStack(const MutantStack & ref);
    MutantStack &operator=(const MutantStack & rhs);
    iterator begin();
    iterator end();

    T &operator[](unsigned int);

};

#include <MutantStack.tpp>

#endif