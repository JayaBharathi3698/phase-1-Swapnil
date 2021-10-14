## Q :- Why is strings null terminated ?

**Ans :- A null-terminated string is a contiguous sequence of characters, the last one of which has the binary bit pattern all zeros. A std::string's string data is always allocated and managed by the std::string object that contains it; for a null-terminated string, there is no such container, and you typically refer to and manage such strings using bare pointers.** 
  
[Reference](https://stackoverflow.com/questions/2037209/what-is-a-null-terminated-string)
