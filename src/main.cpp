/*
personal reference for cplusplus from february 2023-present(march 2023).
warning: if you want to add stuff document it well.
*/

#include "include/header.hpp"
#include "include/func_header.hpp"

struct Person{      
    char name[64];  //struct used for pointer usage example.
    int age;
};
/*function updates the age of a Person structure. but its out of scope. to get around it we pass struct by reference, so that now the pointer to the structure is in the scope of this function*/
void updateStruct(struct Person *p, int age){
    p->age = age;
}
int main(int argc, char **argv){  
    struct Person lowlevellearning;         //pointer
    updateStruct(&lowlevellearning, 100);   //example
    //cout<<"\n"<<lowlevellearning.age<<"\n\n";

    
    dataTypes vartypesize;
    vartypesize.printTypeSizes();
    cout<<"\n\n";
    sum_of_natural_numbers();//simple excercies for loops
    cout<<"\n\n";
    //display_specific_amount_of_natural_numbers_and_their_sum();
    cout<<"\n\n";
    
    return 0;
}