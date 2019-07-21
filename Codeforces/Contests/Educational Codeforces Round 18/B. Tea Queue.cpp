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

#define maxn 1000007


int main()
{
    ios_base::sync_with_stdio(0);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector< pair<int,pii> > vt;
        for(int i=1;i<=n;i++)
        {
            int l,r;
            cin >> l >> r;
            vt.push_back( {l,{i,r}} );
        }
        sort(vt.begin(),vt.end());
        int tim=1;

        int ans[n+7];
        memset(ans,0,sizeof ans);
        for(int i=0;i<vt.size();i++)
        {
            if(tim<=vt[i].sc.sc)
            {
                if(tim<vt[i].fs)
                {
                    tim = vt[i].fs;
                }
                ans[vt[i].sc.fs] = tim;
                tim++;
            }
        }
        for(int i=1;i<n;i++)
        {
            cout << ans[i] << " ";
        }
        cout << ans[n] << endl;
    }
    return 0;
}
/*



*/
