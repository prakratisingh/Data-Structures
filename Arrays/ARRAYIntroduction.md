ARRAYS. 
-------
An array is a collection of similar data elements. These data elements have same data types.
The elements of array are stored in a consecutive memory locations and are referenced by an index(subscript). 
The subscript is an ordinal number which is used to identify the element of an array. 

BASIC ARRAY OPERATIONS
----------------------
Traversal - This operation is used to print the elements of the array.
Insertion - It is used to add an element at a particular index.
Deletion - It is used to delete an element from a particular index.
Search - It is used to search an element using the given index or by the value.
Update - It updates an element at a particular index.

Time complexity of these operations:
              BEST         WORST
Traversal -   O(1)         O(1)
Insertion -   O(n)         O(n)
Deletion -    O(n)         O(n)
Search -      O(n)         O(n)

Space complexity for worst case is O(n).

ADVANTAGES ARRAY - 1. Many elements of same data type can be accessed under the same variable.
2. Traversal is simple as we need to just know the base address of each element.
3. Any element can be accessed using its index.

DISADVANTAGES ARRAY - 1.Homogenous, hence elements of multiple data types cannot be stored. 
2. Static memory allocation, hence size cannot be altered. 

2D ARRAYS
---------
It can be defined as an array of arrays. It is organised as a matrix which comprises of rows and columns. 

Declaration of 2D array - int arr[row][column]

Mapping 2D array:
----------------
Row major - In row major ordering all the rows of the 2D array are stored in the memory contiguously. 

![](image.png)

Column major - In row major ordering all the columns of the 2D array are stored in the memory contiguously.

![](image.png)

