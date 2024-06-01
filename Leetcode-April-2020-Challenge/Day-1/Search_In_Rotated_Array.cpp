#include <bits/stdc++.h>

using namespace std;

int find(vector<int>& arr,int start,int end, int target)
{
    int mid = start + (end-start)/2;

    if(start>end)
    {
        return -1;
    }
    if(arr[mid] == target)
    {
        return mid;
    }
    else if(arr[start]<=arr[mid])
    {
        if(target>=arr[start] && target<arr[end])
        {
            return find(arr,start,mid-1,target);
        }else
        {
            return find(arr,mid+1,end,target);
        }
    }else
    { //arr[mid]<=arr[end]
        if(target>=arr[mid] && target < arr[end])
        {
            return find(arr,mid+1,end,target);
        }else
        {
            return find(arr,start,mid-1,target);
        }
        
    }

}

int search(vector<int>& nums, int target) 
{
      
      int start = 0;
      int end = nums.size();
    
    
    return find(nums,start,end-1,target);
    
}

int main()
{
    vector<int> num = {4,5,6,7,0,1,2};
    int target = 0;
    cout<<search(num,target);

}