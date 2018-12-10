#include <gtest/gtest.h>
#include "simple.h"

TEST (simple_check, test_simple) {
    Simple simpleEasyTest;
    ASSERT_EQ(simpleEasyTest.getSimple(), "SimplyEasy");
}
