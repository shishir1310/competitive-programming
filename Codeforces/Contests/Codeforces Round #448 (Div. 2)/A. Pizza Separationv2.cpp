#include<bits/stdc++.h>
using namespace std;

#define pii                   pair<int,int>
#define fs                    first
#define sc                    second
#define hi                    cout<<"****"<<endl;
#define mod                   1000000007
#define inf                   INT_MAX
#define pi                    acos(-1.0)
#define ll                    long long int

#define sf                    scanf
#define pf                    printf
#define pcase(x)              printf("Case %d: ",x)
#define sf1(a)                scanf("%d",&a)
#define sf2(a,b)              scanf("%d %d",&a,&b)
#define sf3(a,b,c)            scanf("%d %d %d",&a,&b,&c)
#define pf1(a)                printf("%d\n",a);
#define pf2(a,b)              printf("%d %d\n",a,b)
#define pf3(a,b,c)            printf("%d %d %d\n",a,b,c)
#define sf1ll(a)              scanf("%lld",&a)
#define sf2ll(a,b)            scanf("%lld %lld",&a,&b)
#define sf3ll(a,b,c)          scanf("%lld %lld %lld",&a,&b,&c)
#define pf1ll(a)              printf("%lld\n",a);
#define pf2ll(a,b)            printf("%lld %lld\n",a,b)
#define pf3ll(a,b,c)          printf("%lld %lld %lld\n",a,b,c)

#define maxn 100007

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    if(n==1)
    {
        cout << 360 << endl;
        return 0;
    }
    vector<int>vt;
    for(int i=0; i<n; i++)
    {
        int t;
        cin >> t;
        vt.push_back(t);
    }
    for(int i=0;i<n;i++)
    {
        vt.push_back(vt[i]);
    }
    int mn=999;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<2*n;j++)
        {
            sum+=vt[j];
            mn=min(mn,abs(360-sum-sum) );
        }
    }
    cout << mn << endl;
    return 0;
}
/*



*/