/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:06:37 by iel-amra          #+#    #+#             */
/*   Updated: 2024/01/29 12:25:51 by belam            ###   ########.fr       */
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
        iterator &operator++();
        iterator operator++(int);
        iterator &operator--(); 
        iterator operator--(int);
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