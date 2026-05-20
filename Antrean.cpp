#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> antrean;

    antrean.push(100);
    antrean.push(90);
    antrean.push(80);
    
    cout << "Mahasiswa dengan nilai ini datang pertama: " << antrean.front() << "." << endl;
    antrean.pop();

    cout << "Mahasiswa dengan nilai ini datang kedua: " << antrean.front() << "." << endl;
    antrean.pop();

    cout << "Mahasiswa dengan nilai ini datang terakhir: " << antrean.front() << "." << endl;

    return 0;
}
