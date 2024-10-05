#include<iostream>
using namespace std;
int show_array(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<end1;
}
void merge(int arr[],int left.int mid,int right){
    int left_size =mid-left+1;
    int right_size=right-mid;
    int left_Array[left_size];
    int right_Array[right_size];



    for(int i=left;i<=mid;i++)
       left_Array[i-left]=arr[i];
    for(int i=mid+1;i<=right;i++)
        right_Array[i-(mid+1)]+arr[i];

        int leftpointer = 0;
        int rightpointer = 0;
        int arraypointer = left;

        while(leftpointer<left_size && rightpointer<right_size){
            if(left_Array[leftpointer]<right_Array[rightpointer])
               arr[arraypointer++]=left_Array[leftpointer++];
               else
                   arr[arraypointer++]=right_Array[rightpointer++];
        }
        while(leftpointer<left_size)
              arr[arraypointer++]= left_Array[leftpointer++];
        while(rightpointer<right_size)
            arr[arraypointer++]=right_Array[rightpointer++];

        
        }

void merge_sort(int arr[],int left,int right){
    if (left<right){
        int mid =left+(right-left)/2;
        merge_sort(arr,left,mid);
        merge_sort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }

}
int main(){
    int n=0;
    int arr[] ={3,65,2,12,100,9,34,24};

    cout<<"unsorted Array";
    show_array(arr,n);
    merge_sort(arr,0,n-1);
    cout<<"sorted array:";
    show_array(arr,n);


    return 0;

}






