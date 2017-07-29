#include <gtest/gtest.h>

TEST(failing_test, string_equal) {
    const char* a = "hello world";
    const char* b = "hello world";
    ASSERT_STRNE(a,b);
}

TEST(failing_test, string_not_equal){
    const char *a = "hello world";
    const char *b = "hello gtest";
    ASSERT_STREQ(a,b);
}