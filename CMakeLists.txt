cmake_minimum_required(VERSION 2.8)
project (SE3)
set (CMAKE_CXX_FLAGS "-std=c++0x" )
add_executable(Main main.cpp dollartoeuroconverter.cpp eurotodollarconverter.cpp eurotodanishkroneconverter.cpp centimetertoinchesconverter.cpp kilometertomilesconverter.cpp currencyconverter.cpp lengthconverter.cpp converter.cpp converterfactory.cpp)

