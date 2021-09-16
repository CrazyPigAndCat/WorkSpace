/*
 * @Author: your name
 * @Date: 2021-09-03 10:52:43
 * @LastEditTime: 2021-09-06 09:58:53
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /WorkSpace/C/C基础/9.c
 */
#include <stdio.h>
void printfArr(int* arr,int arrSize){
    for(int i=0;i<arrSize;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int arr[]={-70380,-14850,4457,7,-2845,-91,-62041,185,3,9,-40380};
    int arrSize=sizeof(arr)/sizeof(arr[0]);
    int index,temp;
    for(int i=0;i<arrSize;i++){
        for(int j=1;j<arrSize;j++){
            if(arr[j-1]>arr[j]){
                temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    printfArr(arr,arrSize);
    return 0;
}

