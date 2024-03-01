#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,6,1,10,3};
    int largestElement=arr[0];
    int secondLargest=-1;
    for(int i=1;i<5;i++){
        if(arr[i]>largestElement){
            secondLargest=largestElement;
            largestElement=arr[i];
        }
        else if(arr[i]<largestElement && arr[i]>secondLargest){
            secondLargest=arr[i];
        }
    }
    cout<<secondLargest;
 return 0;
}