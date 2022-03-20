#include <stdio.h>
int main() 
{
    int i;        /* i를 정수형으로 선언 */
    int *ptr;     /* ptr를 정수형으로 선언 */
    int **dptr;   /* dptr를 정수형으로 선언 */

    i = 1234;     /* i의 값에 10 저장 */

    printf("[checking values before ptr = &i] \n"); 
    printf("value of i == %d\n", i);          /* i의 값은 1234로 저장함 */
    printf("address of i == %p\n", &i);       /* i의 주소 */
    printf("value of ptr == %p\n", ptr);      /* ptr의 값 */
    printf("address of ptr == %p\n", &ptr);   /* ptr의 주소 */


    ptr = &i;   /* ptr is now holding the address of i */

    printf("\n[checking values after ptr = &i] \n"); 
    printf("value of i == %d\n", i);          /* i의 값은 1234 */
    printf("address of i == %p\n", &i);       /* i의 주소 */
    printf("value of ptr == %p\n", ptr);      /* ptr의 값은 i의 주소 */
    printf("address of ptr == %p\n", &ptr);   /* ptr의 주소 */
    printf("value of *ptr == %d\n", *ptr);    /* ptr은 i의 주소이고 역참조한 ptr의 값은 i의 값 */

    dptr = &ptr;     /* dptr is now holding the address of ptr */

    printf("\n[checking values after dptr = &ptr] \n"); 
    printf("value of i == %d\n", i);             /* i의 값은 1234 */
    printf("address of i == %p\n", &i);          /* i의 주소 */
    printf("value of ptr == %p\n", ptr);         /* ptr의 값은 i의 주소 */
    printf("address of ptr == %p\n", &ptr);      /* ptr의 주소 */ 
    printf("value of *ptr == %d\n", *ptr);       /* ptr의 값은 i의 주소이고 역참조한 ptr의 값은 i의 값 */
    printf("value of dptr == %p\n", dptr);       /* dptr의 값은 ptr의 주소 */
    printf("address of dptr == %p\n", &dptr);    /* dptr의 주소 */ 
    printf("value of *dptr == %p\n", *dptr);     /* dptr의 값은 ptr의 주소이고 역참조한 dptr의 값은 ptr의 값 */ 
    printf("value of **dptr ;== %d\n", **dptr);  /* dptr의 값은 ptr의 주소이고 역참조한 dptr는 ptr의 값 , 역참조한 ptr는 i의 값인 1234임 */

    *ptr = 7777;        /* changing the value of *ptr */  

    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);             /* *ptr이 7777로 바뀌었다는 것은 i의 값도 7777로 바뀜 */
    printf("value of *ptr == %d\n", *ptr);       /* *ptr이 7777로 바뀜 */
    printf("value of **dptr == %d\n", **dptr);   /* *ptr이 7777로 바뀌었다는 것은 i의 값인 **dptr도 7777로 바뀜 */

    **dptr = 8888;      /* changing the value of **dptr */ 

    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);             /* *dptr이 8888로 바뀌었다는 것은 i의 값도 8888로 바뀜 */
    printf("value of *ptr == %d\n", *ptr);       /* *dptr이 8888로 바뀌었다는 것은 *ptr도 8888로 바뀜 */
    printf("value of **dptr == %d\n", **dptr);   /* **dptr이 8888로 바뀜 */
    
    printf("\n   [-----  [ChoiSuzy]  [2021024135]  -----]");

    return 0;
 }