#include <iostream>
#include <algorithm>
using namespace std;

struct Activity {
    int start, finish;
};

// Comparator function to sort activities by finish time
bool compare(Activity a, Activity b) {
    return a.finish < b.finish;
}

void activitySelection(Activity arr[], int n) {
    sort(arr, arr+n, compare);

    cout << "Selected Activities (Greedy Approach):\n";

    // The first activity always gets selected
    int i = 0;
    cout << "(" << arr[i].start << ", " << arr[i].finish << ") ";

    // Consider the rest of the activities
    for(int j = 1; j < n; j++) {
        if(arr[j].start >= arr[i].finish) {
            cout << "(" << arr[j].start << ", " << arr[j].finish << ") ";
            i = j;
        }
    }
    cout << endl;
}

int main() {
    Activity arr[] = {{1, 3}, {2, 4}, {3, 5}, {0, 6},
                      {5, 7}, {8, 9}, {5, 9}};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Activities (start, finish):\n";
    for(int i=0; i<n; i++) {
        cout << "(" << arr[i].start << ", " << arr[i].finish << ") ";
    }
    cout << "\n\n";

    activitySelection(arr, n);

    return 0;
}
