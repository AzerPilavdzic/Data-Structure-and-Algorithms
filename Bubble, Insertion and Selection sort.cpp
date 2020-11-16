#include<iostream>
using namespace std;
void BubbleSort(int niz[], int vel) {
	//BubbleSort je kada ih sortira pomocu boola, tempa i int j=0;
	//j=0 u while svaki put kada udje u while. 
	//sporo izvrsavanje.
	bool promjena = true;
	int temp,j=0;
	while (promjena){
		promjena = false;
		j++;
		for (int i = 0; i < vel-j; i++){
			if (niz[i]>niz[i+1]){
				temp= niz[i];
				niz[i] = niz[i + 1];
				niz[i + 1] = temp;
				promjena = true;
			}
		}
	}
}

void InsertionSort(int niz[], int vel) {
	//...implementirati.
	//insert&sort, "kao dva niza, jedan sortiran a drugi nije."  
	int temp, i, j;
	//i je simulacija za nesortirani valjda, a j je simulacija za sortirani....ispravite me ako grijesim.
	for (int i = 1; i < vel; i++){
		j = i;
		while (j>0 && niz[j]<niz[j-1]){
			temp=niz[j];
			niz[j] = niz[j - 1];
			niz[j - 1] = temp;
			j--;
		}
	}
}

void SelectionSort(int niz[], int vel) {
	int i, j, minIndex,temp;
	for (int i = 0; i < vel-1; i++){
		minIndex = i;
		for (int j = i+1; j < vel; j++){
			if (niz[j]<niz[minIndex]){
				minIndex = j;//jot nam pronalazi "minIndex"
			}
			if (minIndex!=i){
			//swap se izvrsi nad elementom sa najmanjim indeksom i najmanjom vrijednosti.
				//objasnjeno u materijalima V5.
				temp = niz[i];
				niz[i] = niz[minIndex];
				niz[minIndex] = temp;
			}
		}
	}
}

int main() {
	const int _vel = 5;
	int _niz[] = { 2,3,4,5,1};
	for (int i = 0; i < _vel; i++){
		cout << _niz[i] << endl;
	}
	cin.get();
	//BubbleSort(_niz, _vel);
	//InsertionSort(_niz, _vel);
	SelectionSort(_niz, _vel);
	for (int i = 0; i < _vel; i++) {
		cout << _niz[i] << endl;
	}

}
