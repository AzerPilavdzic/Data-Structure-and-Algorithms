#include<iostream>
using namespace std;

void Ispis(int niz[],int vel) {
	for (int i = 0; i < vel; i++)
		cout << niz[i]<<" ";
	cout << endl;
}

void Swap(int niz[], int i, int j) {
	if (i != j) {
		int temp = niz[i];
		niz[i] = niz[j];
		niz[j] = temp;
	}
}

void QuickSort(int Niz[], const int low, const int high) {
	if (low<high){
		int pivotLoc = low;
		int pivotKey = Niz[low];
		for (int i = low+1; i <=high; i++){
			if (Niz[i]<pivotKey){
				pivotLoc++;
				Swap(Niz, pivotLoc, i);
			}
		}
		Swap(Niz, low, pivotLoc);
		QuickSort(Niz, low, pivotLoc - 1);
		QuickSort(Niz,pivotLoc+1,high);
	}
}


int main() {
	int _niz[]{ 100,9,8,7,6,5,4,3,2,100 };
	int temp[]{ 100,9,8,7,6,5,4,3,2,100};
	const int _velicina = sizeof(_niz)/sizeof(_niz[0]);
	
	cout << "Nesortiran niz->\n";
	Ispis(_niz, _velicina);
	
	QuickSort(_niz, 0, sizeof(_niz) / sizeof(_niz[0])-1);
	//MergeSort(temp, _niz, 0, _velicina);
	cout << "Sortiran niz-> ";
	Ispis(_niz, _velicina);

	system("pause>0");
	return 0;
}
