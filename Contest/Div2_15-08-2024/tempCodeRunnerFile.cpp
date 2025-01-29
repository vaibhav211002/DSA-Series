int maxele = a[n-1];
    cout<<maxele<<endl;

    for(int i = 0 ; i < n ; i ++){
        if(a[i]<maxele){
            if(k<=maxele - a[i]){
                a[i]+=maxele-a[i];
                k-=maxele-a[i];
            }
        }
    }
    for(auto i : a){
        cout<<i<<"  ";
    }
    sort(a.begin(),a.end());
