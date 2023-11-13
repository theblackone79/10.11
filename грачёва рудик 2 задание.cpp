
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int saj = 2.225;
    int foot = 0.3001;
    int drahm = 3.7657;
    int unciy = 27.56;
    int phynt = 0.44532;
    int arsh = 0.7542;
    int zolotov = 4.43281;
    int dyum = 25.3977;
    int dyumm = 2.5;
    int a;
    int choise;
    cout << "выберите значение:" << endl << "1 растояниe" << endl << "2 вес" << endl;
    cin >> choise;
    switch (choise)
    {
    case 1:
        int choise2;
        cout << "выберите значение " << endl << "1 Метры" << endl << "2 Сантиметры" << endl << "3 Милиметры" << endl;
        cin >> choise2;
        switch (choise2)
        {
        case 1:
            int choise3;
            cout << "Выберите формат " << endl << "1 Сажень" << endl << "2 Фут" << endl << "3 аршин" << endl;
            cin >> choise3;
            switch (choise3)
            {
            case 1:
                cout << "введите количество сажень которых хотите перевсети" << endl;
                cin >> a;
                cout << "выше значение сажень в метрах:" << a * saj;
                break;
            case 2:
                cout << "введите количество футов которых хотите перевсети" << endl;
                cin >> a;
                cout << "ваще значение футов в метрах:" << a * foot;
                break;
            case 3:
                cout << "введите количество аршин которых хотите перевсети" << endl;
                cin >> a;
                cout << "ваше значения аршин в метрах:" << a * arsh;
                break;
            }
            break;
            break;
        case 2:

            cout << "введите количество дюймов которых хотите перевсети" << endl;
            cin >> a;
            cout << "ваши дюймы перевёденне в сантиметры  " << a * dyumm;
            break;

        case 3:
            cout << "введите количество дуймов которых хотите перевсети" << endl;
            cin >> a;
            cout << "ваши дюймы перевёденне в милиметры  " << a * dyum;
            break;
        }
        break;
    case 2:
        int choise5;
        cout << "выберите значение " << endl << "1 Килограммы" << endl << "2 граммы" << endl;
        cin >> choise5;
        switch (choise5)
        {
        case 1:
            cout << "введите количество фунтов которых хотите перевсети" << endl;
            cin >> a;
            cout << "выше значение фунтов в килограммах:" << a * phynt;
            break;
        case 2:
            int choise6;
            cout << "выберите значение " << endl << "1 Драхмы" << endl << "2 Унции" << endl << "3 Золотники" << endl;
            cin >> choise6;
            switch (choise6)
            {
            case 1:
                cout << "введите количество драхмов которых хотите перевсети" << endl;
                cin >> a;
                cout << "выше значение драхмов в граммах:" << a * drahm;
                break;
            case 2:
                cout << "введите количество унций которых хотите перевсети" << endl;
                cin >> a;
                cout << "выше значение унций в граммах:" << a * unciy;
                break;
            case 3:
                cout << "введите количество золотников которых хотите перевсети" << endl;
                cin >> a;
                cout << "выше значение золотников в граммах:" << a * zolotov;
                break;
            }
            break;
        }
        break;
    }

}