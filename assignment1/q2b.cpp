#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &arr,int l,int mid,int h){
    vector<int> temp;
    int i=l;
    int j=mid+1;
    while(i<=mid && j<=h){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=h){
        temp.push_back(arr[j]);
        j++;
    }
    for(int i=0;i<temp.size();i++){
        arr[i+l]=temp[i];
    }
}
void mergesort(vector<int> &arr,int l,int h){
    if(l<h){
        int mid = (l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,mid,h);
    }
}
int main() {
    vector<int> arr = {38, 27, 43,3, 9, 82, 10};
    mergesort(arr,0,arr.size()-1);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
}
