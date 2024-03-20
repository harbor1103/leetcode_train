//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//vector<int> B(9, 0);
//void mergeSort(vector<int>& A, int begin, int mid, int end)
//{
//    for (int i = begin; i <= end; i++)
//    {
//        B[i] = A[i];
//    }
//
//    int i = begin;
//    int j=mid+1;
//    int K=begin;
//    while (i <= mid && j <= end)
//    {
//        if (B[i] <= B[j])
//        {
//            A[K] = B[i];
//            i++;
//        }
//        else
//        {
//        	A[K] = B[j];
//			j++;
//        }
//        K++;
//    }
//
//    while (i <= mid)
//    {
//        A[K] = B[i];
//        i++;
//        K++;
//    }
//    while (j <= end)
//    {
//        A[K] = B[j];
//            j++;
//        K++;
//    }
//
//}
//
//
//
//void merge(vector<int>& A, int begin, int end)
//{
//    if (begin < end)
//    {
//        int mid = begin + (end - begin) / 2;
//        merge(A, begin, mid);
//        merge(A, mid + 1, end);
//        mergeSort(A, begin, mid, end);
//    }
//}
//
//
//
//
//
//
//
//int main()
//{
//    std::vector<int> arr = { 12, 11, 13, 5, 6, 7, 1, 3, 9 };
//    int arr_size = arr.size();
//
//    std::cout << "Given array is \n";
//    for (int i = 0; i < arr_size; i++)
//        std::cout << arr[i] << " ";
//
//    merge(arr, 0, arr_size - 1);
//
//    std::cout << "\nSorted array is \n";
//    for (int i = 0; i < arr_size; i++)
//        std::cout << arr[i] << " ";
//
//    return 0;
//}