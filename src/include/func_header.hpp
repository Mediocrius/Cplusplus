#include "header.hpp"
//#include <stdint.h>
#ifndef func_header
#define func_header FunctionHeader
#define FunctionHeader func_header


void dataTypes::printTypeSizes(){
    string szof = "size of ";
    /*
    variable size printer
    */
    //integer size console log
    cout
        <<"\n\n **** sizes of integer types ****\n"
        <<"  *** Base C++ Data Types ***\n\n";

    cout//short, short int, int, long int, long long int
        <<szof<<"short "<<sizeof(Short)<<" bytes.\n"
        <<szof<<"short int (same as short) "<<sizeof(shortInteger)<<" bytes.\n"
        <<szof<<"int "<<sizeof(integer)<<" bytes.\n"
        <<szof<<"long int "<<sizeof(longInteger)<<" bytes.\n"
        <<szof<<"long long int "<<sizeof(longLongInteger)<<" bytes.\n"
        <<" *Unsigned types*\n"
        <<szof<<"unsigned short int "<<sizeof(unsignedShortInt)<<" bytes."
        <<szof<<"unsigned int "<<sizeof(unsignedInteger)<<" bytes.\n"
        <<szof<<"unsigned long int "<<sizeof(unsignedLongInteger)<<" bytes.\n"
        <<szof<<"unsigned long long int "<<sizeof(unsignedLongLongInteger)<<" bytes.\n"
        <<szof<<"unsinged int "<<sizeof(unsignedInteger)<<" bytes.\n"
        <<"\n *char types*\n"
        <<szof<<"_char " <<sizeof(Char)<<" bytes.\n";
    cout<<"\n ** typedef integers **\n";

    cout
        <<szof<<"(int64_t) "<<sizeof(int64_t)<<" bytes.\n"
        <<szof<<"(uint64_t) "<<sizeof(uint64_t)<<" bytes.\n"
        <<szof<<"(int32_t) "<<sizeof(int32_t)<<" bytes.\n"
        <<szof<<"(uint32_t) "<<sizeof(uint32_t)<<" bytes.\n"
        <<szof<<"(int16_t) "<<sizeof(int16_t)<<" bytes.\n"
        <<szof<<"(uint16_t) "<<sizeof(uint16_t)<<" bytes.\n"
        <<szof<<"(int8_t) " <<sizeof(int8_t)<<" bytes.\n"
        <<szof<<"(uint8_t) " <<sizeof(uint8_t)<<" bytes.\n";
    
    cout<<"\n ** microsoft-specific integers **\n";
    
    cout
        <<szof<<"__int8 " <<sizeof(__int8)<<" bytes\n"
        <<szof<<"__int16 "<<sizeof(__int16)<<" bytes.\n"
        <<szof<<"__int32 "<<sizeof(__int32)<<" bytes.\n"
        <<szof<<"__int64 "<<sizeof(__int64)<<" bytes.\n";
    
    cout<<"\n\n ** sizes of char types **\n\n";
    
    cout
        <<szof<<"char16_t " <<sizeof(char16_t)<<" bytes.\n"
        <<szof<<"char32_t " <<sizeof(char32_t)<<" bytes.\n"
        <<szof<<"unsigned char " <<sizeof(unsignedChar)<<" bytes.\n"
        <<szof<<"wchar_t " <<sizeof(wChar_t)<<" bytes.\n";
    
    cout<<szof<<"string "<<sizeof(string_)<<" bytes.\n";

    cout<<"\n End Of data type sizes.\n";
}
void dataTypes::printMaxValues(){
    cout<<"\n **** max values of variables **** \n\n";

    cout
        <<" "
        <<" "
        <<" ";
}
void sum_of_natural_numbers(){
    int32_t sum{};
    for(int i = 0; i<10; i++){
        sum = sum + i;
    }
    cout<<"Sum of Natural Numbers: "<<sum;
}
void display_specific_amount_of_natural_numbers_and_their_sum(){
    int x{}, j{}, i{};
    int natural_numbers_array[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"how many natural numbers should we display? ";
    cin>>x;

    if(x > 0 && x <= 10){
        for(j; j < x; j++ && std::isdigit(x) == true){
            cout<<natural_numbers_array[j]<<" ";
            }
        }
    else if(std::isdigit(x) == false){
        cout<<"wrong. enter numbers between 1 and 10 ";
        display_specific_amount_of_natural_numbers_and_their_sum();
    }
    for(i; i < x; i++){
        int sum{};
        sum = sum += x;
    }
        cout<<"\n"<<x<<"\n";
}

bool range_checker(); //check if integer and return true if it is within 10, 100 or 200.
#endif