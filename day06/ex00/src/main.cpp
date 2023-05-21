#include <ScalarConverter.hpp>

int main(int argc, char **argv)
{
    (void) argc;
    if (argc != 2)
    {
        std::cout << "Bad number of arguments" << std::endl;
        return (0);
    }
    if (!ScalarConverter::convert(argv[1]))
        ScalarConverter::display();
    return (0);
}