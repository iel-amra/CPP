#include <iostream>
#include <Array.hpp>
#include <cstdlib>

using std::cout;
using std::endl;

#define MAX_VAL 1000
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
        //std::cout << mirror[i] << std::endl;
        //std::cout << numbers[i] << std::endl;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
        tmp[0] = 5;
        test[0] = 8;
        cout << "numbers[0] = " << numbers[0] << endl;
        cout << "tmp[0] = " << tmp[0] << endl;
        cout << "test[0] = " << test[0] << endl;
        cout << "numbers[1] = " << numbers[1] << endl;
        cout << "tmp[1] = " << tmp[1] << endl;
        cout << "test[1] = " << test[1] << endl;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//

    Array<int> zero;
    try
    {
        cout << "size of Zero : " << zero.size() << endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}