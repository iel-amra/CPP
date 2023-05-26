/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:19:18 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/26 16:46:15 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
    
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack & ref) : std::stack<T>(ref)
{
}

template<typename T>
MutantStack<T> MutantStack<T>::operator=(const MutantStack<T> & rhs)
{
    *static_cast<std::stack<T>*>(this) = rhs;
    return (*this);
}

template<typename T>
T &MutantStack<T>::operator[](unsigned int i)
{
    typename std::vector<T>::iterator itb = this->begin();
    typename std::vector<T>::iterator ite = this->end();
    typename std::vector<T> tab(this->size() - i - 1);

    for (typename std::vector<T>::iterator it = itb; it != ite; it++)
    {
        *it = this->top();
        this->pop();
    }
    T &res = this->top();
    for (typename std::vector<T>::iterator it = ite - 1; it != itb; it--)
        this->push(*it);
    this->push(*it);
    return (res);
}


