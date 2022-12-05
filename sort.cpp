#include<bits/stdc++.h>
using namespace std;

int bubbleSort(int arr[], int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[i]> arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]= temp;
            }
        }
    }
}
int printArr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr, n);
    printArr(arr, n);
    return 0;
}