/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: belam <belam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 10:24:57 by belam             #+#    #+#             */
/*   Updated: 2023/05/22 10:24:58 by belam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>
# include <cctype>
# include <cerrno>
# include <climits>
# include <cfloat>
# include <cstdlib>
# include <iostream>
# include <iomanip>

# define NOT_DISPLAYABLE 1<<0
# define OVERFLOW 1<<1
# define IMPOSSIBLE 1<<2

class ScalarConverter
{
public:
    static int convert(const std::string & str);
    static void display();

private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter & ref);
    ~ScalarConverter();
    ScalarConverter operator=(const ScalarConverter & rhs);

    static bool _displayable(char flag);
    static void _convertChar(const std::string & str);
    static void _convertInt(const std::string & str);
    static void _convertFloat(const std::string & str);
    static void _convertDouble(const std::string & str);
    static bool _isChar(const std::string & str);
    static bool _isInt(const std::string & str);
    static bool _isFloat(const std::string & str);
    static bool _isDouble(const std::string & str);

    static char     _char;
    static int      _int;
    static float    _float;
    static double   _double;
    static char     _flags[4];
};

#endif