#include<iostream>
using namespace std;
 int getPivot(int arr[], int n){
    int s=0, e= n-1;
    int mid = s+ (e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid +1;
        }
        else{
            e = mid;
        }
        mid = s+ (e-s)/2;
    }
    return s;
 }
int binarySearch(int arr[], int start, int end, int key){
    int mid = start + (end-start)/2;
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid +1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int findPosition(int arr[], int n, int k){
    int pivot  = getPivot(arr, n);
    if(k>=arr[pivot] && k<= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot-1, k);
    }
}
 int main(){
    int arr[5] = {8,10,17,1,3};
    cout<< "Element Index is: "<<findPosition(arr, 5, 17)<<endl;
    return 0;
 }