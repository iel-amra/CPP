/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:19:18 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/29 14:57:41 by iel-amra         ###   ########.fr       */
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
    typename std::vector<T> tab(this->size() - i - 1);
    typename std::vector<T>::iterator itb = tab.begin();
    typename std::vector<T>::iterator ite = tab.end();

    for (typename std::vector<T>::iterator it = itb; it != ite; it++)
    {
        *it = this->top();
        this->pop();
    }
    T &res = this->top();
    for (typename std::vector<T>::iterator it = ite; it != itb; it--)
        this->push(it[-1]);
    return (res);
}


