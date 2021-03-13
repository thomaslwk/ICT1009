#include <iostream> 

class Pizza {
    private: 
        const static std::string STDTOP;
        const static int STDSIZE; 
        const static double STDPRICE; 
    public: 
        Pizza(const std::string = STDTOP, const int = STDSIZE, const double = STDPRICE);
};

const std::string Pizza::STDTOP = "cheese";
const int Pizza::STDSIZE = 12; 
const double Pizza::STDPRICE = 8.99;
 