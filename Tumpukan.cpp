#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> tumpukan;
    
    tumpukan.push(100);
    tumpukan.push(90);
    tumpukan.push(80);

    cout << "Datum yang terletak di tempat teratas ialah " << tumpukan.top() << "." << endl;
    tumpukan.pop();
	
	cout << "Datum yang berada di bawahnya ialah " << tumpukan.top() << "." << endl;
	tumpukan.pop();
	
    cout << "Datum yang berada di tempat terbawah ialah " << tumpukan.top() << "." << endl;
    tumpukan.pop();

    return 0;
}
