 #include<stdlib.h>  
 #include<stdio.h>  
 #include<malloc.h>  
 #define HEIGHT 1  

 struct node
 {  
   int data;  
   struct node* left;  
   struct node* right;  
   int height;  
 };

 struct node* get_node(int val){  
   struct node* new_node = (struct node*)malloc(sizeof(struct node));  
   new_node->left = NULL;  
   new_node->right = NULL;  
   new_node->data = val;  
   new_node->height = HEIGHT;  
   return new_node;  
 }  
 int get_height(struct node* root){  
   if(!root)  
     return 0;  
   else  
     return root->height;  
 }  
 int get_balance(struct node* root){  
   if(!root)  
     return 0;  
   return (get_height(root->left) - get_height(root->right));  
 }  
 int max(int a, int b){  
   return (a > b) ? a : b;  
 }  
 struct node* left_rotate(struct node* root){  
   struct node* right = root->right;  
   struct node* left = right->left;  
   //perform rotation  
   right->left = root;  
   root->right = left;  
   //update heights of the rotated nodes  
   root->height = max(get_height(root->left), get_height(root->right)) + 1;  
   right->height = max(get_height(right->left), get_height(right->right)) + 1;  
   //return new root  
   return right;  
 }  
 struct node* right_rotate(struct node* root){  
   struct node* left = root->left;  
   struct node* right = left->right;  
   //perform rotation  
   left->right = root;  
   root->left = right;  
   //update heights of the rotated nodes  
   root->height = max(get_height(root->left), get_height(root->right)) + 1;  
   left->height = max(get_height(left->left), get_height(left->right)) + 1;  
   //return new root  
   return left;  
 }  
 struct node* insert(struct node* root, int val){  
   //normal insertion  
   if(!root){  
     struct node* new_node = get_node(val);  
     return new_node;  
   }  
   if(root->data > val)  
     root->left = insert(root->left, val);  
   else  
     root->right = insert(root->right, val);  
   //update height of root  
   root->height = max(get_height(root->left), get_height(root->right)) + 1;  
   //check for balancing  
   int balance = get_balance(root);  
   //left-left case  
   if(balance > 1 && root->left->data > val){  
     root = right_rotate(root);  
   }  
   //right-right case  
   else if(balance < -1 && root->right->data < val){  
     root = left_rotate(root);  
   }  
   //left-right case  
   else if(balance > 1 && root->left->data < val){  
     root->left = left_rotate(root->left);  
     root = right_rotate(root);  
   }  
   //right-left case  
   else if(balance < -1 && root->right->data > val){  
     root->right = right_rotate(root->right);  
     root = left_rotate(root);  
   }  
   return root;  
 }  
 //utility function used in balancing of node  
 //in deletion operation  
 struct node* balance_tree(struct node* root){  
   struct node* x, *y;  
   int lheight,rheight;  
   lheight = get_height(root->left);  
   rheight = get_height(root->right);  
   if(lheight >= rheight)  
     x = root->left;  
   else  
     x = root->right;  
   lheight = get_height(x->left);  
   rheight = get_height(x->right);  
   if(x == root->left){  
     if(lheight >= rheight){  
       y = x->left;  
     }  
     else  
       y = x->right;  
   }  
   if(x == root->right){  
     if(lheight > rheight){  
       y = x->left;  
     }  
     else  
       y = x->right;  
   }  
   //left-left case  
   if(root->left == x && x->left == y){  
     root = right_rotate(root);  
   }  
   //right-right case  
   else if(x == root->right && x->right == y){  
     root = left_rotate(root);  
   }  
   //left-right case  
   else if(x == root->left && y == x->right){  
     root->left = left_rotate(root->left);  
     root = right_rotate(root);  
   }  
   //right-left case  
   else if(x == root->right && y == x->left){  
     root->right = right_rotate(root->right);  
     root = left_rotate(root);  
   }  
   return root;  
 }  
 //utility function to find inorder successor   
 //of a given node when it has a right child  
 struct node* inorder_succ_right_tree(struct node* root){  
   struct node* temp = root->right;  
   while(temp->left){  
     temp = temp->left;  
   }  
   return temp;  
 }  
 struct node* deletion(struct node* root, int val){  
   //normal deletion  
   if(!root)  
     return NULL;  
   if(root->data > val){  
     root->left = deletion(root->left, val);  
   }  
   else if(root->data < val){  
     root->right = deletion(root->right, val);  
   }  
   else{  
     struct node* temp;  
     if(root->left == NULL || root->right == NULL){  
       if(root->left)  
         temp = root->left;  
       else if(root->right)  
         temp = root->right;  
       else  
         temp = NULL;  
       root = NULL;  
       free(root);  
       return temp;  
     }  
     else{  
       temp = inorder_succ_right_tree(root);  
       root->data = temp->data;  
       root->right = deletion(root->right,temp->data);  
     }  
   }  
   if(root){  
     //update height  
     root->height = max(get_height(root->left), get_height(root->right)) + 1;  
     int balance = get_balance(root);  
     if(balance > 1 || balance < -1)  
       root = balance_tree(root);  
   }  
   return root;  
 }  
 //function for printing the pre-order of tree  
 void preorder(struct node* root){  
   if(!root)  
     return;  
   printf("%d\t",root->data);  
   preorder(root->left);  
   preorder(root->right);  
 }  
 //function for printing the in-order of tree  
 void inorder(struct node* root){  
   if(!root)  
     return;  
   inorder(root->left);  
   printf("%d\t",root->data);  
   inorder(root->right);  
 }  
 
 void postorder(struct node* root){  
   if(!root)  
     return;   
   postorder(root->left);  
   postorder(root->right);  
      printf("%d\t",root->data); 
 }  
 //function to test the functionality of code  
 main(){  
   struct node* root = NULL;  
    
   printf("Enter node value of AVL tree if you want to exit then enter -1\n");
   int n;
   scanf("%d",&n);
   while(n!=-1)
   {
     root = insert(root, n);
     scanf("%d",&n);
   } 
   printf("Preorder\n");  
   preorder(root);  
   printf("\n-----------\n");  
   printf("Inorder\n");  
   inorder(root);  
   printf("\n-----------\n");
   printf("postorder\n");  
   postorder(root);  
   printf("\n-----------\n");
   l1: printf("Enter node value want you delete\n");
   scanf("%d",&n);  
   root = deletion(root,n);
   printf("If you want to continue deletion then enter \"1\" otherwise any char\n");
   scanf("%d",&n);
     if(n==1)
     goto l1;
   printf("After deletion\n");  
   printf("Preorder\n");  
   preorder(root);  
   printf("\n-----------\n");  
   printf("Inorder\n");  
   inorder(root);  
   printf("\n-----------\n");  
   printf("postorder\n");  
   postorder(root);  
   printf("\n-----------\n");
 }  
