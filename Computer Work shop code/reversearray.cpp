//Q.10) (C)Write a program to display reverse of an array.

#include<iostream>
using namespace std;
int main ()  
{  
    int arr[10], num, temp, i, j;  
    cout << "  enter the size of array ";  
    cin >> num;
     //for (i = 0; i < num; i++)  
        cout << " Enter the element ";
        for (i = 0; i < num; i++)  
        
        cin >> arr[i];  

    for ( i = 0, j = num - 1; i < num/2; i++, j--)  
    {     
        temp = arr[i];  
        arr[i] = arr[j];  
        arr[j] = temp;  
    }  
    cout << "\n Reverse all elements of the array: " << endl;  
    for ( i = 0; i < num; i++)  
    {  
        cout << arr[i] << " ";  
    }  
    return 0; 
} 
