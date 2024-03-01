#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,6,1,10,3};
    int largestElement=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]>largestElement){
            largestElement=arr[i];
        }
    }
    cout<<largestElement;
 return 0;
}