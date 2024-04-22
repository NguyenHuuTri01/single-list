#include <iostream>
using namespace std;
struct Node{
	int Data;
	Node *Next;
};
typedef Node* List;
void Insert(int x, List &First) {
	List p = new(Node);
	p->Data = x;
	p->Next = First;
	
	First = p;
}
void InsertLast(int x, List &First) {
	List p = new(Node);
	p->Data = x;
	p->Next = NULL;
	if(First == NULL) {
		First = p;
	} else {
		List q = First;
		while(q->Next != NULL) {
			q = q->Next ;
		}
		q->Next = p;
	}
}
void PrintList(List First) {
	List p = First;
	while(p != NULL){
		cout << "Gia tri: " << p->Data << endl;
		p = p->Next ;
	}
}

void InsertList(List &First) {
	int n,x;
	First = NULL;
	cout << "Moi ban Nhap vao so Phan Tu Muon Nhap: ";
	cin >> n;
	
	for(int i = 0 ; i<n ; i++) {
		cout << "\t Moi Nhap Phan Tu Thu "<<i+1 << ": ";
		cin >> x;
		if(x % 2 == 0) {
			Insert(x, First);
		} else {
			InsertLast(x, First);
		}
	}
}

main() {
	List First;
	InsertList(First);
	PrintList(First);
}

