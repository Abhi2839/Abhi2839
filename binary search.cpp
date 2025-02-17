// You are using GCC
#include<stdio.h>
int check(int l,int r,int arr[],int key){
    while(r>=l){
        int mid=l+(r-l)/2;
        if(arr[mid]==key)
            return mid;
      if(key>arr[mid]){
          l=mid+1;
        }
        else
        r=mid-1;
    }
    return -1;
}
int main(){
    int a=8;
    int arr[8]={10,20,30,40,50,60,70,80};
    int key =80;
    int check1=check(0,a-1,arr,key);
    if(check1!=-1)
    printf("%d %d",check1,key);
    else
    printf("Key not found");
}

     
