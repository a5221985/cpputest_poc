#include "CppUTest/TestHarness.h"
#include "code.h"

TEST_GROUP(AwesomeExamples) {
};

TEST(AwesomeExamples, FirstExample) {
    int x = test_func();
    CHECK_EQUAL(1, x);
}
