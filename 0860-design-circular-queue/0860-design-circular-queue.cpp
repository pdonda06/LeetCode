class MyCircularQueue {
    vector<int> arr;           // Array to store queue elements
    int front = -1, back = -1; // 'front' points to the first element, 'back' points to the last element
    int len;                   // Maximum size of the circular queue
    
public:
    MyCircularQueue(int k) {
        arr.resize(k);         // Initialize array with size 'k'
        len = k;               // Store the size of the queue
    }
    
    bool enQueue(int value) {
        if(isFull()){          // Check if the queue is full
            return false;      // If full, cannot enqueue
        }
        if(front==-1 && back==-1){ // If the queue is initially empty
            front = 0;         // Set front and back pointers to 0
            back = 0;
        }else{
            back = (back+1)%len;  // Increment back pointer in a circular fashion
        }
        arr[back] = value;     // Insert the value at the back
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){         // Check if the queue is empty
            return false;      // If empty, cannot dequeue
        }
        if(front==back){       // If there's only one element
            front = -1;        // Reset front and back pointers
            back = -1;
        }else{
        front = (front+1)%len; // Increment front pointer in a circular fashion
        }
        return true;
    }
    
    int Front() {
        if(isEmpty()){         // If queue is empty, return -1
            return -1;
        }
        return arr[front];     // Return the element at the front
    }
    
    int Rear() {
        if(isEmpty()){         // If queue is empty, return -1
            return -1;
        }
        return arr[back];      // Return the element at the back
    }
    
    bool isEmpty() {
        if(front==-1 && back==-1){  // Check if the front and back are reset
            return true;        // Queue is empty
        }
        return false;
    }
    
    bool isFull() {
        if((back+1)%len == front){  // If the next position of back equals front
            return true;        // Queue is full
        }
        return false;
    }
};