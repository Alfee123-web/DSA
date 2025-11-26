#include <iostream>
using namespace std;


int gridWays(int r , int c , int n , int m){
     //n = row , m = col
     if(r==n-1 && c == m-1){ //base case for destination 
        return 1;
     }
     if(r >= n || c >= m){ //base case if cell is out of the grid
        return 0;
     }
     //right choice
     int v1 = (r , c+1,n,m);
     //down choice
     int v2 = (r+1,c,n,m);

     return v1 + v2;

}
int main() {
    int n = 3;
    int m = 3;
    cout<<gridWays(0,0,n,m); // 6
   
    return 0;
}