#pragma once

#include <cstdint>
#include <vector>

struct TaxBrackets
{
    int32_t min;
    int32_t max;
    double rate;
};

class TaxCalculator
{
private:
    int32_t houseValue = 0;
    const std::vector<TaxBrackets>bracket = { {0,145000,0.0}, {145000,250000,0.02}, {250000,325000,0.05}, {325000,750000,0.1}, {750000, std::numeric_limits<int>::max(), 0.12} };

public:

    TaxCalculator() = default;
    TaxCalculator(int32_t houseValue_);
    int32_t getTax();
};
