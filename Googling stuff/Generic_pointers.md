# Generic pointer :- 

When a variable is declared as being a pointer to type void it is known as a [generic pointer](https://www.geeksforgeeks.org/void-pointer-c-cpp/). Since you cannot have a variable of type void, the pointer will not point to any data and therefore cannot be dereferenced. It is still a pointer though, to use it you just have to cast it to another kind of pointer first. Hence the term Generic pointer.

Eg :-

    #include<stdio.h>
    void main()
    {
    int a;
    void *p;
    a=10;
    p=&a;
    printf("%d",int(*p));
    }
    
[Detailed explation and example](https://www.ritambhara.in/generic-pointers-in-c-language/)
