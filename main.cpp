#include <bits/stdc++.h>

using namespace std;

bool checkArrays (int arr1[], int arr2[], int a, int b)
{
   if (a != b)
   {
     return false;
   }

   sort(arr1, arr1 + a);
   sort(arr2, arr2 + b);

   // linear comparison

   for ( int i = 0; i < a; i++)
     {
	
	if ( arr1[i] != arr2[i] )
	  
	  {
		return false;
	  }

     }
	   
     return true;

}

int main ()
{
   int arr1[] = {1,2,3,4,5};
   int arr2[] = {5,4,3,2,1};
   int A = sizeof(arr1) / sizeof(int);
   int B = sizeof(arr2) / sizeof(int);

   if ( checkArrays(arr1, arr2, A, B ))
	{
	  cout << "array lengths are same";
	}
   else
	{
	  cout << "array lengths are different";
	}

   return 0;
}	
