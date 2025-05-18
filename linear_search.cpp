#include<iostream>
using namespace std;
int lin(int a[],int n,int num){
    for(int i=0;i<n;i++){
        if (a[i]==num){
            return 1;
        }
    }
    return 0;

}
int main(){

    int n=10;
    int arr[n]={1,2,3,4,5,6,7,8,9,10};
    
    int search;
    cout<<"\nEnter the search elment  : ";
    cin>>search; 

   if ( lin(arr,n,search))
    cout<<"element found ";
else
    cout<<"element not found";
    return 0;
}
