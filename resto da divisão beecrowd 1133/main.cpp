#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin>>x;
    cin>>y;
    if (x>y){
        swap(x,y);
    }
    for (int i=x+1; i<y; i++){
        if ((i%5)==2){
            cout<<i<<endl;
        }
        if ((i%5)==3){
            cout<<i<<endl;
        }
    }
    return 0;
}
