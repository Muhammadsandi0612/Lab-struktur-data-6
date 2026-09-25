#include <iostream>
using namespace std;

struct node
{
    int data;
    node *kiri;
    node *kanan;
};

node* akar = NULL;

void addNode(node** akar , int value)
{
    if (*akar == NULL )
    {
        node* baru= new node;
        baru-> data = value;
        baru-> kiri = NULL;
        baru-> kanan = NULL;
        *akar = baru;
    }
}

void inOrder(node* akar)
{
    if (akar!= NULL)
    {
        inOrder(akar-> kiri);
        cout<< akar->data<<" ";
        inOrder(akar->kanan);
    }
    
}
void preOrder(node* akar)
{
    if (akar!= NULL)
    {
        cout<< akar->data<<" ";
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}
void postOrder(node* akar)
{
    if (akar!= NULL)
    {
        postOrder(akar-> kiri);
        inOrder(akar->kanan);
        cout<< akar->data<<" ";
    }
}

int main()

{
    system("cls");

    //membuat sebuah tree
    addNode(&akar,15);
    addNode(&akar ->kiri,27);
    addNode(&akar ->kanan,30);
    addNode(&akar->kiri->kiri,25);
    addNode(&akar->kiri->kanan,29);

    //travesal tree
    //1.in order
    cout<<"Tampilkan Inorder : ";
    inOrder(akar);

    // 2.preOrder
    cout<<"Tampilkan Preorder : ";
    preOrder(akar);

    //3.postorder
    cout<<"Tampilkan Postorder : ";
    postOrder(akar);

    return 0;
};