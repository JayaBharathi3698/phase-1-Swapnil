# Why indexing in array starts from 0?

Martin Richards, creator of the BCPL language (a precursor of C), designed arrays initiating at 0 as the natural position to start accessing the array contents in the language, since the value of a pointer p used as an address accesses the position p+0 in memory.

The name of an array is essentially a pointer, a reference to a memory location, and so the expression array[n] refers to a memory location n-elements away from the starting element. This means that the index is used as an offset. The first element of the array is exactly contained in the memory location that array refers (0 elements away), so it should be denoted as array[0]. Most programming languages have been designed this way, so indexing from 0 is pretty much inherent to the language.

So, 0-based index allows array(index) to be implemented as *(array + index). If index were 1-based, compiler would need to generate *(array + index - 1), and this "-1" would hurt the performance. Rather than subtracting 1, you should use the address of the array-1 as the base address. That eliminates the runtime subtraction. When you're writing a compiler, those extra instructions matter a lot. The compiler will be used to generate thousands of programs, each of which may be used thousands of times, and that extra 1 instruction may occur in several lines inside an n squared loop. It can add up to billions of wasted cycles.

[Reference](https://developerinsider.co/why-does-the-indexing-of-array-start-with-zero-in-c/)

