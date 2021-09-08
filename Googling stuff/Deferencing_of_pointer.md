# 👉 Dereferencing of the pointer . 👈

Dereferencing of pointer means getting the value stored inside the pointer or the value present at particular address pointed by a pointer.

Eg :- 

    #include<stdio.h>
    void main()
    {
    int a;
    int *p;
    p=&a; // p as a pointer ,stores the address of a 
    printf("%d",p); // prints address
    printf("%d",*p); //dereferencing of pointer[*p]
    }
