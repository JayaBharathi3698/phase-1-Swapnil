*WAP using recursion to print 5 4 3 2 1 2 3 4 5*

f(int x)

{

if(x==1)
{

printf("%d",x);

return ;

}

printf("%d",x);

f(x-1);

printf("%d",x);

}
