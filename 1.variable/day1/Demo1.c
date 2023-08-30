//
// Created by 12645 on 2023/8/30.
//
#include <stdio.h>
// %d说明后面有一个整数要输出在这个位置上
/* scanf("%d",&price);
    要求scanf这个函数读入下一个整数。读到的结果赋值给变量例如proce
    注意变量前的&*/
int main(){
int price = 0;
printf("请输入数字");
scanf("%d",&price);
int change = 100 - price;
    printf("结果是%d\n",change);
    return 0;
}