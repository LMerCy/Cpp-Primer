#include<string>
using namespace std;
class TreeNode{
private:
    std::string value;
    int *count;
    TreeNode *left;
    TreeNode *right;
public:
    TreeNode():value(string()),count(0),left(nullptr),right(nullptr){};
    TreeNode(const TreeNode &Orig):value(Orig.value),count(Orig.count),left(Orig.left),right(Orig.right){
        ++*count;
    }
    TreeNode operator=(const TreeNode &Orig){
        ++*Orig.count;
        if(--*count==0)
        {
            delete count;
            delete left;
            delete right;
        }
        value=Orig.value;
        count=Orig.count;
        left=Orig.left;
        right=Orig.right;
        return *this;
    }
    ~TreeNode(){
        if(--*count==0){
            delete left;
            delete right;
            delete count;
        }
    }
}
class BinStrTree{
private:
    TreeNode *root;
public:
    BinStrTree():root(new TreeNode()){};
    BinStrTree(const BinStrTree &Orig):root(new TreeNode(Orig.root)){};
    BinStrTree operator=(const BinStrTree &Orig){
        TreeNode *tempnode = new TreeNode(*Orig.root);
        delete root;
        root = tempnodel;
        return *this;
    }
    ~BinStrTree(){
        delete root;
    }
}