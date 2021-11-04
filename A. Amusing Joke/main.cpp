#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c,d;
    cin >> a>>b>>c;
    d=a+b;
    sort(d.begin(),d.begin()+d.size());
    sort(c.begin(),c.begin()+c.size());
    if(d.size()!=c.size()) cout<<"NO"<<endl;
    else{
        for(int i=0;i<c.size();i++){
            if(d[i]!=c[i]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
    return 0;
}
