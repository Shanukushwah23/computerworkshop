//Q.(10)Solve the following (Array based ) :-
 //(A)Write a program to find maximum and minimum elements in an array.
#include<iostream>
using namespace std;
int main ()
{
    int array[5];
    int size, i, max, min,no;
    cout << "Enter the size of the array  ";
    cin >> size;
    cout << "Enter the elements of the array  ";
    for (i = 0; i < size; i++)
        cin >> array[i];
    max = array[0];
    for (i = 0; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    min = array[0];
    for (i = 0; i < size; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    cout << "Maximum elements of array  " << max<<endl;
    cout << "Minimum element of arry" << min;
    return 0;
}
