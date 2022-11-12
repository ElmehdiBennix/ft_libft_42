#include "libft.h"



int main(void)
{
    void *p;
    void *o;
    char **strs = malloc(24);
    void *r;

    // printf("adress of first array : %lu, \n %lu \n %lu \n %lu\n\n\n\n\n",&p, &o, &strs, &r);
    // printf(" parent strs arr : %lu\n",strs);
    //     printf("childs strs arr : %lu\n",strs + 0);
    // printf("ch strs arr : %lu\n",strs + 8);
    // printf("ch strs arr : %lu\n",strs + 16);

    int disp[2][4] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17}
    };
    int **********************y = malloc(32);
printf("adress of array : %lu\n",disp);
printf("adress of first sub array : %lu\n",&disp[0]);
printf("adress of second sub array : %lu\n",&disp[1]);
printf("adress of next 2d array : %lu %lu\n",sizeof(disp),sizeof(y) );

}