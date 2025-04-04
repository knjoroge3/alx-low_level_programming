In C, an array is NOT a pointer, the variables we declare as arrays do not hold a memory address.

When we declare an array, we use a name to refer to it, but it is only a name. Array names are identifiers that identify the entire array object. They are not pointers to anything. That is why we can not change the value of a 'variable’ which is an array.

But, you can still use the name of the array in your code, and its value will be… the address of the first element of the array. Wait… WAT?

So what is happening here? If arrays are not pointers, why is it that the value of an array is the address of the first element of the same array. Isn’t this the definition of a pointer: “a variable which contains the address”? Well… YES, this is a pointer, but the variable a (the array) is NOT. This is why:

When the name of an array is used in an expression, the array type gets automatically implicitly converted to pointer-to-element type in almost all contexts (this is often referred to as “array type decay”). The resultant pointer is a completely independent temporary value, that is the address of the first element of the array.

There are two exceptions to this: when the array name is an operand of sizeof or unary & (address-of), the name of the array then refers to the array object itself.

sizeof

In the context of sizeof, the name of the array refers to the array object itself (composed of all its elements). Thus, sizeof an array will give you the amount of memory space used by all its elements.

&

In the context of &, the name of the array refers to the array object itself (composed of all its elements). So the address-of the array name will give you the address of the whole array, which is the same as the address of its first element.
