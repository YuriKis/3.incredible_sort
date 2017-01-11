#include <iostream>

using namespace std;

void incredible_sort(int N, int k)
{
    //Сортировка, основанная не на сравнениях
    //Сортировка подсчётом (Counting sort)
    int arr[k], temp;
    //обнуляем массив
    for (int i = 0; i < k; i++)
        arr[i] = 0;
    //запоминаем количество чисел, индекс массива - само число
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arr[temp] = arr[temp] + 1;
    }

    for (int j = k-1; j >=0; j--)
    {
        for (int i = 0; i < arr[j]; i++)
        {
            cout << j << " ";
        }
    }
}

int main()
{
    int N, k;

    cin >> N >> k;

    incredible_sort(N, k);

    return 0;
}
