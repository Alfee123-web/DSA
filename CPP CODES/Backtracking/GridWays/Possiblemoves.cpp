#include <iostream>
using namespace std;


int gridWays(int r , int c , int n , int m , string ans){
     //n = row , m = col
     if(r==n-1 && c == m-1){
         //base case for destination 
         cout<<ans<<"\n ";
        return 1;
     }
     if(r >= n || c >= m){ //base case if cell is out of the grid
        return 0;
     }
     //right choice
     int v1 = gridWays(r , c+1,n,m,ans + "R");
     
     //down choice
     int v2 = gridWays(r+1,c,n,m,ans+ "D");
     

     return v1 + v2;

}
int main() {
    int n = 3;
    int m = 3;
    string ans = "";
    cout<<gridWays(0,0,n,m,ans); // 6
   
    return 0;
}

//OUTPUT
// RRDD
//  RDRD
//  RDDR
//  DRRD
//  DRDR
//  DDRR
//  6