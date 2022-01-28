#include <iostream>
using namespace std;

int main() {    
    int n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if(n1 >= n2 && n1 >= n3)
        cout << n1<<" is the Largest number" ;

    if(n2 >= n1 && n2 >= n3)
        cout << n2<<" is the Largest number" ;  
  
    if(n3 >= n1 && n3 >= n2)
        cout << n3<<" is the Largest number" ;  

    return 0;
}
