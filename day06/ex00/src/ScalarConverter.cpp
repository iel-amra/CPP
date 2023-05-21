#include <ScalarConverter.hpp>

using std::isprint;
using std::isdigit;
using std::cout;
using std::endl;

char     ScalarConverter::_char;
int      ScalarConverter::_int;
float    ScalarConverter::_float;
double   ScalarConverter::_double;
char     ScalarConverter::_flags[4];

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter & ref)
{
    (void) ref;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter ScalarConverter::operator=(const ScalarConverter & rhs)
{
    (void) rhs;
    return (*this);
}


int ScalarConverter::convert(const std::string & str)
{
    _flags[0] = 0;
    _flags[1] = 0;
    _flags[2] = 0;
    _flags[3] = 0;
    if (_isChar(str))
        _convertChar(str);
    else if (_isInt(str))
        _convertInt(str);
    else if (_isFloat(str))
        _convertFloat(str);
    else if (_isDouble(str))
        _convertDouble(str);
    else
    {
        _flags[0] |= NOT_DISPLAYABLE;
        cout << "Incorrect type" << endl;
        return (1);
    }
    return (0);
}

void ScalarConverter::display()
{
    int i = 0;

    cout << "char : ";
    if (_displayable(_flags[i++]))
        cout << _char << endl;
    cout << "int : ";
    if (_displayable(_flags[i++]))
        cout << _int << endl;
    cout << "float : ";
    if (_displayable(_flags[i++]))
        cout << std::fixed << std::setprecision(1) << _float << 'f' << endl;
    cout << "double : ";
    if (_displayable(_flags[i++]))
        cout << std::fixed << std::setprecision(1) << _double << endl;
}

bool ScalarConverter::_displayable(char flag)
{
    if (flag & IMPOSSIBLE)
    {
        cout << "Impossible" << endl;
        return (false);
    }
    else if (flag & OVERFLOW)
    {
        cout << "Overflow" << endl;
        return (false);
    }
    else if (flag & NOT_DISPLAYABLE)
    {
        cout << "Not displayable" << endl;
        return (false);
    }
    return (true);
}

void ScalarConverter::_convertChar(const std::string & str)
{
    _char = str[1];
    if (!isprint(_char))
        _flags[0] |= NOT_DISPLAYABLE;
    _int = static_cast<int>(_char);
    _float = static_cast<float>(_char);
    _double = static_cast<double>(_char);
}

void ScalarConverter::_convertInt(const std::string & str)
{
    long int nb = strtol (str.c_str(), NULL, 10);
    if (nb < INT_MIN || nb > INT_MAX)
    {
        _flags[0] |= IMPOSSIBLE;
        _flags[1] |= OVERFLOW;
        _flags[2] |= IMPOSSIBLE;
        _flags[3] |= IMPOSSIBLE;
    }
    _int = static_cast<int>(nb);
    _char = static_cast<char>(_int);
    if (!isprint(_char))
        _flags[0] |= NOT_DISPLAYABLE;
    if (_int < SCHAR_MIN || _int > SCHAR_MAX)
        _flags[0] |= OVERFLOW;
    _float = static_cast<float>(_int);
    _double = static_cast<double>(_int);
}

void ScalarConverter::_convertFloat(const std::string & str)
{
    double nb = strtod (str.c_str(), NULL);
    if (str == "nanf" || str == "-inff" || str == "+inff")
    {
        _flags[0] |= IMPOSSIBLE;
        _flags[1] |= IMPOSSIBLE;
    }
    else if (nb < -FLT_MAX || nb > FLT_MAX)
    {
        _flags[0] |= IMPOSSIBLE;
        _flags[1] |= IMPOSSIBLE;
        _flags[2] |= OVERFLOW;
        _flags[3] |= IMPOSSIBLE;
    }
    _float = static_cast<float>(nb);
    _char = static_cast<char>(_float);
    if (!isprint(_char))
        _flags[0] |= NOT_DISPLAYABLE;
    if (_float < SCHAR_MIN || _float > SCHAR_MAX)
        _flags[0] |= OVERFLOW;
    _int = static_cast<int>(_float);
    if (_float < INT_MIN || _float > INT_MAX)
        _flags[1] |= OVERFLOW;
    _double = static_cast<double>(_float);
}

void ScalarConverter::_convertDouble(const std::string & str)
{
    _double = strtod (str.c_str(), NULL);
    if (str == "nan" || str == "-inf" || str == "+inf")
    {
        _flags[0] |= IMPOSSIBLE;
        _flags[1] |= IMPOSSIBLE;
    }
    if (errno)
    {
        _flags[0] |= IMPOSSIBLE;
        _flags[1] |= IMPOSSIBLE;
        _flags[2] |= IMPOSSIBLE;
        _flags[3] |= OVERFLOW;
    }
    _char = static_cast<char>(_double);
    if (!isprint(_char))
        _flags[0] |= NOT_DISPLAYABLE;
    if (_double < SCHAR_MIN || _double > SCHAR_MAX)
        _flags[0] |= OVERFLOW;
    _int = static_cast<int>(_double);
    if (_double < INT_MIN || _double > INT_MAX)
        _flags[1] |= OVERFLOW;
    _float = static_cast<float>(_double);
    if ((_double < -FLT_MAX || _double > FLT_MAX) && str != "+inf" && str != "-inf")
        _flags[2] |= OVERFLOW;
}

bool ScalarConverter::_isChar(const std::string & str)
{
    if (str.size() != 3 || str[0] != '\'' || str[2] != '\'')
        return (false);
    return (true);
}

bool ScalarConverter::_isInt(const std::string & str)
{
    int i = 0;

    if (str[i] == '-')
        i = 1;
    if (!str[i])
        return (false);
    while (isdigit(str[i]))
        i++;
    if (str[i])
        return (false);
    return (true);
}

bool ScalarConverter::_isFloat(const std::string & str)
{
    int i = 0;

    if (str == "nanf" || str == "-inff" || str == "+inff")
        return(true);
    if (str[i] == '-')
        i = 1;
    if (!str[i])
        return (false);
    while (isdigit(str[i]))
        i++;
    if (str[i++] != '.')
        return (false);
    if (!str[i])
        return (false);
    while (isdigit(str[i]))
        i++;
    if (str[i] != 'f' || str[i + 1])
        return (false);
    return (true);
}

bool ScalarConverter::_isDouble(const std::string & str)
{
    int i = 0;

    if (str == "nan" || str == "-inf" || str == "+inf")
        return(true);
    if (str[i] == '-')
        i = 1;
    if (!str[i])
        return (false);
    while (isdigit(str[i]))
        i++;
    if (str[i++] != '.')
        return (false);
    if (!str[i])
        return (false);
    while (isdigit(str[i]))
        i++;
    if (str[i])
        return (false);
    return (true);
}

