//Joseph Nartey Opey
//Hamming code generator
#include<iostream>
#include<stdio.h>

using namespace std;

int main() {
	int data[20];  // array to store all the bits 

	cout << "Enter 8 bits of data one by one\n";


	cin >> data[2];
	cin >> data[4];
	cin >> data[5];
	cin >> data[6];
	cin >> data[8];
	cin >> data[9];
	cin >> data[10];
	cin >> data[11];

	//Calculation of even parity
	data[0] = data[2] ^ data[4] ^ data[6] ^ data[8]^data[10]^data[11];  // parity bit p1
	data[1] = data[2] ^ data[5] ^ data[6] ^ data[9]^data[10];  // parity bit p2
	data[3] = data[4] ^ data[5] ^ data[6] ^ data[11];  // parity bit p4
	data[7] = data[8] ^ data[9] ^ data[10]^data[11];  // parity bit p8
	

	


	cout << "\nEncoded data is\n";
	for (int i = 0; i < 12; i++)
		cout << data[i];
}