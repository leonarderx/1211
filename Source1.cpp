#include <iostream>
#include <ctime>
using namespace std;
int main() {
	//Вариант 1
	//1
	/*const int a = 10;
	int mas[a];
	int pro = 0;
	srand(time(nullptr));
		for (int i = 0; i < a; i++) {
		mas[i] = rand() % 21 - 0;
		cout << mas[i] << ' '; {
			pro += mas[i];
			}
		}
	cout << endl;
	cout << pro;*/

	//2
	/*const int a = 8;
	int mas[a];
	int sum = 0;
	srand(time(nullptr));
	for (int i = 0; i < a; i++) {
		mas[i] = rand() % 21 - 10;
		cout << mas[i] << " "; {
			if ((mas[i] > 0) && (i % 2 != 0))
				sum = sum + i;
	}
	cout << sum << endl;*/

    //3
	const int a = 16;
	int mas[a];
	srand(time(nullptr));
	for (int i = 0; i < a; i++) {
		mas[i] = rand() % 21 - 0;
		cout << mas[i] << " "; 
		}
		cout << endl;
		for (int i = 0; i < a; i++) {
			if (mas[i] % 3, 5 != 0) {
				
			}
		}
		cout << endl;

		//4
		/*const int a = 10;
		int mas[a];
		int sum = 0;
		srand(time(nullptr));
		for (int i = 0; i < a; i++) {
			if (i % 2 == 0) cout << i << endl;
			mas[i] = rand() % 21 - 0;
			cout << mas[i] << " "; {
				sum = sum + i;
			}
		}
		cout << endl;*/
		
}