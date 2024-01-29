/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 16:19:18 by iel-amra          #+#    #+#             */
/*   Updated: 2024/01/29 09:30:08 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
MutantStack<T>::iterator::iterator()
{
    _i = 0;
}

template<typename T>
MutantStack<T>::iterator::iterator(unsigned int i, MutantStack<T> *stack) : _i(i), _stack(stack)
{ 
}

template<typename T>
MutantStack<T>::iterator::~iterator()
{
}


template<typename T>
MutantStack<T>::iterator::iterator(const iterator & ref)
{
    *this = ref;
}

template<typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator=(const iterator & rhs)
{
    _i = rhs._i;
    _stack = rhs._stack;
    return (*this);
}

template<typename T>
T &MutantStack<T>::iterator::operator*()
{
    return (*_stack)[_i];
}

template<typename T>
bool MutantStack<T>::iterator::operator!=(const iterator & rhs)
{
    return (!(_i == rhs._i));
}

template<typename T>
bool MutantStack<T>::iterator::operator==(const iterator & rhs)
{
    return (_stack == rhs._stack && _i == rhs._i);
}

template<typename T> 
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator++()
{
    _i++;
    return (*this);
}

template<typename T> 
typename MutantStack<T>::iterator MutantStack<T>::iterator::operator++(int)
{
    _i++;
    return (iterator(_i - 1, _stack));
}

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
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> & rhs)
{
    *static_cast<std::stack<T>*>(this) = rhs;
    return (*this);
}

template<typename T> 
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (iterator(0, this));
}

template<typename T> 
typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return (iterator(this->size(), this));
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


