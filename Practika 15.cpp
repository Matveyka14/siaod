#include <iostream>
using namespace std;

int main()
{
    int n; int m; int a; int b;
    //n-�������� m-�������
    cout << "������� ���������� ���������:\n";
    cin >> n;
    cout << "������� �������:\n"; cin >> m;
    if (n > m)
    {
        cout << "������ ���� ����� ��������,������ �������� �������?\n";
        cin >> a;
        switch (a) {
        case 1:
            cout << "������� ���������� ����� �������\n";
            cin >> b;
            m += b;
            if (b = 0) {
                cout << "�� ������ �� �������";
            }
            else {
                cout << "����� ������ �������:" << m << "\n������ ������ ����������";
            }
            break;
        case 2:
            cout << "�� ������ �� �������";
            break;
        default:
            cout << "������";
            break;
        }
    }
    if (m > n) {
        cout << "����� ����� �������,�� ���� ��� �������,������ ��� ���������?\n";
        cin >> a;
        switch (a) {
        case 1:
            cout << "������� ���������� ���������\n";
            cin >> b;
            n += b;
            if (b = 0) {
                cout << "�� ������ �� �������";
            }
            else {
                cout << "����� ������ ���������:" << n << "\n������ ������ ����������";
            }
            break;
        case 2:
            cout << "�� ������ �� �������";
            break;
        default:
            cout << "������";
            break;
        }
    }
    else {
        cout << "������������";
    }
}