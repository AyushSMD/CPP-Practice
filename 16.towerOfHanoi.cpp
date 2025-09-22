#include <iostream>
using namespace std;

void TOH(int n, char from, char to, char aux){
    if (n==0) return;
    TOH(n-1,from,aux,to);
    cout << "Move Disk " << n << " from " << from << " to " << to << endl;
    TOH(n-1,aux,to,from);
}

int main(){
    TOH (5,'A','B','C');
    return 0;
}