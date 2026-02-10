#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n = s.length();
    cout<<n<<endl;
    sort(s.begin(),s.end());
    cout<<s;
}