/*
personal reference for cplusplus from february 2023-present(march 2023).
warning: if you want to add stuff document it well.
*/

#include "include/header.hpp"
#include "include/func_header.hpp"

int main(){  
    auto start = high_resolution_clock::now();//prog timer 
    dataTypes vartypesize;
    cout<<"-=START OF EXECUTABLE=-\n\n";
    vartypesize.printTypeSizes();
    //sum_of_natural_numbers();//simple excercies for loops
    cout<<"\n";
    //sortingFunction();
    cout<<"\n\n";
    //cout<<"\n\n";
    
    cout<<"-=END OF EXECUTABLE=-\n";
    auto stop = high_resolution_clock::now();//stop prog timer
    auto duration = duration_cast<microseconds>(stop - start);//calculate prog timer
    cout <<"\n "<< duration.count()/million << " seconds\n";//output prog run time in seconds
    quit_or_keep();
    return 0;
}