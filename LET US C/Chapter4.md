# Switch case

Switch case is similar to that of a if else statement .

**Working:-**

When the statement is full filled or matched then in order prevent execution of acceding statement , break is used in order to come out of the porgram 

***Syntax:-***

switch (x)

{

case 1 :

statement ; break;

case 2 :

statement ; break;

case 3 :

statement ; break;

default :

statement ;  break;

}

## Switch Versus If-Else Ladder

There are some things that you simply cannot do with a switch.These are:- 

    i)A float expression cannot be tested using a switch
    ii)Cases can never have variable expressions (for example it is wrong to say case a +3 : )
    iii)Multiple cases cannot use same expressions.
    
If on the other hand the conditions in the if-else were simple and less in number then if-else would work out faster than the lookup mechanism of a switch. Hence a switch with two cases would work slower than an equivalent if-else. Thus, you as a programmer should take a decision which of the two should be used when.

## GOTO keyword :- 

This keyword is use to jump to any line or any part of code ,without even considering or executing the inbetween code.

**Eg:-**

void main( )

{

int goals ;

printf ( "Enter the number of goals scored against India" ) ;

scanf ( "%d", &goals ) ;

if ( goals <= 5 )

goto sos ;

else

{

printf ( "About time soccer players learnt C\n" ) ;

printf ( "and said goodbye! adieu! to soccer" ) ;

exit( ) ; /* terminates program execution */

}

sos :

printf ( "To err is human!" ) ;

}
