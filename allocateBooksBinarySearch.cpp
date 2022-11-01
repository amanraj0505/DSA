#include<iostream>
using namespace std;
bool isPossibleSolution(int arr[], int n, int m, int mid){
    int studentCount = 1;
    int pageSum = 0;
    bool ans = true;
    for(int i = 0;i<n;++i){
        if(pageSum + arr[i] <=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount > m || arr[i] > mid){
            ans =  false;
            }
            pageSum = 0;
            pageSum+=arr[i];
        }
    }
    return ans;
}

int allocateBooks(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    for(int i = 0;i<n;++i){
        sum+=arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(isPossibleSolution(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}
int main(){
    int arr[4] = {12,34,67,90};
    cout<<"Allocate Book Answer: "<< allocateBooks(arr, 4, 2)<<endl;
    return 0;
}