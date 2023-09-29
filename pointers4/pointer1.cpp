#include <iostream>
using namespace std;

int main() {
    //? wild pointer
    // declaration of a pointer variable
    // having garbage value(address)
    // just declared not initialized
    // due to it, it ends up pointing to some random memory location
    // due to this we might get some undefined behaviour and crashes
    // in some cases we might get segmentation fault
    // segmentation fault is related to memory space
    // int *ptr;  // just declared
    // cout << ptr << " " << *ptr;

    //? null pointer
    // if we want to have a pointer variable which is just declared
    // but will get address later to store
    // in this case, we use null pointers
    // dereferencing a null pointer will give a segmentation fault
    // which is a runtime error
    // int *ptr1 = NULL;  // assigned as NULL or 0
    // int *ptr2 = 0;     // assigned as NULL or 0
    // int *ptr3 = '\0';  // assigned as NULL or 0
    // cout << ptr1 << " " << ptr2 << " " << ptr3;

    //? dangling pointer
    // it is a type of pointer that points to a memory location that is not valid
    // int* ptr = NULL;
    // {
    //     int x = 10;
    //     ptr = &x;
    // }
    // cout << *ptr << "\n";

    //? void pointer
    // these are special type of pointers that can point to any datatype
    // same pointer can store address of int/float etc
    // void pointer cant be dereferenced directly
    // they need to be type cast to (int *) integer pointer or (<datatype> *)
    // to be able to dereference and put in another pointer variable
    // float f = 10.2;
    // int x = 10;
    // void *ptr = &f;
    // ptr = &x;
    // int *intPointer = (int *)ptr;
    // cout << intPointer << " " << *intPointer << "\n";
    return 0;
}