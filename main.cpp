#include <iostream>
#include "Shelf.h"
#include "PrintBook.h"
#include "BShelf.h"
#include <string>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(0, "rus");
	Book a; //First book
	a.Print();
	int n; //book amount
	cout<<"Inter number of books \n";
	cin>>n;
	PrintBook *books = new PrintBook[n];
	for (int i=0;i<n;i++){ //Ask for books
		cout<<"Enter book #"<<i+1<<" Name: \n";
        srting name;
		cin >> name;
		cout<<"Enter book #"<<i+1<<" Pages: \n";
		int p;
		cin>>p;
		PrintBook pbook;
		pbook.setName(name);
		pbook.setPages(p);
		book[i] = pbook;
		}
		for (int i=0;i<n;i++){ //Print books
			books[i]Print();
		}
	return 0;
}
