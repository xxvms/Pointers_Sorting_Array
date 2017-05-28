#include <iostream>
void bsort(int* ptr, int n);    // this is prototype
void order(int* number1, int* number2);

int main()
{
    const int N = 10;           // size of the array
    int arr[N]{37, 84, 62, 91, 11, 65, 57, 28, 19, 49};

    bsort(arr, N);              // sort the array
    for (int i = 0; i < N; ++i) // print the array
    {
        std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
    system("pause");
    system("cls");
    return 0;
}
void bsort(int* ptr, int n)
{
    int j, k;                   // variables for the 2 loops test

    for (j = 0; j < n-1; j++)   // outer loop
    {
        for (k = j+1; k < n; k++) // k = j+ 1 this is the key to sort this correctly!!!
        {
            order(ptr + j, ptr + k);
        }
    }
}
void order(int* numb1, int* numb2)// orders two numbers
{
    if(*numb1 > *numb2)             // if 1st number is larger then 2nd
    {
        int tmp = *numb1;           // swapping numbers
        *numb1 = *numb2;
        *numb2 = tmp;
    }
}
