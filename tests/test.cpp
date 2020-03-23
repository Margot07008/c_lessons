//
// Created by margot on 23.03.2020.
//

#include <gtest/gtest.h>

extern "C" {
#include "../includes/header.h"
}

TEST(STATIC, unit_tests) {
    ASSERT_EQ( test_for_static(), 1);
}

TEST(DYNAMIC, unit_tests) {
    ASSERT_EQ( test_fot_dynamic(), 1);

}
