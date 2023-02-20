#include "header.hpp"
#ifndef func_header
#define func_header FunctionHeader

void sizes_of_int_t_types(){
    int64_t int64_t{};
    uint64_t uint64_t{};
    int32_t int32_t{};
    uint32_t uint32_t{};
    int16_t int16_t{};
    uint16_t uint16_t{};
    int8_t int8_t{};
    uint8_t uint8_t{};

    cout<<"size of int64_t "<<sizeof(int64_t)<<" bytes\n";
    cout<<"size of uint64_t "<<sizeof(uint64_t)<<" bytes\n";
    cout<<"size of int32_t "<<sizeof(int32_t)<<" bytes\n";
    cout<<"size of uint32_t "<<sizeof(uint32_t)<<" bytes\n";
    cout<<"size of int16_t "<<sizeof(int16_t)<<" bytes\n";
    cout<<"size of uint16_t "<<sizeof(uint16_t)<<" bytes\n";
    cout<<"size of int8_t " <<sizeof(int8_t)<<" bytes\n";
    cout<<"size of uint8_t " <<sizeof(uint8_t)<<" bytes\n";
}



#endif