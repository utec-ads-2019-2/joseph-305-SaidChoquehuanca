#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

int main() {
    int input;
    int ans[15] = {
            0, 2, 7, 5, 30, 169, 441, 1872, 7632, 1740,
            93313, 459901, 1358657, 2504881, 13482720
    };
    while(cin>>input and input!=0){
        cout<<ans[input]<<endl;
    }

    return 0;
}