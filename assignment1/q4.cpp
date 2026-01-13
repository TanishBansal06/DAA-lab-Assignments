#include <iostream>
#include <climits>
using namespace std;
int main() {
    int arr[8] =  {-2, -5, 6, -2, -3, 1, 5, -6};
    int cur=0;
    int maxx = INT_MIN;
    for(int i=0;i<8;i++){
        cur += arr[i];
        maxx = max(cur,maxx);
        if(cur<0){
            cur=0;
        }
    }
    cout<<maxx<<endl;
    return 0;
}
