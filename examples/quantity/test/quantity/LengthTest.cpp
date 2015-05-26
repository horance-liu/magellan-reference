#include <magellan/magellan.hpp>
#include "quantity/Length.h"

USING_HAMCREST_NS

FIXTURE(LengthTest)
{
    TEST("1 FEET should equal to 12 INCH")
    {
        ASSERT_THAT(Length(1, FEET), eq(Length(12, INCH)));
    }
};
