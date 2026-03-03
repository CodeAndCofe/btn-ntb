#include "Converter.hpp"


int main(int arc, char **arv)
{
    std::string data;
    if (arc != 2)
    {
        std::cout << "./" << arv[0] << "[b or n](value)"<< std::endl;
        return 1; 
    }
    data.append(arv[1]);
    if (data[0] != 'n' && data[0] != 'b')
    {
        std::cout << "./" << arv[0] << "[b or n](value)"<< std::endl;
        return 1; 
    }
    try
    {
        if (data[0] == 'n')
        {
            numbers nb(data);
            nb.execute();
            nb.output_binary();
        }
        else if (data[0] == 'b')
        {
            numbers nb(data);
            nb.convert_to_number();
        }
    }
    catch(const char* e)
    {
        std::cerr << e << '\n';
    }
}