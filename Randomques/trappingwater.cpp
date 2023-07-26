#include <iostream>
using namespace std;
 int main(int argc, char const *argv[])
 {
    int arr[] = {3, 2, 1, 4, 1, 5, 2};
    int n = 7;
    int water = 0;
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        
    }
    // cout << max;
    for (int i = max; i > 0; i--)
    {
        // cout << "hello";
        int right, left;
        for (int j = 0; j < n; j++)
        {
            if(arr[j] >= i){
                left = j;
                // cout << left << endl;
                break;
            }
        }
        for (int j = n-1; j >= 0; j--)
        {
            if(arr[j] >= i){
            right = j;
            // cout << right << endl;
            break;
            }
        }
        int area = (right - left + 1) * i;
        // cout << area << endl;
        int ocpy = 0;
        for (int j = left; j <= right; j++)
        {
            if (arr[j] >= i)
            {
                ocpy += i;
                // cout << ocpy << endl;
                arr[j] = i;
            }
            else{
                ocpy += arr[j];
                // cout << ocpy << endl;
                arr[j] = i;
            }
        }
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
        
            // cout << ocpy << endl;
            int diff = area - ocpy;
            water += diff;
            // cout << water << endl;
        
    }
    cout << "Answer: " << water;
    return 0;
 }
 