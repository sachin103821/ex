#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int q;
        cin>>n>>q;
        int a[n];
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
       int b[n];
       b[0] = a[0];
        for(int i = 1; i<n; i++){
            b[i] = b[i-1] + a[i];
        }
        
        int m,p;
        int sum =0;
        for(int i = 0; i<q; i++){
            int l,r,k;
            cin>>l>>r>>k;
            if(r-1 < 0){m = 0;

            }else{
                m = b[r-1];
            }
            if(l-2 < 0){
                p = 0;

            }else{
                p = b[l-2];
            }
            sum = b[n-1]- (m- p) + (r-l+1)*k;
            if(sum%2 != 0){
                cout<<"yes"<<endl;
            }else{
                cout<<"no"<<endl;

            }
        }
    }
}
    


