#include <iostream>
#include <string>
using namespace std;

int main() {
    int N = 0;
    string numbers;
    cin >> N;
    cin >> numbers;

    int sum = 0;
    for (int i = 0; i < numbers.length(); i++){
        cout << numbers[i]<< "\n";
        // 캐릭터를 숫자로 변환하기?
        // 아스키코드니까.. 0의 아스키값을 뺴면 숫자대로 나온다
        sum += numbers[i] - '0';
        cout << sum<< "\n";

    }
    cout << sum << "\n";

}
