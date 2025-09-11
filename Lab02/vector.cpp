/**
 * @file vector.cpp
 * @author Marie Jardiniano
 * @brief 
 * @date 2025-09-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <iostream>
#include <vector>

using namespace std;
/**
 * @brief prints the elements in the vector and their memory locations
 * 
 * @param v - vector of integers
 */
void printMemVec(vector<int> v) {
    printf("In vector - Each int is worth %lu bytes\n", sizeof(v[0]));

    for (int i = 0; i < v.size(); i++) {
        printf("Value %i at Memory Location: %p\n", v[i], &v[i]);
    }
    printf("\n");
}

/**
 * @brief increments all of the elements in int vector v by 10
 * 
 * @param v - address to a vector of integers
 */
void incVecBy10(vector<int> & v) {
    
        for(size_t i = 0; i < v.size(); i++) {
        int* v_ptr = &v[i];
        //printf("v is: %i \nv_ptr is now: %p\n", v, v_ptr);
        *v_ptr = *v_ptr + 10;
        //printf("%i\n", v[i]);
    }
    //printf("\n");
}


int main() {
    // create a constant integer called SIZE that is of value 5
    const int SIZE = 5;
    
    // create a vector of integers called vec that can hold up to 5 elements
    vector<int> vec(5);

    // use a for to populate vec with the values 100 to 1004
    for(int i = 0; i < SIZE; i++)
        vec[i] = 100 + i;
    

    printf("\nBefore Increment ---------------------\n");
    printMemVec(vec);

    incVecBy10(vec);
    printf("After Increment ----------------------\n");
    printMemVec(vec);

    // removing last element of vec
    vec.pop_back();

    printf("After Pop ----------------------------\n");
    printMemVec(vec);

    // append 101 and 102 at the end of vec
    vec.push_back(101);
    vec.push_back(102);

    printf("After Push ---------------------------\n");
    printMemVec(vec);

    return 0;
}