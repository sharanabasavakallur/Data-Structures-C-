The C++ Standard Template Library(STL)

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. Working knowledge of template classes is a prerequisite for working with STL.

Templates in c++
A template is a simple yet very powerful tool in C++. The simple idea is to pass the data type as a parameter so that we don’t need to write the same code for different data types. For example, a software company may need to sort() for different data types. Rather than writing and maintaining multiple codes, we can write one sort() and pass the datatype as a parameter. 

C++ adds two new keywords to support templates: ‘template’ and ‘type name’. The second keyword can always be replaced by the keyword ‘class’.

How Do Templates Work?
Templates are expanded at compiler time. This is like macros. The difference is, that the compiler does type-checking before template expansion. The idea is simple, source code contains only function/class, but compiled code may contain multiple copies of the same function/class. 

for examples(refer 7stl.cpp line-->1-60)


The C++ Standard Template Library (STL) is a collection of algorithms, data structures, and other components that can be used to simplify the development of C++ programs. The STL provides a range of containers, such as vectors, lists, and maps, as well as algorithms for searching, sorting and manipulating data.

One of the key benefits of the STL is that it provides a way to write generic, reusable code that can be applied to different data types. This means that you can write an algorithm once, and then use it with different types of data without having to write separate code for each type.

The STL also provides a way to write efficient code. Many of the algorithms and data structures in the STL are implemented using optimized algorithms, which can result in faster execution times compared to custom code.

Some of the key components of the STL include:
1. Containers: The STL provides a range of containers, such as vector, list, map, set, and stack, which can be used to store and manipulate data.
2. Algorithms: The STL provides a range of algorithms, such as sort, find, and binary_search, which can be used to manipulate data stored in containers.
3. Iterators: Iterators are objects that provide a way to traverse the elements of a container. The STL provides a range of iterators, such as forward_iterator, bidirectional_iterator, and random_access_iterator, that can be used with different types of containers.
4. Function Objects: Function objects, also known as functors, are objects that can be used as function arguments to algorithms. They provide a way to pass a function to an algorithm, allowing you to customize its behavior.
5. Adapters: Adapters are components that modify the behavior of other components in the STL. For example, the reverse_iterator adapter can be used to reverse the order of elements in a container.

By using the STL, you can simplify your code, reduce the likelihood of errors, and improve the performance of your programs.

STL has 4 components:

Algorithms
Containers
Functors
Iterators
1. Algorithms
The header algorithm defines a collection of functions specially designed to be used on a range of elements. They act on containers and provide means for various operations for the contents of the containers.

    Algorithm:
1. Sorting
Sorting is one of the most basic functions applied to data. It means arranging the data in a particular fashion, which can be increasing or decreasing. There is a builtin function in C++ STL by the name of sort(). 
This function internally uses IntroSort. In more details it is implemented using hybrid of QuickSort, HeapSort and InsertionSort.By default, it uses QuickSort but if QuickSort is doing unfair partitioning and taking more than N*logN time, it switches to HeapSort and when the array size becomes really small, it switches to InsertionSort. 

The prototype for sort is : 

sort(startaddress, endaddress)

startaddress: the address of the first 
              element of the array
endaddress: the address of the next 
            contiguous location of the 
            last element of the array.
So actually sort() sorts in the 
range of [startaddress,endaddress)

Examples..(pg:60 to 80)


2. Searching
Binary search is a widely used searching algorithm that requires the array to be sorted before search is applied. The main idea behind this algorithm is to keep dividing the array in half (divide and conquer) until the element is found, or all the elements are exhausted.
It works by comparing the middle item of the array with our target, if it matches, it returns true otherwise if the middle term is greater than the target, the search is performed in the left sub-array. 
If the middle term is less than the target, the search is performed in the right sub-array.

The prototype for binary search is : 

binary_search(startaddress, 
              endaddress, valuetofind)
Parameters :
startaddress: the address of the first 
              element of the array.
endaddress: the address of the next contiguous 
            location of the last element of the array.
valuetofind: the target value which we have 
             to search for.
Returns :
true if an element equal to valuetofind is found, else false.

Example(80 to 144)

3. Important STL Algorithms
For all those who aspire to excel in competitive programming, only having a knowledge about containers of STL is of less use till one is not aware what all STL has to offer. 
STL has an ocean of algorithms, for all < algorithm > library functions : Refer here.
Some of the most used algorithms on vectors and most useful one’s in Competitive Programming are mentioned as follows :

Non-Manipulating Algorithms

1.sort(first_iterator, last_iterator) – To sort the given vector.
2.sort(first_iterator, last_iterator, greater<int>()) – To sort the given container/vector in descending order
3.reverse(first_iterator, last_iterator) – To reverse a vector. ( if ascending -> descending  OR  if descending -> ascending)
4.*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
5.*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
6.accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements

Example(145 to 210)

7.count(first_iterator, last_iterator,x) – To count the occurrenceof x in vector
8.find(first_iterator, last_iterator, x) – Returns an iteratoto the first occurrence of x in vector and points to last addresof vector ((name_of_vector).end()) if element is not present ivector.

Example:(213 to 245)

9.lower_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last) which         has a value not less than ‘x’.
10.upper_bound(first_iterator, last_iterator, x) – returns an iterator pointing to the first element in the range [first,last)                  which has a value greater than ‘x’. 

Example(245 to 285)

Some Manipulating Algorithms
11.arr.erase(position to be deleted) – This erases selected element in vector and shifts and resizes the vector elements accordingly.
12.arr.erase(unique(arr.begin(),arr.end()),arr.end()) – This erases the duplicate occurrences in sorted vector in a single line.

Example(286 to 319)

13.next_permutation(first_iterator, last_iterator) – This modified the vector to its next permutation.
14.prev_permutation(first_iterator, last_iterator) – This modified the vector to its previous permutation. 

Example(320-360)

15.distance(first_iterator,desired_position) – It returns the distance of desired position from the first iterator.This function               is very useful while finding the index. 

Example(360 to 380)

4. Useful Array algorithms
From C++11 onwards, some new and interesting algorithms are added in STL of C++. These algorithms operate on an array and are useful in saving time during coding and hence useful in competitive programming as well. 

all_of() :This function operates on whole range of array elements and can save time to run a loop to check each elements one by one. It checks for a given property on every element and returns true when each element in range satisfies specified property, else returns false. 
Example(385 to 408)

any_of() :This function checks for a given range if there’s even one element satisfying a given property mentioned in function. Returns true if at least one element satisfies the property else returns false. 
Example:(410 to 434)

none_of() :This function returns true if none of elements satisfies the given condition else returns false.
Example:(435 to 457) 

copy_n() :copies one array elements to new array. This type of copy creates a deep copy of array. This function takes 3 arguments, source array name, size of array and the target array name. 
Example:(458 to 488)

iota() :This function is used to assign continuous values to array. This function accepts 3 arguments, the array name, size, and the starting number. 
Example:(490 to 516)



5. Partition Operations
C++ has a class in its STL algorithms library which allows us easy partition algorithms using certain inbuilt functions. Partition refers to act of dividing elements of containers depending upon a given condition. 
Partition operations :
1. partition(beg, end, condition) :- This function is used to partition the elements on basis of condition mentioned in its arguments.
2. is_partitioned(beg, end, condition) :- This function returns boolean true if container is partitioned else returns false.
Example(520 to 576)

3. stable_partition(beg, end, condition) :- This function is used to partition the elements on basis of condition mentioned in its arguments in such a way that the relative order of the elements is preserved..
4. partition_point(beg, end, condition) :- This function returns an iterator pointing to the partition point of container i.e. the first element in the partitioned range [beg,end) for which condition is not true. The container should already be partitioned for this function to work.
Example(578 to 628)

5. partition_copy(beg, end, beg1, beg2, condition) :- This function copies the partitioned elements in the different containers mentioned in its arguments. It takes 5 arguments. Beginning and ending position of container, beginning position of new container where elements have to be copied (elements returning true for condition), beginning position of new container where other elements have to be copied (elements returning false for condition) and the condition. Resizing new containers is necessary for this function.
Example(630 to 681)


Numeric
valarray class:
C++98 introduced a special container called valarray to hold and provide mathematical operations on arrays efficiently.

It supports element-wise mathematical operations and various forms of generalized subscript operators, slicing and indirect access.
As compare to vectors, valarrays are efficient in certain mathematical operations than vectors also.
Public member functions in valarray class : 
--apply() :- This function applies the manipulation given in its arguments to all the valarray elements at once and returns a new valarray with manipulated values. 
--sum() :- This function returns the summation of all the elements of valarrays at once. 
--min() :- This function returns the smallest element of valarray. 
--max() :- This function returns the largest element of valarray. 
--shift() :- This function returns the new valarray after shifting elements by the number mentioned in its argument. If the number is positive, left-shift is applied, if number is negative, right-shift is applied. 6. cshift() :- This function returns the new valarray after circularly shifting(rotating) elements by the number mentioned in its argument. If the number is positive, left-circular shift is applied, if number is negative, right-circular shift is applied.
--swap() :- This function swaps one valarray with other. 

Examples(642 to 842)

Containers-->