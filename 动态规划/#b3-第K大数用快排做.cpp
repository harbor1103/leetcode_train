//#include<iostream>
//using namespace std;
//#include<vector>
//
//int part(int art[], int low, int high)
//{
//	int pivot = art[low];
//	while (low < high)
//	{
//		while (low < high && art[high] >= pivot) high--;
//		art[low] = art[high];
//		while (low < high && art[low] <= pivot)low++;
//		art[high] = art[low];
//	}
//
//
//	art[low] = pivot;
//	return low;
//}
//
//int quickSort(int arr[], int low, int high,int k)
//{
//	if (low <= high)
//	{
//		int position = part(arr, low, high);
//		if (position == k )
//		{
//			return arr[position];
//		}
//		else if (position < k )
//		{
//			quickSort(arr, position + 1, high,k);
//		}
//		else
//		{
//			quickSort(arr, low, position - 1,k);
//		}
//	}
//}
//
//
//
//
//
//int main()
//{
//	int test[16] = { 1,3,4,5,2,0,7,8,32,45,21,56,34,67,100,99 };
//
//	int len = sizeof(test) / sizeof(test[0]);
//	int k = 2;
//	int ret=quickSort(test, 0, len - 1,16-k);
//
//	cout<<"第 "<<k<< "大的数是："<<ret<<endl;
//
//	for (int i = 0; i < len; i++)
//	{
//		printf(" %d ", test[i]);
//	}
//
//}