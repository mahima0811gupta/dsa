#include<iostream>
#include<vector>
using namespace std;
int main()  {
     vector<int>v={1,2,4,5};
for(auto it=v.begin();it!=v.end();it++)
cout<<(*it)<<" ";
cout<<endl;
vector<pair<int,int>>v_p={{6,7},{9,10}};
for(auto &value:v_p) {
    cout<<value.first<<" "<<value.second<<endl;
}

}