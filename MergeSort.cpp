#include<iostream>
using namespace std;

void Ispis(int niz[], int vel) {
	for (int i = 0; i < vel; i++)
		cout << niz[i] << " ";
	cout << endl;
}

void Merge(int Temp[], int Element[], const int list1, const int size1,const int list2, const int size2){
	int i, j, k;
	i = list1;
	k = list1;
	j = list2;
	while (i<list1+size1 && j<list2+size2){
		if (Temp[i] < Temp[j])
			Element[k++] = Temp[i++];
		else
			Element[k++] = Temp[j++];
	}
	while (i<list1+size1) {
		Element[k++] = Temp[i++];
	}
	while (j < list2 + size2) {
		Element[k++] = Temp[j++];
	}
	for (k = list1; k < list1 + size1 + size2;k++ ) {
		Temp[k] = Element[k];
	}
}

void MergeSort(int Temp[],int Element[],const int list1,const int size) {
	int list2, size1, size2;
	if (size>1){
		list2 = list1+size/2;
		size1 = list2 - list1; //kako dobiti veličinu lijevog niza?
							   //tako što ćemo oduzeti vrijednost početnog indeksa desnog i lijevog niza.

		size2 = size - size1; //kako dobiti veličinu desnog niza?
							  //oduzmemo ukupnu veličinu i veličinu lijevog.

		MergeSort(Temp, Element, list1, size1); 
		MergeSort(Temp, Element, list2, size2); 
		Merge(Temp, Element, list1, size1, list2, size2); 
	} 
}

void QuickSort(int niz[], int velicina) {
//...tbc
}


int main() {
	int _niz[]{ 100,9,8,7,6,5,4,3,2,100 };
	int temp[]{ 100,9,8,7,6,5,4,3,2,100};
	const int _velicina = sizeof(_niz)/sizeof(_niz[0]);
	
	cout << "Nesortiran niz->\n";
	Ispis(_niz, _velicina);
	
	MergeSort(temp, _niz, 0, _velicina);
	cout << "Sortiran niz-> ";
	Ispis(_niz, _velicina);

	system("pause>0");
	return 0;
}
