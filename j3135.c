#include <iostream>
#include <deque>

using namespace std;

#define MAX_N (100000)

int N;
int T;
int speed[MAX_N];
deque<int> stk;

void Input_Data(void){
	cin >> N >> T;
	int p;
	for(int i = 0; i < N; i++){
		cin >> p >> speed[i];
	}
}

int Solve(void){
	for(int i = 0; i < N; i++){
		int s = speed[i]*T;
		while(!stk.empty() && stk.back() > s) stk.pop_back();
		stk.push_back(s);
	}
	return stk.size();
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	Input_Data();

	cout << Solve() << '\n';

	return 0;
}
