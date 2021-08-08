
3.PROGRAM TO EXPLAIN ALL OPEARTORS USING DIFFERENT DATATYPES..
#include <stdio.h>  
int main()  
{ 
    int a=10,b=5,c=0,d=1,res;
    // Arithmatic opeartor
    printf("addition=%d\n",a+b);
    printf("subtraction=%d\n",a-b);
    printf("multiplication=%d\n",a*b);
    printf("division=%d\n",a/b);
    printf("modulus=%d\n",a%b);
    //Relational opeartor
    printf("%d\n",a<b);
    printf("%d\n",a>b);
    printf("%d\n",a==b);
    printf("%d\n",a!=b);
    //increment and decrement operator
    printf("post increment %d\n",a++);
    printf("post decrement %d\n",a--);
    printf("pre increment %d\n",++a);
    printf("pre decrement %d\n",--a);
    // bitwise operator
    printf("and operator=%d\n",c&d);
    printf("or opeartor=%d\n",c|d);
    printf("xor opeartor=%d\n",c^d);
// logical opearator
printf(" logical and operator=%d\n",c&&d);
printf("logical or operator=%d\n",c||d);
//conditional opearator
res= (a<b) ? a:b;
printf(“conditional operator =%d\n”,res);
    
    return 0;
}

