#include <iostream>

using std::cout;
using std::cin;

class IntNode{
    public:
        /* Constructors */
        IntNode() {}
        IntNode(int theData): data(theData), link(NULL) {}
        IntNode(int theData, IntNode* theLink): data(theData), link(theLink) {}
        ~IntNode() {}      //Destructor
        
        /* Accessors */
        int getData() const { return data; }
        IntNode* getLink() const { return link; }
        
        /* Mutators */
        void setData(int theData) { data = theData; }
        void setLink(IntNode* pointer) { link = pointer; }
    
    private:
        int data;
        IntNode *link;
};

typedef IntNode* IntNodePtr;

/* Creates a circular linked list containing "suitors" number of nodes */
IntNodePtr lineUpSuitors(int suitors);

/* Output linked list.  Because this demonstration concerns circular lists
    this function halts output when the pointer of the final element 
    points back to the first.  This function also works for single nodes
    that refer to themselves. */
void outputList(IntNodePtr head);

/* Remove and delete every third node in the circular linked list until
    one remains.  */
IntNodePtr eliminateSuitors(IntNodePtr);

int main(){
    int numSuitors = 0;
    
    /* Prompt for suitors */
    cout << "\nHow many suitors (in integers) does Eve have: ";
    cin >> numSuitors;
    
    /* Create circular linked list */
    IntNodePtr head = lineUpSuitors(numSuitors);
    
    /* Confirm accuracy of linked list */
    cout << "\nThe suitors are lined up by number: ";
    outputList(head);
    
    /* Eliminate every third suitor until one remains and output result */
    head = eliminateSuitors(head);
    cout << "\nEve eliminates every third suitor (starting at 1)"
          << " and selects suitor: ";
    outputList(head);
    
    delete head;    //Discard final node
    
    cout << "\n";      //Extra space for readability
    return 1;
}

/* Creates a circular linked list containing "suitors" number of nodes */
IntNodePtr lineUpSuitors(int suitors){
    IntNodePtr head = new IntNode(1), current = head;
    
    for(int i = 2; i <= suitors; i++){        
        current->setLink(new IntNode(i));
        current = current->getLink();
    }
    
    current->setLink(head);
    
    return head;
}

/* Output linked list.  Because this demonstration concerns circular lists
    this function halts output when the pointer of the final element 
    points back to the first.  This function also works for single nodes
    that refer to themselves. */
void outputList(IntNodePtr head){
    IntNodePtr current = head;
    
    cout << current->getData();
    
    while(current->getLink() != head){
        current = current->getLink();
        cout << current->getData();
    }
    
    cout << "\n";      //Extra space for readability
}

/* Remove and delete every third node in the circular linked list until
    one remains.  */
IntNodePtr eliminateSuitors(IntNodePtr head){
    IntNodePtr current = head->getLink(), next = current->getLink();
    
    while(current->getLink() != current){
        current->setLink(next->getLink());
        delete next;
        head = current->getLink();
        current = head->getLink();
        next = current->getLink();
    }
    
    return current;
}
