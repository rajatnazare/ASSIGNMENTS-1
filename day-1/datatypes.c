2.PROGRAM TO EXPLAIN ALL DATATYPES INCLUDING SIGNED & UNSIGNED
#include <stdio.h>
int main()
{
printf("size of integer %d\n",sizeof(int));
printf("size of float %d\n",sizeof(float));
printf("size of character %d\n",sizeof(char));
printf("size of double %d\n",sizeof(double));
printf("size of long double %d\n",sizeof(long double));
printf("size of short int %d\n",sizeof(short int));
printf("size of long int %d\n",sizeof(long int));
printf("size of unsigned int %d\n",sizeof(unsigned int));
printf("size of signed int %d\n",sizeof(signed int));
return 0;
}
Signed & unsigned:
Signed :  It can Represent both Positive and Negative values & an int datatye is default signed.
>>different types of signed modifiers are:
1]signed char:
Memory size:1 byte
Range:-128 to 127
EXAMPLE:

#include<stdio.h>
int main()
{
    signed char C=-129;
    printf("%d",C);//it wiil print output as 127 because in a range negative values are in anti-clock wise direction. 
}
2]signed short
Memory size:2 byte
Range: −32,768 to 32,767

3]signed int:
Memory size:2 byte
Range: −32,768 to 32,767

4]signed short int:
Memory size:2 bye
Range: −32,768 to 32,767
EXAMPLE:
#include<stdio.h>
int main()
{
    signed short int b=1234;// 1234 value is given the range so it will print 1234
    printf("%u",b);
    return 0;
}


Unsigned :
unsigned stores only  positive values.
Types of unsigned:
1]unsigned char:
Memory size:1 bytes
Range:0 to 255.

EXAMPLE:
#include <stdio.h>
int main()
{
 int chr = 97;
    unsigned char i = chr;
    printf("unsigned char: %c\n", i);
  return 0;
}
2]unsigned int:
Memory size:2 bytes
Range:0 to 65535
EXAMPLE:
#include <stdio.h>
 int main()
{
    unsigned int a=97;
    printf("%u",a);
    return 0;
}
