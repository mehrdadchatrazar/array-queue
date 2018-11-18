//
// Created by mehrdad on 11/18/18.
//

#ifndef ARRAYQUEUE_ARRAYQUEUE_H
#define ARRAYQUEUE_ARRAYQUEUE_H

#include <iostream>

using namespace std;

class AQueue {
public:
    int S[5];
    int n = 5;
    int Front = 0;
    int Rear = 0;
    void AddQ(int);
    int DelQ();
    void DisQ();
};
void AQueue::AddQ(int item) {
    if(Rear == n){
        cout<<"Queue is full"<<endl;
    } else
        S[Rear++] = item;
}
int AQueue::DelQ() {
    if(Rear == 0){
        cout<<"Queue is empty"<<endl;
    } else {
        return S[Front++];
    }
}
void AQueue::DisQ() {
    if (Rear == n && Front == n){
        cout<<"Queue is empty"<<endl;
    } else {
        for (int i = Front; i < Rear; i++) {
            cout << S[i] << "\t";
        }
    }
    cout<<"\n";
}
#endif //ARRAYQUEUE_ARRAYQUEUE_H
