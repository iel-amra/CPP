/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:25:48 by iel-amra          #+#    #+#             */
/*   Updated: 2023/05/24 10:06:49 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array() : _array(NULL), _nb(0)
{
}

template<typename T>
Array<T>::Array(Array const & ref) : _array(NULL), _nb(0)
{
    *this = ref;
}

template<typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const & rhs)
{
    if  (_array)
        delete _array;
    _nb = 0;
    _array = NULL;
    _array = new T[rhs._nb];
    _nb = rhs._nb;
    for (unsigned int i = 0; i < _nb;  i++)
        (*this)[i] = rhs[i];
    return (*this);
}

template<typename T>
Array<T>::Array(int nb) : _array(new T[nb]), _nb(nb)
{
}

template<typename T>
T &Array<T>::operator[](unsigned int nb) const
{
    if (nb >= _nb)
        throw std::exception();
    return (_array[nb]);
}

template<typename T>
unsigned int Array<T>::size() const
{
    return (_nb);
}
