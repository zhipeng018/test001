//
//  main.c
//  assignment2
//
//  Created by 王志鹏 on 03/10/2019.
//  Copyright © 2019 wangzhipeng. All rights reserved.
//
#include<stdio.h>
int main()
{
    int n,s=0;
    while(1)
    {
        scanf("%d",&n);
        s+=n;
        if(getchar()=='\n')break;
    }
    printf("sum=%d\n",s);
    return 0;
}
