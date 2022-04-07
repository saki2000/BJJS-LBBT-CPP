//
//  main.cpp
//  BJJS lbbt
//
//  Created by Michal Sakowski on 01/04/2022.
//

#include <iostream>
#include "TaxCalculator.h"


    
    TaxCalculator::TaxCalculator(int32_t houseValue_)
    {
        this->houseValue = houseValue_;
    }

    int32_t TaxCalculator::getTax()
    {
        double lbbt = 0;
        int32_t taxAtThisBracket = 0;

        for (std::size_t i = 0; i < bracket.size(); i++)
        {
            if (houseValue > bracket[i].min)
            {
                if ((bracket[i].max - bracket[i].min) < (houseValue - bracket[i].min))
                    taxAtThisBracket = (bracket[i].max - bracket[i].min);
                else
                    taxAtThisBracket = houseValue - bracket[i].min;

                lbbt += taxAtThisBracket * bracket[i].rate;
            }
        }
        return static_cast<int>(lbbt);
    }



int main(int argc, const char* argv[]) 
{
    TaxCalculator tax1(300000);
    std::cout << tax1.getTax() << std::endl;


    return 0;
}