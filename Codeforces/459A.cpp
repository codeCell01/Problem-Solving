#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;

    if(a==c)
        cout<< a+(d-b) <<' '<< b <<' '<< c+(d-b) <<' '<< d <<endl;
    else if(b==d)
        cout<< a <<' '<< b+(c-a) <<' '<< c <<' '<< d+(c-a) <<endl;
    else if(c-a == d-b || c-a == b-d) 
        cout<< a <<' '<< d <<' '<< c <<' '<< b <<endl;
    else
        cout<< -1 <<endl;

    return 0;
}