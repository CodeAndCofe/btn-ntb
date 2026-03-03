#include "Converter.hpp"

void    numbers::convert_to_number()
{
    size_t space  = data.size() - 1;
    int res = 0;
    for (size_t i = 0; i <= space; i++)
    {
        if (data[i] == '1')
            res += std::pow(2, (space - i));
    }
    number_result = res;
}


void    numbers::output_number()
{
    std::cout << number_result << std::endl;
}