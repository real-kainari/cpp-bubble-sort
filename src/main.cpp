#include <iostream>
#include <time.h>

const int ARRAY_SIZE = 10;
const int MAX_NUM = 99;

void InitArray(int *array);
void BubbleSort(int *array);

int main()
{
    int array[ARRAY_SIZE];

    InitArray(array);
    BubbleSort(array);

    return 0;
}

void PrintArray(int array[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << array[i] << ", ";
    }

    std::cout << std::endl;
}

void InitArray(int *array)
{
    srand((unsigned int)time(NULL));

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        array[i] = rand() % MAX_NUM + 1;
    }

    std::cout << "初期値" << std::endl;
    PrintArray(array);
}

void Swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void BubbleSort(int *array)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        for (int j = ARRAY_SIZE - 1; j > i; j--)
        {
            if (array[j] < array[j - 1])
            {
                Swap(&array[j], &array[j - 1]);
            }
        }

        std::cout << i + 1 << "回目のソート" << std::endl;
        PrintArray(array);
    }
}