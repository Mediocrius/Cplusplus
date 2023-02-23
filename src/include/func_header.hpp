#include "header.hpp"
#include <stdint.h>
#ifndef func_header
#define func_header FunctionHeader
#define FunctionHeader func_header

void variable_type_sizes(){
    int64_t int64_t{};
    uint64_t uint64_t{};
    int32_t int32_t{};
    uint32_t uint32_t{};
    int16_t int16_t{};
    uint16_t uint16_t{};
    int8_t int8_t{};
    uint8_t uint8_t{};

    char16_t char16t[] = { };
    char32_t char32t[] = { };
    unsigned char unsignedChar[] = { }; 
    char _char[] = { };
    wchar_t wChar_t[] = { }; 
    __int8 _int8{};
    __int16 _int16{};
    __int32 _int32{};
    __int64 _int64{};

    cout<<"size of int64_t "<<sizeof(int64_t)<<" bytes\n";
    cout<<"size of uint64_t "<<sizeof(uint64_t)<<" bytes\n";
    cout<<"size of int32_t "<<sizeof(int32_t)<<" bytes\n";
    cout<<"size of uint32_t "<<sizeof(uint32_t)<<" bytes\n";
    cout<<"size of int16_t "<<sizeof(int16_t)<<" bytes\n";
    cout<<"size of uint16_t "<<sizeof(uint16_t)<<" bytes\n";
    cout<<"size of int8_t " <<sizeof(int8_t)<<" bytes\n";
    cout<<"size of uint8_t " <<sizeof(uint8_t)<<" bytes\n";
    
    cout<<"size of __int8 " <<sizeof(_int8)<<" bytes\n";
    cout<<"size of __int32 "<<sizeof(_int32)<<" bytes\n";
    cout<<"size of __int64 "<<sizeof(_int64)<<" bytes\n";
    cout<<"size of __int16 "<<sizeof(_int16)<<" bytes\n";
    cout<<"size of __int " <<sizeof(uint8_t)<<" bytes\n";
    cout<<"size of __int " <<sizeof(uint8_t)<<" bytes\n";
    cout<<"size of __int " <<sizeof(uint8_t)<<" bytes\n";
    cout<<"size of __int " <<sizeof(uint8_t)<<" bytes\n";
    cout<<"size of __int " <<sizeof(uint8_t)<<" bytes\n";
    cout<<"size of __int " <<sizeof(uint8_t)<<" bytes\n";
}
void sum_of_natural_numbers(){
    int32_t sum{};
    for(int i = 0; i<10; i++){
        sum = sum + i;
    }
    cout<<sum;
}
void display_specific_amount_of_natural_numbers(){
    int32_t x{}, j{};
    int32_t natural_numbers_array[10] = {1,2,3,4,5,6,7,8,9,10};
    
    if(x > 0 || x <= 10){
        cout<<"how many natural numbers should we display? enter number now: ";
        cin>>x;
        for(int j = 0; j < x; j++){
            cout<<natural_numbers_array[j]<<" ";
        }
    }
    else{
        cout<<"\nwrong number.\n";
    }
}
#endif