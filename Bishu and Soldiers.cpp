//Phoenix_RK



/*
https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/bishu-and-soldiers/description/




Bishu went to fight for Coding Club. There were N soldiers with various powers. There will be Q rounds to fight and in each round Bishu's power will be varied. With power M, Bishu can kill all the soldiers whose power is less than or equal to M(<=M). After each round, All the soldiers who are dead in previous round will reborn.Such that in each round there will be N soldiers to fight. As Bishu is weak in mathematics, help him to count the number of soldiers that he can kill in each round and total sum of their powers.

1<=N<=10000

1<=power of each soldier<=100

1<=Q<=10000

1<=power of bishu<=100

SAMPLE INPUT 
7
1 2 3 4 5 6 7
3
3
10
2
SAMPLE OUTPUT 
3 6
7 28
2 3
Explanation
In first round bhishu power is 3

So there are 3 soldiers whose power is <=3 and the sum of their power is 1+2+3=6

therefore ans= 3 6

same for the next round

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q;
    cin>>n;
    vector<int> a(n);
    int sum[n];
    for(int i=0;i<n;i++)
             cin>>a[i];    

    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
            if(i==0)
                sum[i]=a[i];
             else
                sum[i]=sum[i-1]+a[i];
    }
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int power;
        cin>>power;
        int ind=upper_bound(a.begin(),a.end(),power)-a.begin();
    
        cout<<ind<<" "<<sum[ind-1]<<endl;

    }



    return 0;
}
