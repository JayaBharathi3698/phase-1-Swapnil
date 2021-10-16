# Dynamic Memory Allocation in C . 🧐🧐

If there is a requirement to change this length (size). For Example, 
 
>* If there is a situation where only 5 elements are needed to be entered in this array. In this case, the remaining 4 indices are just wasting memory in this array. So there is a requirement to lessen the length (size) of the array from 9 to 5.
>* Take another situation. In this, there is an array of 9 elements with all 9 indices filled. But there is a need to enter 3 more elements in this array. In this case, 3 indices more are required. So the length (size) of the array needs to be changed from 9 to 12.
>* This procedure is referred to as Dynamic Memory Allocation in C.

Therefore, C Dynamic Memory Allocation can be defined as a procedure in which the size of a data structure (like Array) is changed during the runtime.

C provides some functions to achieve these tasks. There are 4 library functions provided by C defined under <stdlib.h> header file to facilitate dynamic memory allocation in C programming.

1) [Malloc](https://github.com/cleanhand/phase-1-Swapnil/blob/main/LET%20US%20C/Malloc.md)
2) [Calloc](https://github.com/cleanhand/phase-1-Swapnil/blob/main/LET%20US%20C/Calloc.md)
3) [Free](https://github.com/cleanhand/phase-1-Swapnil/blob/main/LET%20US%20C/DMA_Free.md)
4) [Realloc](https://github.com/cleanhand/phase-1-Swapnil/blob/main/LET%20US%20C/Realloc.md)

[Reference](https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc/)
