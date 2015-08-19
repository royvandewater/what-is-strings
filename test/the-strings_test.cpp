
#include "gtest/gtest.h"
#include "the-strings.h"

TEST(theStringsSize, 3) {
  TheStrings theStrings;

  EXPECT_CALL(theStrings, size())
  .WillRepeatedly(Return(2));
}
