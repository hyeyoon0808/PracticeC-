#include <iostream>

using namespace std;

int main(){
    int burger[2];
    int juice[1];
    int b, j;
    int sb, sj, total;
    sb = burger[0];
    sj = juice[0];

    for(int i=0; i<3; i++){
        cin >> b;
        while(b >=100 && b<=2000){
            b = burger[i];
        }
    }
    for(int i=0; i<2; i++){
        cin >> j;
        while(j >=100 && j<=2000){
            j = juice[i];
        }
    }
    for(int i=0; i<3; i++){
        if(sb > burger[i]){
            sb = burger[i];
        }
    }
    for(int i=0; i<2; i++){
        if(sj > juice[i]){
            sj = juice[i];
        }
    }
    cout << sb;
    cout << sj;
    total = sb + sj - 500;
    cout << total;
}
