#include <iostream>
using namespace std;

int main() {
   int arr[10] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
   int l=0;
   int h=9;
   int tar=23;
   while(l<=h){
       int mid = (l+h)/2;
       if(arr[mid]==tar){
           cout<<"target is found at index: "<<mid<<endl;
           break;
       }
       else if(arr[mid]>tar){
           h=mid-1;
       }
       else{
           l=mid+1;
       }
   }
}
