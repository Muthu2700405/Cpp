#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int a[],int low,int high){
     int pivot = a[high];
     int i=low;
     for (int j=low;j<high;j++){
        if (a[j]<pivot){
            swap(&a[i],&a[j]);
            i++;
           } 
          }
    swap(a[i+1],a[high]);
    return i+1;
}
void qsort (int a[],int low, int high ){
    if (low<high){
    int pi= partition(a,low,high);
    qsort(a,low,pi-1);
    qsort(a,pi+1,high);
    }
}

int main(){
    int n;
    cout<<"Enter the size of  the array  :\t"; 
    cin>>n;

    int arr[n];
    cout<<"Enter array elements : \n";
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are : \t";
    for (int i=0; i<n;i++){
        cout<<arr[i]<<"\t";
    }
    qsort(arr,0,n-1);
    cout<<"sorted Array elements are : \t";
    for (int i=0; i<n;i++){
        cout<<arr[i]<<"\t";
    }

}