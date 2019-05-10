#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "forlolz.hpp"

TEST(first, test)
{
    simpleFun s;
    EXPECT_EQ(s.run(), 42);
    EXPECT_EQ(s.run(), 45);
}
