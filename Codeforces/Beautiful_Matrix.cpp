#include<bits/stdc++.h>
using namespace std;
int main(){
             int a[5][5];
             for(int i=0;i<5;i++){
                          for(int j=0;j<5;j++){
                                       cin>>a[i][j];
                          }
             }
             for(int i=0;i<5;i++){
                          for(int j=0;j<5;j++){
                                       if(a[i][j]==1){
                                                    int row=abs(2-i);
                                                    int column=abs(2-j);
                                                    int total=row+column;
                                                    cout<<total;
                                       }
                          }
             }
             return 0;
             
}
