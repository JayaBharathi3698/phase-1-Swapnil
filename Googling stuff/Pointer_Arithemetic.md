# POINTER ARITHEMETIC
![image](https://user-images.githubusercontent.com/85029234/133916816-69930580-84aa-4e57-a2dc-3821fa983133.png)

Mainly there are 4 types of arithematical operation on the pointer :- 
* Increment
* Decrement
* Addition
* Subtraction

## Increment and Addition pointer operation +

Both the operation are same but there is some slight difference in their meaning.
* Incerement means increase in value by just 1 unit .
* Addition means increase in value by 'n' units . 

Eg:-
    
    int x=10;
    int *p;
    p=&x;
    p=p+4;
    printf("new value of pointer address is %d",p);
    
## Decrement and Substraction of pointer -

Both operation are same but decrement means decrease in value by just 1 unit, and substracton means decrease in value by 'n' units .

Eg:- 
    
    int z=131;
    int* s;
    s=&z;
    s=s-8;
    printf("new value of pointer address is %d",s);

[Reference](https://www.javatpoint.com/pointer-arithmetic-in-c)
