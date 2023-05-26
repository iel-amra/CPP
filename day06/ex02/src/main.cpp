/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:25:13 by belam             #+#    #+#             */
/*   Updated: 2023/05/22 15:59:00 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Base.hpp>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

Base * generate(void)
{
    double nb = static_cast<double>(std::rand()) / RAND_MAX;
    if (nb < 1.0/3.0)
        return (new A);
    else if (nb < 2.0/3.0)
        return (new B);
    else
        return (new C);

}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        cout << "Type A" << endl;
    else if (dynamic_cast<B*>(p))
        cout << "Type B" << endl;
    else
        cout << "Type C" << endl;
}

void identify(Base& p)
{
    try
    {
        dynamic_cast<A&>(p);
        cout << "Type A" << endl;
        return;
    }
    catch (std::exception &)
    {}
    try
    {
        dynamic_cast<B&>(p);
        cout << "Type B" << endl;
        return;
    }
    catch (std::exception &)
    {}
    cout << "Type C" << endl;
}

int main()
{
    Base *elem;
    for (int i = 0; i < 20; i++)
    {
        elem = generate();
        identify(elem);
        identify(*elem);
        cout << endl;
        delete elem;   
    }
    return (0);
}