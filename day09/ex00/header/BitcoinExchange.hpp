#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

typedef std::map<std::string, float, std::greater<std::string> > mymap;
mymap get_parsed_data();
void parse_line(const std::string & buffer, const mymap &data);

#endif