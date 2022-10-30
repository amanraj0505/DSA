#include<iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int ans = -1;
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key){
    int ans = -1;
    int start = 0, end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
int main(){
    int arr[9] = {1,2,3,3,3,4,5,6,7};
    cout<<"First occurence of 3 is "<<firstOcc(arr, 9,3)<<endl; 
    cout<<"First occurence of 3 is "<<lastOcc(arr, 9,3)<<endl; 
}