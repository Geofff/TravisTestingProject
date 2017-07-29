#include <gtest/gtest.h>

TEST(passing_test, string_equal) {
    const char* a = "hello world";
    const char* b = "hello world";
    ASSERT_STREQ(a,b);
}

TEST(passing_test, string_not_equal){
    const char *a = "hello world";
    const char *b = "hello gtest";
    ASSERT_STRNE(a,b);
}