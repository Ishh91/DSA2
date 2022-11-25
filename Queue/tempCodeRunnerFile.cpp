multiset<int,greater<int>>s;
    vector<int> ans;
    for(int i = 0;i<k;i++){
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());
    for(int i = k;i<n;i++){
        s.erase(s.lower_bound(a[i-x]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }
    for(auto i: ans){
        cout<<i<<endl;
    }