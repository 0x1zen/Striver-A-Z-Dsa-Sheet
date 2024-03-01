#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// check if last element is greater than first if yes count++
// check if nums[i-1]>nums[i] then count++
// if it is sorted.count would be still 1
// if it is sorted and rotated count would be still 1
// else in case of all elements are same in an array then count>1
// then return false
// agar ek se jyada baar break hua to false return karo
// nahi to true return karo
 bool check(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        if(nums[n-1]>nums[0]){
            count++;
        }
        return count<=1 ? true : false;
    }
int main()
{
 vector<int>nums{5,6,9,1,2};
 if(check(nums)==1){
    cout<<"true";
 }
 else{cout<<false;}
 return 0;
}