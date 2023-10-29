#include <iostream>
using namespace std;

//node class
class Node {
public:
    int data;
    Node* next;

    Node() {
        data = 0;
        next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    // Constructor to initialize the linked list with an array of integers
    LinkedList(int arr[], int size) {
        head = NULL;
        for (int i = 0; i < size; i++) {
            insertNode(arr[i]);
        }
    }

    void insertNode(int data) {
        // Node creation
        Node* newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            return;
        }
        // If head is not null
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void displayList() {
        Node* temp = head;
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void deleteNode(int nodeOffset) {
        Node* temp1 = head, *temp2 = NULL;
        int len = 0;
        if (head == NULL) {
            cout << "List is empty" << endl;
            return;
        }
        while (temp1 != NULL) {
            temp1 = temp1->next;
            len++;
        }
        cout << "Length of the list is : " << len << endl;
        if (len < nodeOffset) {
            cout << "Invalid node offset" << endl;
            return;
        }
        temp1 = head;
        if (nodeOffset == 1) {
            head = head->next;
            delete temp1;
            return;
        }
        while (nodeOffset-- > 1) {
            temp2 = temp1;
            temp1 = temp1->next;
        }
        temp2->next = temp1->next;
        delete temp1;
    }

void addTwoNumbers(LinkedList list1, LinkedList list2){
    Node* temp1 = list1.head;
    Node* temp2 = list2.head;
    int carry = 0;
    LinkedList list3;
    while(temp1 != NULL && temp2 != NULL){
        int sum = temp1->data + temp2->data + carry;
        carry = sum / 10;
        sum = sum % 10;
        list3.insertNode(sum);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    while(temp1 != NULL){
        int sum = temp1->data + carry;
        carry = sum / 10;
        sum = sum % 10;
        list3.insertNode(sum);
        temp1 = temp1->next;
    }
    while(temp2 != NULL){
        int sum = temp2->data + carry;
        carry = sum / 10;
        sum = sum % 10;
        list3.insertNode(sum);
        temp2 = temp2->next;
    }
    if(carry != 0){
        list3.insertNode(carry);
    }
    cout << "Sum of the two numbers is : ";
    list3.displayList();
    cout << endl;
}
};

int main() {
    int arr1[] = {9,9,9,9,9,9,9};
    int arr2[] = {9,9,9,9};
    int arr3[] = {0}; // To store the sum of the two numbers

    LinkedList list1(arr1, sizeof(arr1) / sizeof(arr1[0]));
    LinkedList list2(arr2, sizeof(arr2) / sizeof(arr2[0]));
    LinkedList list3(arr3, sizeof(arr3) / sizeof(arr3[0]));


    cout << endl;
    cout << "Elements of the List1 are : ";
    list1.displayList();
    cout << endl;
    cout << "Elements of the List2 are : ";
    list2.displayList();
    cout << endl;
    list3.addTwoNumbers(list1,list2);
    cout << endl;
    cout << endl;

    return 0;
}
