#include <bits/stdc++.h>
using namespace std;

int input() {
    int age;
    cin >> age;
    return age;
}

string solve(int age) {
    string answer;

    if (age <= 0 || age > 100) {
        answer = "esta troleando";
    }

    if (age > 0 && age < 18) {
        answer = "menor de edad";
    }

    if (age >= 18 && age <= 100) {
        answer = "mayor de edad";
    }

    return answer;
}

void output(const string& answer) {
    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int age = input();
    string answer = solve(age);
    output(answer);
    return 0;
}
