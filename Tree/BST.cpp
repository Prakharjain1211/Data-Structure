#include<iostream>
using namespace std;
class Node
{
    public:
        Node* left;
        int data;
        int key;
        Node* right;
    Node()
    {
        left=right=NULL;
        data=key=0;
    }
    Node(int v,int k)
    {
        left=right=NULL;
        data=v;
        key=k;
    }
};
class BST
{   public:
    Node* root;
    int COUNT;
    BST(){root=NULL;COUNT=10;}

    Node* search(Node* ptr, int v)
    {
        if(ptr==NULL){return ptr;}
        else if(ptr->data==v){ return ptr;}        
        else if(v<ptr->data) { return search(ptr->left,v); }
        else                 { return search(ptr->right,v); }
    }
    Node* findMin(Node* ptr)
    {
        if(ptr->left==NULL)
            return ptr;
        findMin(ptr->left);
        return NULL;
    }
    Node* findMax(Node* ptr)
    {
        if(ptr->right==NULL)
            return ptr;
        findMax(ptr->right);
        return NULL;
    }

    void insert(Node* n,Node* ptr)
    {
        if(root==NULL)
        {
            cout<<"Root node has been inserted"<<endl;
            root=n;
            return;
        }
        else
        {
            if( n->data < ptr->data )
            {
                if(ptr->left==NULL )
                {
                    ptr->left=n;cout<<"Data has been inserted"<<endl; return;
                }
                insert(n,ptr->left);
            }
            else if(n->data>ptr->data)
            {
                if(ptr->right==NULL)
                {
                    ptr->right=n;cout<<"Data has been inserted"<<endl; return;
                }
                insert(n,ptr->right);
            }            
        }
    }
    void deleteNode(int x)
    {
        Node* ptr= search(root,x);
        Node* temp = new Node();
        if(ptr==NULL){cout<<"No Node exists with is data"<<endl;delete(temp);return;}
        else if(((ptr->left)&&(ptr->right))== NULL)
        {
            delete(ptr);
            ptr=NULL;
            return;
        }
        else if(ptr->left==NULL)
        {
            ptr->data=ptr->right->data;
            ptr->right=NULL;
            return;
        }
        else if(ptr->right==NULL)
        {
            temp= ptr->left;
            ptr=temp;
            temp=NULL;
            delete(temp);
            return;
        }
        else
        {
            temp=findMin(ptr->right);
            ptr->data=temp->data;
            ptr->key=temp->key;
            delete(temp);
            return;
        }

    }

    void inorder(Node* n)
    {
        if(n==NULL){return;}
        inorder(n->left);
        cout<<n->data<<" ";
        inorder(n->right);
    }
    void preorder(Node* n)
    {
        if(n==NULL){return;}
        cout<<n->data<<" ";
        preorder(n->left);
        preorder(n->right);
    }
    void postorder(Node* n)
    {
        if(n==NULL){return;}
        postorder(n->left);
        postorder(n->right);
        cout<<n->data<<" ";
    }
    void print2DUtil(Node *root, int space)  
    {   
    if (root == NULL)  
        return;   
    space += COUNT;  
    print2DUtil(root->right, space);  
    cout<<endl;  
    for (int i = COUNT; i < space; i++)  
        cout<<" ";  
    cout<<root->data<<"\n";  
    print2DUtil(root->left, space);  
    } 
    void print2D(Node *root)  
    {  
        print2DUtil(root, 0);  
    } 

};

int main()
{
    BST obj;
  int option, val,key1;
  do {
    cout << "What operation do you want to perform? " <<
      " Select Option number. Enter 0 to exit." << endl;
    cout << "1. Insert Node" << endl;
    cout << "2. Search Node" << endl;
    cout << "3. Delete Node" << endl;
    cout << "4. Print/Traversal BST values" << endl;
    cout << "5. Height of Tree" << endl;
    cout << "6. Find  maximum element" << endl;
    cout << "7. Find  minimum element" << endl;
    cout << "8. Clear Screen" << endl;
    cout << "0. Exit Program" << endl;
 
    cin >> option;
    Node * new_node = new Node();
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "INSERT" << endl;
      cout << "Enter KEY and VALUE of TREE NODE to INSERT in BST: ";
      //cin >> key1 >> val;
      cin>>val;
      new_node -> data = val;
      //new_node->key= key1;
      obj.insert(new_node,obj.root);
      cout << endl;
      break;
    case 2:
        cout<<"Enter the data you want to search ";
        cin>>val;
        new_node=obj.search(obj.root,val);
        if (new_node==NULL)
        {
            cout<<"Value not found"<<endl;
        }
        else
        {
            cout<<"The key - value pair of node is "<<new_node->key<<" - "<<new_node->data<<endl;
        }
        break;
    case 3: 
        cout<<"Enter the data you want to delete ";
        cin>>val;
        obj.deleteNode(val);
        break;
    case 4:
      cout << "PRINT 2D: " << endl;
      obj.print2D(obj.root);
      cout << endl;
      break;
    case 6:
        new_node= obj.findMax(obj.root);
        cout<<"Maximum element in the tree is "<< new_node->data<<endl;
        break;
    case 7:
        new_node= obj.findMin(obj.root);
        cout<<"Minimum element in the tree is "<< new_node->data<<endl;
        break;    
    case 8:
      system("cls");
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
    }while(option!=0);
    return 0;
}
