class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {

        int start = 0;
        int end = nums.size() - 1;
        int mid = start + end / 2;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        for (auto i = nums.begin(); i < nums.end(); i++)
        {

            temp = nums;
        }

        return temp[mid];
    }
};