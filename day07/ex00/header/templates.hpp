/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 21:36:49 by belam             #+#    #+#             */
/*   Updated: 2023/05/22 22:15:40 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
