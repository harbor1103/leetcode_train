//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//vector<int> B(5, 0);
//
//
//int mergeSort(vector<int>& A, int begin, int mid, int end)
//{
//    int ret = 0;
//    for (int i = begin; i <= end; i++)
//    {
//        B[i] = A[i];
//    }
//    int i = begin;
//    int j = mid + 1;
//    int K = begin;
//
//
//    while (i <= mid && j <= end)
//    {
//        if (B[i]<=B[j])
//        {
//            A[K] = B[i];
//                i++;
//        }
//        else
//        {
//            A[K] = B[j];
//            j++;
//            ret += (mid - i)+1;
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
//        j++;
//        K++;
//    }
//
//    return ret;
//
//}
//
//
//
//int mergeSortAndCount(vector<int> &A, int begin, int end)
//{
//    int count = 0;
//    if (begin < end)
//    {
//        int mid = begin + (end - begin) / 2;
//        count += mergeSortAndCount(A, begin, mid);
//        count += mergeSortAndCount(A, mid + 1, end);
//        count += mergeSort(A, begin, mid, end);
//    }
//    return count;
//}
//
//
//int main() {
//    std::vector<int> arr = { 9, 7, 5, 4, 6 };
//    int arr_size = arr.size();
//
//    std::cout << "Given array is \n";
//    for (int i = 0; i < arr_size; i++)
//        std::cout << arr[i] << " ";
//
//    int invCount = mergeSortAndCount(arr, 0, arr_size - 1);
//
//    std::cout << "\nNumber of inversions are " << invCount<<"\n";
//
//    for (int i = 0; i < arr_size; i++)
//        std::cout << arr[i] << " ";
//
//
//    return 0;
//}
