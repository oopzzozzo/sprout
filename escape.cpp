#include<iostream>
using namespace std;

int main()
{
    int N,Mx,Se;
    int d[1000];
    while(cin>>N)
    {
        for(int i=0;i<N;++i)
            cin>>d[i];
        Mx = 0;
        for(int i=1;i<N;++i)
            if(d[i]>d[Mx])
                Mx = i;
        Se = Mx?0:1;
        for(int i=0;i<N;++i)
            if(i!=Mx)
                if(d[i]>d[Se])
                    Se=i;
        cout<<Se+1<<'\n';
    }
}

