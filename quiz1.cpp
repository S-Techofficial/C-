// #include<bits/stdc++.h>
// using namespace std;

// #define Max 100;

// int main(){
//     int Max = 100;
//     cout << Max << endl;
//     return 0;
// }

// // Compilation Error


// #include <bits/stdc++.h>
// using namespace std;

// #define square(x) x*x

// int main(){
//     int x;
//     x = 36/square(6);
//     cout << x;
//     return 0;
// }

// // (36/6)*6 = 36


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     unsigned int x = -1;
//     int y=~0;
//     if(x==y)
//         cout << "same";
//     else
//         cout << "not same";
// }

// // When we assign unsigned int x = -1, -1 gets converted into it's 2's complement form and stored as 11111111 (bit-format in memory), which is the same as complementing all the bits of 0.


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    float c = 5.0;
//    cout << "Temperature in Fahrenheit is: " << (9/5)*c + 32;
//    return 0;
// }

// // Temperature in Fahrenheit is:37


// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     register int i=10;
//     int *ptr = &i;
//     cout << *ptr;
//     return 0;
// }
/* Theoretically according to the language specifications, register int variables are allocated directly on the CPU registers 
for fast-access. Thus, dereferencing it may lead to Compilation Error (no storage address on RAM present to which pointer should 
point to). In C compilers error is thrown, however in most C++ compilers, register keyword is deprecated and carry no meaning, 
implying variables allocated that way gets default specifier auto. Hence, it may seem to work in C++ compilers.
*/


// #include <bits/stdc++.h>
// using namespace std;

// int fun()
// {
//   static int num = 16;
//   return num--;
// }
 
// int main()
// {
//   for(fun(); fun(); fun())
//   cout<< fun();
//   return 0;
// }
/* 16-->15(Initialization) -->14(condition) prints 14 and then decrement to 13. static variables are accessible even after function 
calls ends hence, we can able to */


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   extern int i;
//   cout << i << " ";
//   {
//        int i = 10;
//        cout << i << " ";
//   }
// }
/* An extern variable is only declared. Hence, no actual memory gets allocated. Accessing it in the cout statement before definition 
is invalid, and thus Compilation Error is thrown. */



// #include<bits/stdc++.h>
// using namespace std;

// char *fun(){
//     static char arr[1024];
//     return arr;
// }
// int main(){
//     char *str = "geeksforgeeks";
//     strcpy(fun(),str);
//     str = fun();
//     strcpy(str, "geeksquiz");
//     cout << fun();
//     return 0;
// }
// // geeksquiz
/* The variable str initially was a string literal. Upon execution of str = fun(), str now points to a static character array, 
finally strcpy copies the "geeksquiz" onto the array pointed to by str.
NOTE: If we didn't assign str to an array (str = fun()), then it would have remained a string literal. A string literal (declared 
as: char *p="literal") is non-modifiable and would cause compilation error at strcpy.*/



// #include <bits/stdc++.h>
// using namespace std;

// int main() 
// { 
//   int x, y = 5, z = 5; 
//   x = y == z; 
//   cout << x; 
//   return 0; 
// }
// // x = (y==z) i.e 1



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i = 3;
//     cout << (++i)++;
//     return 0;
// }
// // Pre-increment gives value 4 and post-increment needs to loop again to that variable to assign value 5



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     cout << sizeof(printf("GeeksQuiz"));
//     return 0;
// }
/* sizeof(printf) returns the size of the return type of printf function, which is an integer, thus the value: 4. Any expression 
however inside sizeof operator never gets evaluated. Thus, "GeeksQuiz" never gets printed. sizeof determines the final data-type of 
the enclosed expression without ever evaluating it. */


 
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int a = 10, b = 20, c = 30;
//   if (c > b > a)
//     printf("TRUE");
//   else
//     printf("FALSE");
//   return 0;
// }
// // FALSE
/* > has left-to-right associativity. Hence, the expression c>b>a becomes (c>b)>a.
(c>b)>a => (30>20)>10 => 1>10 which is false.
NOTE: (30>20) yields 1, as > is a comparison operator returning a true/false (1/0) value.*/


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int x = 10;
//     int y = 20;
//     x += y += 10;
//     cout << x << " "<< y;
//     return 0;
// }
// // 40 30
/* += has right-to-left associativity. Hence, the expression x += y += 10 becomes x += (y += 10):
x += (y += 10) sets y = y + 10 ~ y = 30, thereafter
x += 30 ~ x = 40.*/


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//    int y = 0;
//    int x = (~y == 1);
//    cout << x;
//    return 0;
// }
// // 0
/* ~ is the bitwise-NOT operator. So the value of ~0 would be all 1s (in binary representation) which means decimal value of ~0 is not 1.
Therefore the result of comparison operator becomes 0.*/


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   char *s[] = { "knowledge","is","power"};
//   char **p;
//   p = s;
//   cout << ++*p << " ";
//   cout << *p++ << " ";
//   cout << ++*p << " ";

//   return 0;
// }
// // nowledge nowledge s
/* Let us consider the expression ++*p in first cout. Since precedence of prefix ++ and * is same, associativity comes into picture. 
*p is evaluated first because both prefix ++ and * are right to left associative. When we increment *p by 1, it starts pointing to 
second character of “knowledge”. Therefore, the first cout statement prints “nowledge”. Let us consider the expression *p++ in second 
cout . Since precedence of postfix ++ is higher than *, p++ is evaluated first. And since it’s a psotfix ++, old value of p is used in 
this expression. Therefore, second cout statement prints “nowledge”. In third cout statement, the new value of p (updated by second 
cout) is used, and third cout prints “s”.*/



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr[5];
//     // Assume base address of arr is 2000 and size of integer is 32 bit
//     printf("%u %u", arr + 1, &arr + 1);
 
//     return 0;
// }
// // 2004 2020
/* Name of array in C gives the address(except in sizeof operator) of the first element. Adding 1 to this address gives the address 
plus the sizeof(type) the array has. Applying the Address-of operator before the array name gives the address of the whole array. 
Adding 1 to this address gives the address plus the sizeof whole array.*/


// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int i;
//     int arr[5] = {1};
//     for (i = 0; i < 5; i++)
//         cout << arr[i] << " ";
//     return 0;
// }
// // 1 0 0 0 0
/* In C/C++, if we initialize an array with fewer members, all remaining members are automatically initialized as 0. */



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a[][] = {{1,2},{3,4}};
//     int i, j;
//     for (i = 0; i < 2; i++)
//         for (j = 0; j < 2; j++)
//             printf("%d ", a[i][j]);
//     return 0;
// }
// // Compilation Error. declaration of 'a' as multidimensional array must have bounds for all dimensions except the first



// #include <bits/stdc++.h>
// using namespace std;

// int fun(char *str1){
//     char *str2 = str1;
//     while(*++str1);
//     return(str1-str2);
// }

// int main(){
//     char *str = "GeeksQuiz";
//     cout <<fun(str);
//     return 0;
// }
// // 9
/* The function fun() basically counts number of characters in input string. Inside fun(), pointer str2 is initialized as str1. 
The statement while(*++str1); increments str1 till ‘\0’ is reached. str1 is incremented by 9. Finally the difference between str2 
and str1 is returned which is 9.*/



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     char str[20] = "GeeksQuiz";
//     cout << sizeof(str);
//     return 0;
// }
// // 20
/* Since, the size of the character array has already been explicitly provided, hence irrespective of the fact that the initialized 
string is smaller, sizeof will return it's actual size. i.e. 20 */



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	string s1="Hello";
// 	string s2="World";
	
// 	cout<<s1+s2<<endl;
	
// 	return 0;
// }
// // HelloWorld



// #include <bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int arri[] = {1, 2 ,3};
//     int *ptri = arri;
 
//     char arrc[] = {1, 2 ,3};
//     char *ptrc = arrc;
 
//     cout << "sizeof arri[] = " << sizeof(arri) << " ";
//     cout << "sizeof ptri = " << sizeof(ptri) << " ";
 
//     cout << "sizeof arrc[] = " << sizeof(arrc) << " ";
//     cout << "sizeof ptrc = " << sizeof(ptrc) << " ";
 
//     return 0;
// }
// // sizeof arri[] = 12 sizeof ptri = 4 sizeof arrc[] = 3 sizeof ptrc = 4 
/* Pointer variables on the other hand are all of same-size irrespective of the data-type they point to. The reason being pointers 
are used to store addresses, thus the data-type it points doesn't matter.*/



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
//     float *ptr1 = &arr[0];
//     float *ptr2 = ptr1 + 3;
 
//     cout << *ptr2 << " ";
//     cout << ptr2 - ptr1;
 
//    return 0;
// }
// // 90.5 3



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//  int var;  /*Suppose address of var is 2000 */
 
//  void *ptr = &var;
//  *ptr = 5;
//  cout << var << " " << *ptr;
              
//  return 0;
// }
// // Compilation error
/* Key point in the above snippet is de-referencing of void pointer. It should be noted that de-referencing of void pointer isn’t 
allowed because void is an incomplete data type. The correct way to assign value of 5 would be first to typecast void pointer and 
then use it. So instead of *ptr, one should use *(int *)ptr.*/



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int array[5][5];
//     cout<<(((void*)array==*array)&&(*array==array[0]));
//     return 0;
// }
// // 1
/* Given is a 2D array array[5][5]. array, *array, array[0] all point to the 1st element of the array.
Thus if Base Address of array is 2000:
array = 2000
*array = 2000
array[0] = 2000
So expression is something like (2000==2000 && 2000==2000) i.e. 1&&1 will return 1.*/



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	int a = 1, *b=&a, **c=&b;
// 	a = 4;
// 	**c = 5;
	
// 	cout<<a;
// 	return 0;
// }
// // 5
/* ** is the pointer to pointer */


// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     struct site
//     {
//         char name[] = "GeeksQuiz";
//         int no_of_pages = 200;
//     };
 
//     struct site *ptr;
//     cout << ptr->no_of_pages << " " << ptr->name <<endl;
//     return 0;
// }
// // Compilation Error
/* When we declare a structure or union, we actually declare a new data type suitable for our purpose. So we cannot initialize 
values as it is not a variable declaration but a data type declaration.*/



// struct {
// 	char name[30];
// 	int gender;
// 	struct addr locate;
// } person, *kd = &person;
/* *(kd -> name +2) is equivalent to accessing name character array, and then moving forward 2 bytes. (If a is character-array, 
then a+2 points to a[2]). Thus, finally we get *((*kd).name + 2). */



// #include <bits/stdc++.h>
// using namespace std;
 
// struct Test
// {
// 	char str[20];
// };
 
// int main()
// {
// 	struct Test st1, st2;
// 	strcpy(st1.str, "GeeksQuiz");
// 	st2 = st1;
// 	st1.str[0] = 'S';
// 	cout << st2.str;
// 	return 0;
// }
// //GeeksQuiz
/* Array members are deeply copied when a struct variable is assigned to another one. Thus a new independent copy of str is produced 
upon st2 = st1. Any changes to st2 thus has no effect on st1.*/



// #include <bits/stdc++.h>
// using namespace std;

// void fun(int *a)
// {
//     a = (int*)malloc(sizeof(int));
// }
  
// int main()
// {
//     int *p;
//     fun(p);
//     *p = 6;
//     cout << *p;
//     return 0;
// }
// // Runtime Error
/* Because of the uncertainty in dereferencing of the variable for invalid memory reference, the code produces a runtime error,i.e. 
Segmentation fault, in this case. */



// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int *p = (int*)malloc(sizeof(int));
 
//     p = NULL;
 
//     free(p);
// }
/* free() can be called for NULL pointer, so no problem with free function call. The problem is memory leak, p is allocated some memory 
which is not freed, but the pointer is assigned as NULL. The correct sequence should be following:*/



// #include <bits/stdc++.h>
// using namespace std;
 
// class Point
// {
// 	public:
// 		Point() { cout << "Normal Constructor called\n"; }
// 	    Point(const Point &t) { cout << "Copy constructor called\n"; }
// };

// int main()
// {
// 	Point *t1, *t2;
// 	t1 = new Point();
// 	t2 = new Point(*t1);
// 	Point t3 = *t1;
// 	Point t4;
// 	t4 = t3;
// 	return 0;
// }
// // Normal Constructor called
// // Copy constructor called  
// // Copy constructor called  
// // Normal Constructor called



// #include<bits/stdc++.h>
// using namespace std;

// class Test {
//     public:
//     Test(){cout << "Constructor called ";}
// };

// int main()
// {
//     Test *t = (Test *) malloc(sizeof(Test));
//     return 0;
// }
// // Empty
/* Unlike new, malloc() doesn't call the constructor. If we replace malloc() with new, the constructor is called. Malloc simply 
allocates memory equal to the requirement of the class and returns a void pointer.*/



// #include <bits/stdc++.h>
// using namespace std;
 
// int &fun()
// {
//     static int x = 10;
//     return x;
// }

// int main()
// {
//     fun() = 30;
//     cout << fun();
//     return 0;
// }
/* When a function returns by reference, it can be used as an lvalue. Since x is a static variable, it is shared among function calls 
and the initialization line static int x = 10; is executed only once. The function call fun() = 30, modifies x to 30. The next call 
cout << fun(); returns the modified value.*/



// #include <bits/stdc++.h>
// using namespace std;
 
// class Test
// {
//     static int x;
//     int *ptr;
//     int y;
// };
 
// int main()
// {
//     Test t;
//     cout << sizeof(t) << " ";
//     cout << sizeof(Test *) << endl;
//     return 0;
// }
// // 8 4
/* For a compiler where pointers take 4 bytes, the statement sizeof(Test *) returns 4 (size of the pointer ptr). The statement 
sizeof(t) returns 8. Since static is not associated with each object of the class, we get (8 not 12). */

