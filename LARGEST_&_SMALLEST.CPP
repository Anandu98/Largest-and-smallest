#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int arr[10], n, i, max, min;
	cout << "Enter the size of the array : ";
	cin >> n;
	cout << "Enter the elements of the array : ";
	for (i = 0; i < n; i++)
		cin >> arr[i];
	max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	cout << "Largest element : " << max<<"\n";
	cout << "Smallest element : " << min;
	getch();
}
