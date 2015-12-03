#include "tinytest.h"
#include "../eurotodollarconverter.hpp"
#include "../dollartoeuroconverter.hpp"
#include "../eurotodanishkroneconverter.hpp"
#include "../centimetertoinchesconverter.hpp"
#include "../kilometertomilesconverter.hpp"
#include "../converterfactory.hpp"

std::map<std::string, converter*> ConverterFactory::prototypes;
ConverterFactory* ConverterFactory::instance;

int testDollarToEuro() {
    ConverterFactory* converter = ConverterFactory::getInstance();

    converter->registerClass("dollarToEuroConverter", new dollarToEuroConverter);

    auto myConverter = converter->create("dollarToEuroConverter");

    TINYTEST_EQUAL_EPSILON(myConverter->convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(myConverter->convert(10.0), 8.8);
    TINYTEST_EQUAL_EPSILON(myConverter->convert(20.18), 17.758400);

    return 1;  // Always return a value different than 0 at test end.
}

int testEuroToDollar() {
    ConverterFactory* converter = ConverterFactory::getInstance();

    converter->registerClass("euroToDollarConverter", new euroToDollarConverter);

    auto myConverter = converter->create("euroToDollarConverter");

    TINYTEST_EQUAL_EPSILON(myConverter->convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(myConverter->convert(11.363636), 12.913223);
    TINYTEST_EQUAL_EPSILON(myConverter->convert(22.9318181), 26.0588);

    return 1;  // Always return a value different than 0 at test end.
}

int testEuroToDanishKrone() {
    ConverterFactory* converter = ConverterFactory::getInstance();

    converter->registerClass("euroToDanishKroneConverter", new euroToDanishKroneConverter);

    auto myConverter = converter->create("euroToDanishKroneConverter");

    TINYTEST_EQUAL_EPSILON(myConverter->convert(0.0), 0.0);
    TINYTEST_EQUAL_EPSILON(myConverter->convert(10.0), 74.6099733);
    TINYTEST_EQUAL_EPSILON(myConverter->convert(20.18), 150.562926);

    return 1;  // Always return a value different than 0 at test end.
}

int testCentsToInches()
{
    ConverterFactory* converter = ConverterFactory::getInstance();

    converter->registerClass("centimetersToInchesConverter", new centimeterToInchesConverter);

    auto myConverter = converter->create("centimetersToInchesConverter");
    
    TINYTEST_EQUAL_EPSILON(0.393701, myConverter->convert(1.0));
    TINYTEST_EQUAL_EPSILON(0.0, myConverter->convert(0.0));
    TINYTEST_EQUAL_EPSILON(0.787402, myConverter->convert(2.0));
    
    return 1;
}

int testKilometersToMiles()
{
    ConverterFactory* converter = ConverterFactory::getInstance();

    converter->registerClass("kilometerToMilesConverter", new kilometerToMilesConverter);

    auto myConverter = converter->create("kilometerToMilesConverter");
    
    TINYTEST_EQUAL_EPSILON(0.621371, myConverter->convert(1.0));
    TINYTEST_EQUAL_EPSILON(0.0, myConverter->convert(0.0));
    TINYTEST_EQUAL_EPSILON(18.0198, myConverter->convert(29.0));
    
    return 1;
}

TINYTEST_START_SUITE(ConverterSuite);

// Currency Tests
TINYTEST_ADD_TEST(testEuroToDollar);
TINYTEST_ADD_TEST(testDollarToEuro);
TINYTEST_ADD_TEST(testEuroToDanishKrone);
TINYTEST_ADD_TEST(testCentsToInches);
TINYTEST_ADD_TEST(testKilometersToMiles);

TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(ConverterSuite);