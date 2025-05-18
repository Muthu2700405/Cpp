#include<iostream>
using namespace std;

void sort (int a[],int n ){
    int temp,j;
    for (int i=1; i<n;i++){
        int    key=a[i],j=i-1;
       while ( j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
         a[j + 1] = key;

      
       cout<<"\nphase : "<<i<<"\t";
    for (int k=0; k<n;k++)
        cout<<a[k]<<"\t";

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
