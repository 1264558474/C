//
// Created by 12645 on 2023/8/30.
//
#include <stdio.h>
// %d˵��������һ������Ҫ��������λ����
/* scanf("%d",&price);
    Ҫ��scanf�������������һ�������������Ľ����ֵ����������proce
    ע�����ǰ��&*/
int main(){
int price = 0;
printf("����������");
scanf("%d",&price);
int change = 100 - price;
    printf("�����%d\n",change);
    return 0;
}