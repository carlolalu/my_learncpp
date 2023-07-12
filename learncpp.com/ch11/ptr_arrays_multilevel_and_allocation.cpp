/*
 * Here I would like to work with ptr, arrays and infer their type so to gain sleith of hand with them
 *
 * At the same time I would like to see a bit how to allocate and work with multidimentional arrays in
 * the theoretical and surely less practical way
 *
 * */

#include<iostream>
#include<typeinfo>

int main (void)
{
    int a {5};

    //pointer
    int *ptr = &a;
    std::cout << typeid(ptr).name() << "\n";

    //array (should be int[7])
    int array[7] = {};
    std::cout << typeid(array).name() << "\n";

    //array of ptrs
    int *array_ptrs[7];
    std::cout << typeid(array_ptrs).name() << "\n";

    //ptr to an array (should be (*int)[7])
    int (*ptr_to_array)[7];
    std::cout << typeid(ptr_to_array).name() << "\n";
    ptr_to_array = &array;
    std::cout << (*ptr_to_array)[4] << "\n";

    //double ptr
    int **double_ptr {&ptr};
    std::cout << typeid(double_ptr).name() << "\n";

    // some random operation to exercise with the syntax of the commands
    (*ptr_to_array)[4] = {**double_ptr};
    std::cout << array[4] << "\n";

    //$$$$$$
    // now some stuff with mem allocation and multidimensional arrays
    //NOTE: I didn't cover exceptions yet, thus the code will assume that the OS
    // will always have memory available to allocate for the program
    // or I will simply use the std""nothrow, but it is less likely






    return 0;
}