//for, while
#include <iostream>

using namespace std;

int main(){
    //infinity loop
    //with for
    int cnt = 0;
    for ( ; ; )
    {
        cout << "Never end - " << cnt << "\n";
        cnt = cnt + 1;
    }
    // with while
    while (true)
    {
        cout << "Never end - " << cnt << "\n";
        cnt = cnt + 1; 
    }
    

    



    return 0;
}