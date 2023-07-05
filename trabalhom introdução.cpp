#include <iostream>

using namespace std;

int main()
{
    int m[4][4], i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << "Digite o elemento " << i << "," << j << " da matriz: ";
            cin >> m[i][j];
            m[0][0]=0;
            m[1][1]=0;
            m[2][2]=0;
            m[3][3]=0;
             if (m[i][j] % 2 == 0) {
                m[i][j] *= 2; // Multiplica por 2 se for par
            } else {
                m[i][j] *= 2; // Multiplica por 5 se for ímpar
            }
        }
    }

    cout << "Elementos da matriz: " << endl;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
