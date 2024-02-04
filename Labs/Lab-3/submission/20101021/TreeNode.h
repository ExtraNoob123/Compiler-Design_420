#ifndef TREE_NODE_H
#define TREE_NODE_H

#include <string>
#include <vector>
extern int count;
extern std::string str;

class TreeNode {
private:
    std::string type;
    std::string value;
    std::vector<TreeNode*> children;

public:
    TreeNode(const std::string& type, const std::string& value = "") 
        : type(type), value(value) {}

    static TreeNode* createNonTerminalNode(const std::string& type) {
        return new TreeNode(type);
    }

    static TreeNode* createTerminalNode(const std::string& type, const std::string& value = "") {
        return new TreeNode(type, value);
    }

    void addChild(TreeNode* child) {
        children.push_back(child);
    }

    const std::string& getType() const {
        return type;
    }

    const std::string& getValue() const {
        return value;
    }

    const std::vector<TreeNode*>& getChildren() const {
        return children;
    }

    int getNumChildren() const {
        return children.size();
    }

    void postOrderTraversal(std::ofstream& outFile) {
        std::string control= " ";
        for (auto child : children) {
            child->postOrderTraversal(outFile);
        }

        // track curly braces
        if(type == "LCURL"){
            count=0;
        }else if(type == "RCURL"){
            count=1;
        }

    
        if(count==0 && (str == "SEMICOLON" || str == "LCURL")){
            control+= "    "; 
        }

        if (!value.empty()) {
            outFile << control << value;
            str = type;
        }
        if(type == "LCURL" or type == "SEMICOLON"){
            outFile << "\n";
        }

    }

    ~TreeNode() {
        for (auto child : children) {
            delete child;
        }
    }
};

#endif  // TREE_NODE_H
