#ifndef header
#define header

#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <limits.h>
#include <chrono>
#include <cstdlib>

using std::rand;

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::microseconds;

using std::cout;
using std::cin;
using std::cerr;
using std::clog;
using std::string;

const double million = 1000000.0;

class dataTypes{
    protected:

    private:

    public:
        //initialization of types for size log
        /*
        Base C Data Types 
        */
        //integers
        short Short{};
        short int shortInteger{};
        int integer{};
        long int longInteger{};
        long long int longLongInteger{};
        unsigned short int unsignedShortInt{};
        unsigned int unsignedInteger{};
        unsigned long int unsignedLongInteger{};
        unsigned long long int unsignedLongLongInteger{};
        //float and double
        float Float{};
        double Double{};
        long double longDouble{};
        //char
        char Char[0];
        signed signedChar[0];
        unsigned char unsignedChar[0]; 
        //booleon
        bool bulioni;
        int8_t int8_t{};
        int16_t int16_t{};
        int32_t int32_t{};
        int64_t int64_t{};
        uint8_t uint8_t{};
        uint16_t uint16_t{};
        uint32_t uint32_t{};//typedef unsinged int uint32_t
        uint64_t uint64_t{};//typedef unsigned long long uint64_t

        __int8 _int8{};
        __int16 _int16{};
        __int32 _int32{};
        __int64 _int64{};

        //chars
        char16_t char16t[0];
        char32_t char32t[0];
        wchar_t wChar_t[0];

        string string_{};
        //printing functions
        void printTypeSizes();
        void printMaxValues();
};
class language{
    //en.cppreference.com/
    public:
        string basicConcepts;
        string keywords;
        string preprocessor;
        string expressions;
        string declaration;
        string initialization;
        string functions;
        string statements;
        string classes;
        string overloading;
        string templates;
        string exceptions;
} lang;

#endif