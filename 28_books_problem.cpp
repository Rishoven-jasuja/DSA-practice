#include<iostream>
#include<numeric>      // For accumulate() function to get sum of array elements
#include<algorithm>    // For max_element() function to get max element of array
using namespace std;

int main() {

    int arr[] = {34, 12, 67, 90};  // Array representing pages in each book
    int m = 2;                     // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);  // Total number of books

    // Lower bound for binary search is the maximum element (at least one student will get the largest book)
    int st = *max_element(arr, arr + n);

    // Upper bound is the total sum of pages (if one student takes all books)
    int end = accumulate(arr, arr + n, 0);

    int ans = -1;  // Store the final answer (minimum of maximum pages allocation)

    // Binary Search to find the optimal minimum maximum pages
    while (st <= end) {
        int mid = st + (end - st) / 2;  // Mid represents the "maximum pages" a student can be assigned
        int pages = 0;                  // Track pages assigned to current student
        int student = 1;                // Track number of students needed

        // Distribute books to students
        for (int i = 0; i < n; i++) {
            pages += arr[i];            // Add current book to the student's pages

            // If pages exceed the limit(mid), allocate to next student
            if (pages > mid) {
                student++;              // One more student needed
                pages = arr[i];         // Start counting pages for next student
            }
        }

        // If number of students required is less than or equal to allowed students (m)
        if (student <= m) {
            ans = mid;           // Possible valid solution, try to minimize max pages further
            end = mid - 1;       // Look for smaller possible answers
        } else {
            st = mid + 1;        // More students needed, increase the allowed max pages
        }
    }

    // Final answer is the minimized maximum pages that can be allocated
    cout << "The minimum of maximum pages is: " << ans << endl;

    return 0;
}
