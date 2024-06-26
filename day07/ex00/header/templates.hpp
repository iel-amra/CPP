/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:36:49 by belam             #+#    #+#             */
/*   Updated: 2023/05/23 13:25:07 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T>
void swap(T &a, T &b)
{
    T c;
    c = a;
    a = b;
    b = c;
}

template <typename T>
T &min(T &a, T &b)
{
    if (a < b)
        return (a);
    return (b);
}

template <typename T>
T &max(T &a, T &b)
{
    if (a > b)
        return (a);
    return (b);
}

#endif
