#include <stdio.h>
int main() 
{   
    char charType;       /* 변수 charType를 문자형 char로 선언 */
    int integerType;     /* 변수 integerType를 정수형 int로 선언 */
    float floatType;     /* 변수 floatType를 실수형 float로 선언 */
    double doubleType;   /* 변수 doubleType를 실수형 double로 선언 */
    
    printf("Size of char: %ld byte\n",sizeof(charType));       /* charType은 char형이기에 1byte */
    printf("Size of int: %ld bytes\n",sizeof(integerType));    /* integerType은 int형이기에 4bytes */
    printf("Size of float: %ld bytes\n",sizeof(floatType));    /* floatType은 float형이기에 4bytes */
    printf("Size of double: %ld bytes\n",sizeof(doubleType));  /* doubleType은 double형이기에 8bytes */

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n",sizeof(char));           /* char형은 1byte */
    printf("Size of int: %ld bytes\n",sizeof(int));            /* int형은 4bytes */
    printf("Size of float: %ld bytes\n",sizeof(float));        /* float형은 4bytes */
    printf("Size of double: %ld bytes\n",sizeof(double));      /* double형은 8bytes */

    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n",sizeof(char*));         /* char의 주소는 4bytes */
    printf("Size of int*: %ld bytes\n",sizeof(int*));          /* int의 주소는 4bytes */
    printf("Size of float*: %ld bytes\n",sizeof(float*));      /* float의 주소는 4bytes */
    printf("Size of double*: %ld bytes\n",sizeof(double*));    /* double의 주소는 4bytes */

    printf("\n   [-----  [ChoiSuzy]  [2021024135]  -----]");

    return 0; 
}
