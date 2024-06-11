#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int jmlSimpulRadit_2311102013;
    cout << "Silahkan masukkan jumlah simpul = ";
    cin >> jmlSimpulRadit_2311102013;

    vector<string> namaSimpulRadit_2311102013(jmlSimpulRadit_2311102013);
    vector<vector<int>> bobot(jmlSimpulRadit_2311102013, vector<int>(jmlSimpulRadit_2311102013));

    for (int i = 0; i < jmlSimpulRadit_2311102013; ++i) {
        cout << "Silahkan masukkan nama simpul " << i + 1 << " = ";
        cin >> namaSimpulRadit_2311102013[i];
    }

    cout << "Silahkan masukkan bobot antar simpul\n";

    for (int i = 0; i < jmlSimpulRadit_2311102013; ++i) {
        for (int j = 0; j < jmlSimpulRadit_2311102013; ++j) {
            cout << namaSimpulRadit_2311102013[i] << "-->" << namaSimpulRadit_2311102013[j] << " = ";
            cin >> bobot[i][j];
        }
    }

    cout << "\n\t";
    for (int i = 0; i < jmlSimpulRadit_2311102013; ++i) {
        cout << namaSimpulRadit_2311102013[i] << "\t";
    }
    cout << "\n";

    for (int i = 0; i < jmlSimpulRadit_2311102013; ++i) {
        cout << namaSimpulRadit_2311102013[i] << "\t";
        for (int j = 0; j < jmlSimpulRadit_2311102013; ++j) {
            cout << bobot[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}