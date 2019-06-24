#include<bits/stdc++.h>
using namespace std;
int findlcs(string a,string b,int n,int m)
{
    int table[n+1][m+1];
    int ans=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0||j==0)
            table[i][j]=0;
            else if(a[i-1]==b[j-1])
            {
                table[i][j]=table[i-1][j-1]+1;
                ans=max(table[i][j],ans);
            }
            else
            {
            table[i][j]=max(table[i-1][j],table[i][j-1]);
            ans=max(table[i][j],ans);
            }
        }
    }
    return ans;
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    string a,b;
	    cin>>a;
	    cin>>b;
	    cout<<findlcs(a,b,n,m)<<endl;
	}
	return 0;
}
