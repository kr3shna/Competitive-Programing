// https://codeforces.com/problemset/problem/4/A



#include <iostream>
using namespace std;
int main(){
    int x;
    cin >>x;

    if(x>=1 && x<=100 && x!=2){
        if(x%2==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }
}


// Another way 
#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    if(x > 2 && x % 2 == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

}



// Another way using ternary operator
#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    (w > 2 && w % 2 == 0) ? cout << "YES" : cout << "NO";

    return 0;
}
