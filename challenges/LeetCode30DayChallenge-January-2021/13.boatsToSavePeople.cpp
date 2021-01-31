class Solution
{
public:
    int numRescueBoats(vector<int> &people, int limit)
    {
        sort(people.begin(), people.end());
        int result = 0;

        int right = people.size() - 1;
        int left = 0;

        while (left < right)
        {
            if (people[right] + people[left] > limit)
            {
                right--;
                result++;
            }
            else
            {
                right--;
                left++;
                result++;
            }
        }
        if (left == right)
            result++;

        return result;
    }
};