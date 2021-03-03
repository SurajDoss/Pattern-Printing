/*
Matrix pattern Printing
--------------------------------------------------------------------
Size of Matrix N M :5 5
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
 *  *  *  *  *
--------------------------------------------------------------------
*/

#include <iostream>

using namespace std;

int main(){

    int n, m;
    cout<<"Size of Matrix N M :";
    cin>>n>>m;

    for(int i = 0; i< n; i++){
        for (int j= 0; j<m; j++){
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;

}
