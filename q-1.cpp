#include<iostream>
using namespace std;

int main(){

    int arr[15] = {1,2,2,3,3,3,4,4,4,4,5,5,5,5,5};

    int newarr[15] = {};

    int index = 0;

    for (int i = 0; i < 15; i++)
    {
        int n = false;

        for (int j = 0; j < index; j++)
        {
            if (arr[i] == newarr[j])
            {
                n = true;
            } 
        }
        if (n == false)
        {
            newarr[index] = arr[i];
            index++;
        }
        
    }
    
    cout << "array afte removeing duplicate.. " << endl;

    for (int i = 0; i < index; i++)
    {
        cout << newarr[i] << " " ;
    }

    return 0;
}