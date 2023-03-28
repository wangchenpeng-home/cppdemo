//
// Created by 36376 on 2023/3/28.
//
#include <iostream>
#include <vector>

using namespace std;

double average1(const int *arr) { // 此处作为参数时，此处已经数组退化为指针，所以下方的sizeof(arr) = 指针的大小 = 4
    double result = 0;
    int len = sizeof(arr)/ sizeof(arr[0]);
    cout << len << endl;
    for (int i = 0; i < len; ++i) {
        result += arr[i];
    }

    return result/len;
}

double average2(const int *arr, int len) { // 此处作为参数时，此处已经数组退化为指针，所以下方的sizeof(arr) = 指针的大小 = 4
    double result = 0;
    cout << len << endl;
    for (int i = 0; i < len; ++i) {
        result += arr[i];
    }

    return result/len;
}

double average3(vector<int>& v) { // 此处作为参数时，此处已经数组退化为指针，所以下方的sizeof(arr) = 指针的大小 = 4
    double result = 0;
    cout << v.size() << endl;
    for (int i : v) {
        result += i;
    }

    auto it = v.begin();

    double newResult = 0;
    for (; it != v.end(); it++) {
        newResult += *it;
    }
    cout<< newResult/v.size() << endl;

    return result/double (v.size());
}

double average2D(vector<vector<int>> &vv) {
    double result = 0;

    auto it = vv.begin();
    unsigned int size = 0;

    for (const auto& v: vv) {
        for (auto item : v) {
            cout << item << " ";
            result+=item;
            size++;
        }
        cout << endl;
    }

    return result/size;
}

void funcTest1() {
    int arr1[]= {1, 2, 3,4,5,6};
    int len = sizeof(arr1)/ sizeof(arr1[0]);
    cout << len << endl;
    cout << average1(arr1) << endl;
    cout << average2(arr1, len) << endl;

    vector<int> v{1, 2, 3,4,5,6};
    cout << average3(v) << endl;

    vector<vector<int>> vv(3, vector<int>(3,1));
    cout << average2D(vv) << endl;
}

int main() {
    funcTest1();
}