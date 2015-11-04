#include "tinytest.h"
#include "../eurotodollarconverter.hpp"
#include "../dollartoeuroconverter.hpp"
#include "../eurotodanishkroneconverter.hpp"
#include "../centimetertoinchesconverter.hpp"
#include "../kilometertomilesconverter.hpp"

int testEuroToDollar() {
    euroToDollarConverter con;

    TINYTEST_EQUAL_EPSILON(con.convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(con.convert(10.0), 11.363636);
    TINYTEST_EQUAL_EPSILON(con.convert(20.18), 22.9318181);

    return 1;  // Always return a value different than 0 at test end.
}

int testDollarToEuro() {
    dollarToEuroConverter con;

    TINYTEST_EQUAL_EPSILON(con.convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(con.convert(11.363636), 10.0);
    TINYTEST_EQUAL_EPSILON(con.convert(22.9318181), 20.18 );

    return 1;  // Always return a value different than 0 at test end.
}

int testEuroToDanishKrone() {
    euroToDanishKroneConverter con;

    TINYTEST_EQUAL_EPSILON(con.convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(con.convert(10.0), 74.6099733);
    TINYTEST_EQUAL_EPSILON(con.convert(20.18), 150.562926);

    return 1;  // Always return a value different than 0 at test end.
}

int testCentsToInches()
{
    centimeterToInchesConverter con;
    
    TINYTEST_EQUAL_EPSILON(0.393701, con.convert(1.0));
    TINYTEST_EQUAL_EPSILON(0.0, con.convert(0.0));
    TINYTEST_EQUAL_EPSILON(0.787402, con.convert(2.0));
    
    return 1;
}

int testKilometersToMiles()
{
    kilometerToMilesConverter con;
    
    TINYTEST_EQUAL_EPSILON(0.621371, con.convert(1.0));
    TINYTEST_EQUAL_EPSILON(0.0, con.convert(0.0));
    TINYTEST_EQUAL_EPSILON(18.0198, con.convert(29.0));
    
    return 1;
}

TINYTEST_START_SUITE(ConverterSuite);

// Currency Tests
TINYTEST_ADD_TEST(testDollarToEuro);
TINYTEST_ADD_TEST(testEuroToDollar);
TINYTEST_ADD_TEST(testEuroToDanishKrone);
TINYTEST_ADD_TEST(testCentsToInches);
TINYTEST_ADD_TEST(testKilometersToMiles);

TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(ConverterSuite);