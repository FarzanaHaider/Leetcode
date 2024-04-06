#include<bits/stdc++.h>
using namespace std;
# define opt() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
# define ll long long

int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;

        for(int i=0;i<nums.size();i++)
        {
            vector<int>v;
            int c=0;
            while(nums[i]!=0)
            {
                v.push_back(nums[i]%10);
                c++;
                nums[i]=nums[i]/10;
            }

            int m = *max_element(v.begin(),v.end());

            nums[i]=m;

            while((c-1)!=0)
            {
                nums[i]=nums[i]*10+m;
                c--;
            }

            sum+=nums[i];
        }

        return sum;

    }


    int main()
{
    opt();
    vector<int>nums={523,213};
    int result=sumOfEncryptedInt(nums);
    cout<<result;
}
