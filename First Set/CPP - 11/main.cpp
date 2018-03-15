#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    vector <int> intArray;
    int n;
    srand(time(NULL));

    cout<<"Input amount of random integers: ";
    cin>>n;

    if (n < 1){
        do {
            cout<<"Number has to be non-negative: ";
            cin>>n;
        } while (n<1);
    }

    for (int i = 0; i < n; i++){
        intArray.push_back((rand() % 999) + 1);
    }

    for (int i = 0; i < n; i++){
        cout<<intArray.at(i)<<" ";
        if((i+1) % 15 == 0){
            cout<<"\n";
        }
    }

    return 0;
}
