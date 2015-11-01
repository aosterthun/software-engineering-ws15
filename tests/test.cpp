#include "tinytest.h"
#include "../eurotodollarconverter.hpp"

int testEuroToDollar() {
    euroToDollarConverter con;

    TINYTEST_EQUAL_EPSILON(con.convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(con.convert(10.0), 11.363636);
    TINYTEST_EQUAL_EPSILON(con.convert(20.18), 22.9318181);

    return 1;  // Always return a value different than 0 at test end.
}

int testDollarToEuro() {
    euroToDollarConverter con;

    TINYTEST_EQUAL_EPSILON(con.convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(con.convert(11.363636), 10.0);
    TINYTEST_EQUAL_EPSILON(con.convert(22.9318181), 20.18 );

    return 1;  // Always return a value different than 0 at test end.
}

int testEuroToDanishKrone() {
    euroToDollarConverter con;

    TINYTEST_EQUAL_EPSILON(con.convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(con.convert(10.0), 74.6099733);
    TINYTEST_EQUAL_EPSILON(con.convert(20.18), 150.562926);

    return 1;  // Always return a value different than 0 at test end.
}

TINYTEST_START_SUITE(ConverterSuite);

// Currency Tests
TINYTEST_ADD_TEST(testDollarToEuro);
TINYTEST_ADD_TEST(testEuroToDollar);
TINYTEST_ADD_TEST(testEuroToDanishKrone);


TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(ConverterSuite);