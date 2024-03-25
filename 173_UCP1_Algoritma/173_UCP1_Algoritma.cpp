//Soal  Type 1 
#include <iosteam>
using namespace std; 

int main() {

}

//1. Pengurutan yang sederhana dan mudah dipahami, algoritma ini bekerja dengan cara menyisipkan elemen 
// baru ke posisi yang tepat dalam array yang sudah terurut sebagian dan data  selalu n-1 

//2.Algoritma ini bekerja dengan cara mencari elemen minimum dalam array dan 
// kemudian menukarnya dengan elemen diawal array seperti :
// dengan cara pertama inisialisasi, pencarian elemen minimum, penukaran elemen, iterasi 

//3. Proses algoritma sortir, Jumalah langkah dalam algoritma sortir dapat dihitung dengan berbagai cara. cara yang paling 
// tepat tergantung dan analisa matematika memberikan perkiraan jumlah langkah sedangkan inplementasi 
// pengujian memberikan hasil yang lebih akurat dan menggunakn n-1 

//4.  
#include <iostream>
using namespace std; 

int main(){
 
	void selection(int notesa[73]; int n){		//repeat steps 2 and 3 varying j from 0 to n-2 
		for (int j = o; j < n - i; j++) {
			int minIndex = j;
			for (int i = j + 1; i < n; i++) {	//find the minimum value in arr[j] to arr [n-1]
				if (notesa[i] < notesa[minIndex]) {
					minIndex = i;
				}
			}
			if (minIndex 1 = j) { //swap arr[j] with arr [min_index]
			std: : swap(notesa[j]; notesa[minIndex]);
			}

			int main() {
				int notesa[] = { 73,22 };
				int n = sizeof(notesa) / size(notesa[0]);

				selection sort(notesa, n);

				cout << "sorted notesa: ";
				for (int i = 0; i < n; i++) {
				std: : cout << notesa[i] << " ";

				}
				std::cout << std::endl;
				return 0;
			}

			



