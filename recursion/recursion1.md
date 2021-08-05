# Recursion :- 

[Link](https://youtu.be/TZR6tMs4vmQ)

It is a process in which a function call itself in its body.

This can be explained with a very under rated concept of MATHEMATICS , Principle Of Mathematical Induction (PMI). Everyone usually ignore this concept/chapter but it is very useful in making program.

Starting the process in quiet easy but we have to know when it necassary to stop recursion beacuse it is a never ending process so,this will come with intuition as well as practice .
The more you solve the question the more you get the idea of when to use recursion.

Example :- 

Q1- WAF to print first n natural numbers in ascending order.

A-  

    f(int n)
    {
    if(n==0)
    return ;
    
    f(n-1);
    printf("%d",n);
    }
    

Q2- WAF to print first n natural numbers in descending order.

A-  
    
    f(int n)
    {
    if(n==0)
    return ;
    
    printf("%d",n);
    f(n-1);
    }
