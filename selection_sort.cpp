#include<iostream>
using namespace std;

void sort (int a[],int n ){
    int temp;
    for (int i=0; i<n-1;i++){
        int min_idx=i;
       for (int j=i+1; j<n;j++){
        if (a[min_idx]>a[j]){
            min_idx=j;
        }
        }
        temp=a[min_idx];
        a[min_idx]=a[i];
        a[i]=temp;
    }   
        
    cout<<"\nSorted Array elements are : \t";
    for (int i=0; i<n;i++)
        cout<<a[i]<<"\t";
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
    sort(arr,n);

}
