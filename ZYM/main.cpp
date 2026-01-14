# include <bits/stdc++.h>
# define bn s.begin()
# define ed s.end()
# define fst first
# define sec second
using namespace std;
typedef long long LL;
set <pair <int , int> > s;
int op , w , c , cnt[1000010];
LL sum , tot;
int main()
{
    while(cin >> op)
    {
        if(op == -1) break;
        if(op == 1)
        {
            cin >> w >> c;
            if(!cnt[c]) 
                s.insert({c , w}) , cnt[c] ++ , sum += w , tot += c;
        }
        else if(op == 2)
        {
            if(!s.empty())
            {
                set <pair <int , int> > ::iterator pos = ed;
                cnt[(*-- pos).fst] -- , sum -= (*pos).sec , tot -= (*pos).fst , s.erase(pos);
            }
        }
        else if(!s.empty()) cnt[(*bn).fst] -- , sum -= (*bn).sec , tot -= (*bn).fst , s.erase(bn);
    }
    cout << sum << " " << tot;
    return 0;
}
