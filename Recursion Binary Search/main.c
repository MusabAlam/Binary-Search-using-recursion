#include <stdio.h>
int binarySearch(int a[],int l,int r,int key){
    int mid;
    if(l>r){
         return -1;
    }
    mid=(l+r)/2;
    if(l<=r){

        if (a[mid]==key){
            return mid;
        }
        if (a[mid]>key){
            binarySearch (a,l,mid-1,key);
        }
        else{
            binarySearch(a,mid+1,r,key);
        }
    }



}
void main(){
    int size,key,n;
    printf("Enter size of an array: ");
    scanf("%d",&size);
    int a[size];
     for (int i=0;i<size;i++){
        printf("Enter list of numbers that you want to sort: %d: ", i+1);
        scanf("%d",&a[i]);
     }
    for (int i=0;i<size;i++){
        printf("%d \n",a[i]);
    }
    printf("Enter the element that you want to search: ");
    scanf("%d",&key);
    printf("The number to search is %d \n", key);
    int i=binarySearch(a,0,size-1,key);
    if(i!=-1){
        printf("Element found at index %d",i);
    }
    else {
        printf("Element not found");
    }

}
