#ifndef _N538IL65Z7HRHO2FH9TDT97156X8DAS1LLZNETEU920QRC9NUZL6RMZP               
#define _N538IL65Z7HRHO2FH9TDT97156X8DAS1LLZNETEU920QRC9NUZL6RMZP

#include "quantity/Amount.h"

enum LengthUnit
{
    INCH = 1,
    FEET = 12 * INCH,
};

struct Length
{
    Length(Amount amount, LengthUnit unit);

    bool operator==(const Length&) const;
    bool operator!=(const Length&) const;

private:
    const Amount amountInBaseUnit;
};

#endif
