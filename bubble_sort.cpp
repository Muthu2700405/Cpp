#include<iostream>
using namespace std;
int sort (int *a,int n ){
    int temp,flag;
    for (int i=0; i<n-1;i++){
        flag=0;
        for (int j=0; j<n-1-i;j++){
            if (*(a+j)>*(a+j+1)){
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
            else{
                flag++;
            }
        }
    if (flag==n-1)
        break;   
    return 0;    
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
    cout<<"\nSorted Array elements are : \t";
    for (int i=0; i<n;i++){
        cout<<arr[i]<<"\t";
    }

}
