//
// Created by mac on 2020/1/29.
//022逆序存放数据
//
#include "stdio.h"

int main()
{
    int arr[5],i,now[5];
    printf("Please input arrary a :\n");
    i = 0;
    while(1)
    {
        scanf("%d",&arr[i++]);
        if(i > 4)
            break;
    };
    printf("\narray a :\n");
    for (int j = 0; j < 5; ++j) {
        now[4-j] = arr[j];
        printf("%d ",arr[j]);
    }
    printf("\nNow array a :\n");
    for (int k = 0; k < 5; ++k) {
        printf("%d ",now[k]);
    }
    return 0;
}