/*
1. UNINITIALIZED PTR
2. MEMORY LEAK
3. DANGLING POINTER

1. e.g. int *p; //Declared only not Initialized so using this pointer can cause problem
correct way - int x=10;
              int *p;
              p=&x;


2. Memory Leak
If a pointer p is pointing to an array and we set pointer value to null (We have no access to array now)
But array is still present there in heap or stack(wherever it is declared). This is MEMORY LEAK.
CAUTION! Before setting pointer to null make sure you have deleted the memory explicitly.

            int *p=new int[5]
            delete []p;
            p=nullptr;


3. DANGLING POINTER
In uninitialised Pointer, Pointer is not Initialised
In DAngling Pointer , Pointer is initialised  but now memory is dealloacted.

*/
