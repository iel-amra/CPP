/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-amra <iel-amra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 12:56:13 by iel-amra          #+#    #+#             */
/*   Updated: 2023/03/30 16:12:18 by iel-amra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <cstdio>

int main(int argc, char **argv)
{
    int pos;
    
    if (argc != 4)
    {
        std::cout   << "Bad number of argumets." << std::endl 
                    << "Usage : ./Sed  Filename S1 S2" << std::endl;
        return (0);
    }
    if (!argv[2][0])
        return (0);
    std::ifstream in(argv[1]);
    if (in.fail())
    {
        perror(argv[1]);
        return(1);
    }
    std::stringstream buffer;
    buffer << in.rdbuf();
    std::string str = buffer.str();
    
    pos = str.find(argv[2], 0);
    while (pos != -1)
    {
        str.erase(pos, strlen(argv[2]));
        str.insert(pos, argv[3]);
        pos += strlen(argv[3]);
        pos = str.find(argv[2], pos);
    }
    std::ofstream out(std::string(argv[1]).append(".replace"));
    if (in.fail())
    {
        perror(std::string(argv[1]).append(".replace").c_str());
        return(1);
    }
    out << str;
    return 0;
}