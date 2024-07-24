// DoubleLinkedIist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;




 class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};
 class LinkedList {
 private:
     Node* header;
     Node* tail;
     int size;
 public:
     LinkedList() {
         header = NULL;
         tail = NULL;
         size = 0; 
     }
     ~LinkedList() {
         Node* next;
         while (header != NULL) {
             next = header->next;
             delete header;
             header = next;
         }
     }
     int getSize() {
         return size;
     }
     void toString() {
         Node* temp = header;
         while (temp != NULL) {
             cout << temp->data << "";
             temp = temp->next;
         }
         cout << endl;
     }
     void prepend(int data) {
         Node* n = new Node(data);
         if (header == NULL){
             header = n;
             tail = n;
         }
         else {
             header->prev= n;
             n->next = header;
             header = n;
         }
         size++;
     }
      void append(int data) {
        Node* n = new Node(data);
       if (header == NULL) {
             header = n;
            tail == n;
         }
       else {
             tail->next = n;
             n->prev= tail;
              tail = n;
     }
       size++;

     }
      void insertAt(int pos, int data)
      {
          if (pos<1 || pos>size + 1) {
              return;
          }
          else if (pos == 1) {
              prepend(data);
          }
          else if (pos == size + 1) {
              append(data);
          }
          else if (header != NULL) {
              Node* n = new Node(data);
              Node* curr = header;
              for (int i = 1; i < pos; i++) {
                  curr = curr->next;
              }
                  n->prev = curr;
                  n->next = curr->next;
                  curr->next = n;
                  curr->next->prev = n;
                  size++;
              
          }
          void  toStringReverse()
          {
              Node* n = tail;
              while (n != NULL) {
                  cout << n->data << "";
                  n = n->prev;
              } 
              cout << endl;
         
          }



      }


 };





int main()
{
    LinkedList list;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);
    list.insertAt(3, 20);
    list.toString();
    list.tostringReverse();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
