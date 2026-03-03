#include "Converter.hpp"

numbers::numbers()
{

}

numbers::numbers(std::string data)
{
    this->data = data;
    this->data.erase(0, 1);
}

numbers::~numbers()
{
    
}

void    numbers::execute()
{
    bool flag = false;
    int nb = 0;
    if (data[0] == '-' || data[0] == '+')
    {
        if (data[1] == '.')
            throw "must be number after sign";
        nb = 1;
    }
    for (size_t i = nb; i < data.length(); i++)
    {
        if (data[i] == '.')
        {
            if (flag == true)
                throw "duplicated dot detected";
            flag = true;
        }
        else if (!std::isdigit(data[i]))
        {
            std::cout << data[i] << std::endl;
            throw "none number detected";
        }
    }
    int_to_binary();
}

void numbers::int_to_binary()
{
    int number = std::atoi(this->data.c_str());
    this->sign = (number < 0);
    number = std::abs(number);
    int target = 1;

    for (int nb = number; nb != 0; nb/= 2)
        binary_result.push_back(nb % 2);
    if (sign)
    {
        for (int i = binary_result.size() - 1; i >= 0; i--)
            binary_result[i] = (binary_result[i] == 1) ? 0 : 1;
        for (size_t i = 0; i < binary_result.size(); ++i)
        {
            int sum = binary_result[i] + target;
            binary_result[i] = sum % 2;
            target = sum / 2;
            if (target == 0) break;
        }
    }
}

void    numbers::output_binary()
{
    size_t size = 32 - binary_result.size();
    for (size_t i = 0; i < size; i++)
        binary_result.push_back(((this->sign) ? 1 : 0));
    for (int i = binary_result.size() - 1; i >= 0; i--)
    {
        std::cout << binary_result[i];
        if (i != (int)binary_result.size() && (i % 8) == 0)
            std::cout << " ";
    }
    std::cout << std::endl;
}
