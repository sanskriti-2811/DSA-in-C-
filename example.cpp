#include <iostream>
#include <vector>
using namespace std;

int minimumTime(int N, int cur, int *pos, int *time)
{
    vector<int> ans;

    int first;
    int second;
    int temp;
    for (int i = 0; i < N; i++)

    {    pos[i]++;
        for (int j = 0; j < N; j++)
        {
             time[j]++;
           
        }
        temp = abs(cur-pos[i])*time[j];
            cout << "temp ki value " << temp << " " << endl;}
    }
         


       

        // ans.push_back(temp);
        // int res = ans[0];
        // for (int i = 1; i < ans.size(); i++)
        // {
        //     res = min(res, ans[i]);
        //     return res;
        // }
    

    int main()

    {
        int N = 3, cur = 4;
        int pos[] = {1, 5, 6};
        int time[] = {2, 3, 1};
        cout << minimumTime(N, cur, pos, time) << endl;
        
    }