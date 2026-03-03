#ifndef CONVERTER_HPP
#define CONVERTER_HPP
    #include <iostream>
    #include <stack>
    #include <vector>
    #include <cmath>

class   numbers
{
    private:
        std::string data;
        std::vector<int> binary_result;
        int             number_result;
        bool            sign;
    public:
        numbers();
        numbers(std::string data);
        ~numbers();
        void    output_binary();
        void    execute();
        void    convert_to_number();
        void    output_number();
        void int_to_binary();
        void float_to_binary();
};


#endif