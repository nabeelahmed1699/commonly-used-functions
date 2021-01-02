#include<iostream>
int *dynamicregrow(int size, int *olddata);
void copyarray(int *olddata, int *ptr2, int size);
using namespace std;

int main()
{
    int a=0, size = 0;
    int *arr = nullptr;
    cout << "Enter the Elements in the array: \n";
    cin >> a;
    while (a != -99)
		{
			size++;
			arr = dynamicregrow(size, arr);
			arr[size - 1] = a;
            cin >> a;
        }
        for (int i = 0; i < size; i++)
        {
            cout << "Array["<<i <<"] :"<< arr[i]<<" ";
        }
        
    return 0;
}
int* dynamicregrow(int size, int *olddata)
{
	int * ptr2 = nullptr;
	if (size == 1)
	{
		ptr2 = new int[size];
	}
	else
	{
		ptr2 = new int[size];
		copyarray(olddata, ptr2,size);
		delete[] olddata;
		olddata = nullptr;

	}
	return ptr2;
}
void copyarray(int *olddata, int *ptr2,int size)
{
	for (int i = 0; i < size; i++)
	{
		ptr2[i] = olddata[i];
	}
}