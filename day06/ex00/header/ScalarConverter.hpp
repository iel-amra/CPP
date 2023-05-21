#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <string>

class ScalarConverter
{
public:
    ScalarConverter();
    ScalarConverter(const ScalarConverter & ref);
    ~ScalarConverter();
    ScalarConverter operator=(const ScalarConverter & rhs);

    static void convert(const std::string & str);

private:
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
};

#endif