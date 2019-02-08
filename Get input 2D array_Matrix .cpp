#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[101][101];
    int h, w ;
    cin>>h>>w;

    for( int i=0 ; i<h ; i++)
        for( int j =0 ; j<w ; j++)
            cin>>arr[i][j];

    for( int i=0 ; i<h ; i++) {
        for( int j =0 ; j<w ; j++)
            cout<<arr[i][j] <<" ";
        cout<<endl;
    }
    return 0;
}
