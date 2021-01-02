class Solution
{
public:
    int numPairsDivisibleBy60(vector<int> &time)
    {
        vector<int> arr(60, 0);

        for (int i = 0; i < time.size(); i++)
        {
            arr[time[i] % 60]++;
        }
        int result = 0;
        if (arr[0])
        {
            int n = arr[0];
            // int temp =0;
            // while(n){
            //     temp+=n;
            //     n--;
            // }
            result += n * (n - 1) / 2;
        }
        if (arr[30])
        {
            int n = arr[30];

            result += n * (n - 1) / 2;
        }
        cout << arr[0] << " " << result << endl;
        for (int i = 1; i < 30; i++)
        {
            //     cout<<i<<": "<<arr[i]<<" "<<arr[60-i]<<endl;
            if (arr[i] && arr[60 - i])
            {
                //      cout<<"Hit"<<result<<" "<<arr[i]<<" "<<arr[60-i]<<endl;
                result = result + (arr[i] * arr[60 - i]);
            }
        }

        return result;
    }
};