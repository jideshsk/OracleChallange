#include <stdio.h>
#include <string.h>
struct treenode
{
string info;
struct treenode *father;
struct treenode *son;
struct treenode *next;
}
typedef struct treenode *NODEPTR;
class Tree
{
    private:
      NODEPTR Root;
      
        
}
void main()
{
  int option = 0;
  while( 1 )
  {
    cout<<"\n Menu";
    cout<<"\n 1 Tree Creation";
    cout<<"\n 2 Node Insertion";
    cout<<"\n 3 Tree Traversal";
    cou
    cout<<"\n 4 Exit";
    cout<<"\n Ur Option:"
    cin>> option;
    if( 1 == option )
    {
      CreateTree();
    }
    else if( 2 == option )
    {
      InsertNode();
    }
    else if( 3 == option)
    {
      Traverse();
    }
    else
    {
      break;
    }
  }
}
