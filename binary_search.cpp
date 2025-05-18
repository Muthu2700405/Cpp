#include<iostream>
using namespace std;
int bi(int arr[],int n,int num){
    int mid , low ,high;
    low=0;
    high=n-1;
    while (low<=high){
        mid=low+(high-low)/2;
        if (num==arr[mid]){
            return mid;
        }
        else if (num >arr[mid]){
            low=mid+1;
            mid=low+(high-low)/2;
        }
        else{
            high=mid-1;
            mid=low+(high-low)/2;
        }
    }
    return -1;

}
int main(){

    int n=10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    
    int search;
    cout<<"\nEnter the search elment  : ";
    cin>>search; 

   if ( bi(arr,n,search)==-1)
    cout<<"element not found ";
else
    cout<<"element  found at"<<bi(arr,n,search);
    return 0;
}
