CST_Drive_04_Dec_2019_Deepak.pdf
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int strlen1(const char *ptr)
{
    int count=0;
    while(*ptr!='\0')
    {
        count++;
        ptr+=1;
    }
    return count;
}
void solve(char *ptr1,const char *ptr2, const char *ptr3)
{
    int l1=strlen1(ptr1);
    int l2=strlen1(ptr2);
    int l3=strlen1(ptr3);
    
    char *ptr=(char *)malloc((l1-l2+l3+1)*sizeof(char));
    int a1=0;
    for(int i=0;i<l1;i++)
    {
        if(*(ptr1+i)==*(ptr2))
        {
            int count=0;
            int a=0;
            for(int j=i;j<i+l2;j++)
            {
                if(*(ptr2+a)==*(ptr1+j))
                {
                    a++;
                    count++;
                }
                else
                {
                    break;
                }
            }
            if(count==l2)
            {
                for(int m=0;m<l3;m++)
                {
                    *(ptr+i+m-(a1*(l2)))=*(ptr3+m);
                    a1++;
                }
                i=i+l2;
            }
        }
        else
        {
            *(ptr+i-(a1*(l2)))=*(ptr1+i);
        }
    }
    *(ptr+l1-l2+l3)='\0';
    printf("%s",ptr);
    
    free(ptr);
    printf("%s",ptr);
    
}
int main()
{
    char s1[100];
    char s2[50];
    char s3[10];
    
    scanf("%[^\n]%*c",s1);
    scanf("%[^\n]%*c",s2);
    scanf("%[^\n]%*c",s3);
    
    printf("%s\n%s\n%s\n",s1,s2,s3);
    
    solve(s1,s2,s3);
    return 0;
}






#include<stdio.h>
#include<stdlib.h>
int strlen1(const char *ptr)
{
    int count=0;
    while(*ptr!='\0')
    {
        count++;
        ptr+=1;
    }
    return count;
}
char *print(const char *ptr)
{
    char *p=(char *)malloc(strlen1(ptr));
    int a=0;
    for(int i=0;i<strlen1(ptr);i++)
    {
        if((*(ptr+i))!=' ')
        {
            (*(p+a))=(*(ptr+i));
            a++;
        }
    }
    return p;
}
int main() 
{
    char str[100]="i request you to stay indoor during the pandemic";

    printf("%d\n",strlen1(str));
    
    char *p=print(str);
    for(int i=0;i<strlen1(p);i++)
    {
        printf("%c",*(p+i));
    }
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

// function to find the rightmost set bit
int PositionRightmostSetbit(int n)
{
    int pos=0;
    while(!((n)&(1<<pos)))
    {
        pos++;
    }
    return (pos+1);

}
// Driver Code
int main()
{
	int n = 2;
	// function call
	cout << PositionRightmostSetbit(n);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>

void solve(int row,int column)
{
    int **ptr=(int **)malloc((sizeof(int *))*row);
    
    for(int i=0;i<row;i++)
    {
        ptr[i]=(int *)malloc((sizeof(int)*column));
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            scanf("%d",&ptr[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    } 
    for(int i=0;i<row;i++)
    {
        free(ptr[i]);
    }
    free(ptr);
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            printf("%d ",ptr[i][j]);
        }
        printf("\n");
    } 
}
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    solve(r,c);
	return 0;
}



/*
// C++

int **ptr=new int*[row];

for(int i=0;i<row;i++)
{
    ptr[i]=new int[column];
}


for(int i=0;i<row;i++)
{
    delete[] ptr[i];
}
delete[] ptr;
*/

CST_Drive_April_2020_2nd_Round_Vikas_Singh.pdf


#include <bits/stdc++.h>
using namespace std;
void decToBinary(int n) 
{ 
    // Size of an integer is assumed to be 32 bits 
    for (int i = 31; i >= 0; i--) { 
        int k = n >> i; 
        if (k & 1) 
            cout << "1"; 
        else
            cout << "0"; 
    }
}
int main()
{
    int a=0x23A5FF89;
    decToBinary(a); 
}

#include <bits/stdc++.h>
using namespace std;
void fun(int *p)
{
    cout<<sizeof(p)<<endl;
}
int main()
{
    int a=5;
    char b='A';
    int c[10];
    int *x=NULL;
    int *y=NULL;
    fun(c);
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(c)<<endl;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
}

8
4
1
40
8
8

CST_Drive_Deepak_Final_Doc.pdf

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

size_t strlen1(const char *ptr)
{
    static int count=0;
    if(*(ptr)!='\0')
    {
        count++;
        strlen1(++ptr);
    }
    else
    {
        return count;
    }
}

int main() 
{
    char str[100];

    scanf("%[^\n]%*c",&str);
    printf("%s",str);
    
    printf("\n%zd",strlen1(str));    // Strlen
}


CST_Drive_DEC_ANURAG.pdf

#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>



struct solve
{
    char s[100];
    char c[100];
};
int strlen1(const char *ptr)
{
    int count=0;
    while(*ptr!='\0')
    {
        count++;
        ptr+=1;
    }
    return count;
}
void swa(char* p1,char* p2)
{
    char t;
    t=*p1;
    *p1=*p2;
    *p2=t;
}
void swap(char* s1,char* s2)
{
    int i=strlen1(s1);
    int j=strlen1(s2);
    int max=(i>j)?i:j;

    for(int i1=0;i1<max;i1++)
    {
        swa((s1+i1),(s2+i1));
    }
    (i>j)?(*(s2+max)='\0'):(*(s1+max)='\0');
}

int main() 
{
    struct solve s1;
    char str[100];

    scanf("%[^\n]%*c",&(s1.s));
    scanf("%[^\n]%*c",&(s1.c));
    printf("%s\n\n",(s1.s));
    printf("%s\n",(s1.c));
    
    swap(s1.s,s1.c);    // Strrev
    printf("%s\n\n",(s1.s));
    printf("%s\n",(s1.c));
}



#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>



int main() 
{
    unsigned int num = 0xDEADBEEF;
    
    int *ptr = &num;
    printf("%X\n",*ptr);
    
    char *p=(char*)ptr;
    *p=0xAF;
    
    printf("%X\n",*(ptr));
    
    // 0xDEADBEAF 
}









#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define R 3
#define C 3
int** mat(int **p,int r,int c)
{
    p=(int **)malloc(sizeof(int*)*r);
    for(int i=0;i<r;i++)
    {
        p[i]=(int *)malloc(sizeof(int)*c);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            p[i][j]=0;
        }
    }
    return p;
}
void print(int **p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }    
}
void input(int **p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&p[i][j]);
        }
    }    
}
void del(int **p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        free(p[i]);
    }
    free(p);
}
int** mult(int **p,int r1,int c1,int **q,int r2,int c2)
{
    int **a=mat(p,r1,c2);
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            a[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                a[i][j]+=(p[i][k]*q[k][j]);
            }
        }
    }    
    return a;
}
int main() 
{
    int r=3;
    int c=3;
    int** p;  // for matrix
    int **q=mat(p,r,c);
    input(q,r,c);
    print(q,r,c);
    printf("\n");
    
    int** t;  // for matrix
    int **s=mat(t,r,c);
    input(s,r,c);
    print(s,r,c);
    printf("\n");
    
    int **x=mult(q,r,c,s,r,c);
    print(x,r,c);
    printf("\n");
    
    del(q,r,c);
    print(q,r,c);   
    return 0;
}



#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int** mat(int **p,int r,int c)
{
    p=(int **)malloc(sizeof(int*)*r);
    for(int i=0;i<r;i++)
    {
        p[i]=(int *)malloc(sizeof(int)*c);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            p[i][j]=0;
        }
    }
    return p;
}
void print(int **p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }    
}
void input(int** p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&p[i][j]);
        }
    }    
}


void swap(int* p,int* q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
void reversec(int **p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        int k=c-1;
        for(int j=0;j<(c/2);j++)
        {
            swap(&(p[i][j]),&(p[i][k]));
            k--;
        }
    }
}
void reverseac(int **p,int r,int c)
{
    for(int i=0;i<r;i++)
    {
        int k=r-1;
        for(int j=0;j<(c/2);j++)
        {
            swap(&(p[j][i]),&(p[k][i]));
            k--;
        }
    }
}
void solve(int** p,int r,int c, int dir)
{
    for(int i=0;i<r;i++)
    {
        for(int j=i;j<c;j++)
        {
            swap(&(p[i][j]),&(p[j][i]));
        }
    }
    if(dir==1)
    {
        reversec(p,r,c);
    }
    else
    {
        reverseac(p,r,c);
    }
}

// dir=1 -> clock , dir=0 ->Anti-clock;
int main() 
{
    int r=3;
    int c=3;
    int** p;  // for matrix
    int **q=mat(p,r,c);
    int dir=1;
    input(q,r,c);
    solve(q,r,c,dir);
    print(q,r,c);
    printf("\n");
    dir=0;
    input(q,r,c);
    solve(q,r,c,dir);
    print(q,r,c);
    printf("\n");    
    return 0;
}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void solve(unsigned int var,int p)
{
    unsigned int v=0xAA;
    int out=(var&(~(0xff<<2*(p)*(sizeof(unsigned int))))|((v<<2*(p)*(sizeof(unsigned int)))));
    printf("%x",out);
}

int main() 
{
    unsigned int var=0x12345678;
    int p=2;
    solve(var,p);
    return 0;
}


#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll gcd(ll n1,ll n2)
{
    if(n1==0)
    {
        return n2;
    }
    if(n2==0)
    {
        return n1;
    }
    if(n1==n2)
    {
        return n1;
        // return  n2;
    }
    return ((n1>n2)?gcd(n1-n2,n2):gcd(n1,n2-n1));
}
 
int main() 
{
	FAST_IO
	
	ll num1,num2;                                  // Taking Input from User.
	cin>>num1>>num2;
	
	ll output=gcd(num1,num2);                      // Function call (Call by Value)
	
	cout<<output<<endl;
	
	return 0;
}





#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll fibonacci(ll n)
{
    if(n<=1)
    {
        return 1;
    }
    else
    {
        return (fibonacci(n-1)+fibonacci(n-2));
    }
}
 
int main() 
{
	FAST_IO
	
	ll num;                        // Taking Input from User.
	cin>>num;
	
	ll sum=fibonacci(num);         // Function call (Call by Value)
	
	cout<<sum<<endl;
	
	return 0;
}


#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll fact(ll n)
{
    if(n>0)
    {
        return (n*fact(n-1));
    }
    else
    {
        return 1;
    }
}
int main() 
{
	FAST_IO
	
	ll num;                         // Taking Input from User.
	cin>>num;
	
	ll output=fact(num);            // Function call (Call by Value)
	
	cout<<output<<endl;
	
	return 0;
}

#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll add(ll n)
{
    if(n>1)
    {
        return(n+(add(n-1)));
    }
    else
    {
        return 1;
    }
}
 
int main() 
{
	FAST_IO
	
	ll num;                          // Taking Input from User.
	cin>>num;
	
	ll output=add(num);             // Function call (Call by Value)
	
	cout<<output<<endl;
	
	return 0;
}
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define FAST_IO ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define endl "\n"
using namespace std;

ll add(ll n)
{
    if(n>0)
    {
        return ((n%10)+add(n/10));
    }
    else
    {
        return 0;
    }
}
 
int main() 
{
	FAST_IO
	
	ll digit;                         // Taking Input from User.
	cin>>digit;
	
	ll sum=add(digit);               // Function call (Call by Value)
	
	cout<<sum<<endl;
	
	return 0;
}



#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traverse(struct node *head)
{
    struct node *temp=head;
    printf("\n Start\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void reverse(struct node** head)        // Reverse
{
    struct node* p1=*head;
    struct node* p2=(*head)->next;
    *head=(*head)->next;
    p1->next=NULL;
    
    while(*head!=NULL)
    {
        *head=(*head)->next;
        p2->next=p1;
        p1=p2;
        p2=(*head);
    }
    (*head)=p1;
}

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void loop(struct node *head)
{
    struct node* s= head;
    struct node* f= head;
    
    while(s!=NULL && f!=NULL&& f->next!=NULL)
    {
        s=s->next;
        f=f->next->next;
        if(s==f)
        {
            printf("LOOP DETECTED");
            return 0;
        }
    }
}



void traverse(struct node *head)
{
    struct node *temp=head;
    printf("\n Start\n");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void reverse(struct node** head)        // Reverse
{
    struct node* p1=*head;
    struct node* p2=(*head)->next;
    *head=(*head)->next;
    p1->next=NULL;
    
    while(*head!=NULL)
    {
        *head=(*head)->next;
        p2->next=p1;
        p1=p2;
        p2=(*head);
    }
    (*head)=p1;
}

void insert(struct node **head,int data, int pos, int size)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node)); 
    newnode->data=data;
    newnode->next=NULL;
    
    struct node* current=NULL;
    
    if(pos<1&&pos>(size+1))
    {
        printf("%s","Invalid Position");
        return;
    }
    if(pos==1)
    {
        newnode->next=*head;
        *head=newnode;
        return;
    }
    current=*head;
    
    for(int i=0;i<(pos-2);i++)
    {
        current=current->next;
    }
    if(pos<size)
    {
        newnode->next=current->next;
        current->next=newnode;
    }
    else
    {
        current->next=newnode;
    }
}
void delete1(struct node **head,int data)
{
    struct node *temp=NULL;
    struct node *del=NULL;
    if((*head)->data==data)
    {
        temp=*head;
        (*head)=(*head)->next;
        free(temp);
        return;
    }
    else
    {
        temp=*head;
        while(temp->next->data==data)
        {
            temp=temp->next;
        }
        del=temp->next;
        temp->next=del->next;
        free(del);
        return;
    }
}

int main()
{
    int size=0;
    int opt,item,pos;

    struct node *head = NULL;
    struct node *temp = NULL;

    while(1)
    {
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:
                traverse(head);
                break;
            case 2:
                reverse(&head);
                break;
            case 3:
                printf("\n\t\tEnter item to delete: ");
                scanf("%d", &item);
                delete1(&head, item);
                size--;
                break;
            case 5:
                printf("\n\t\tExiting...");
                exit(0);
            case 6:
                printf("\n\t\tEnter item to insert and position: ");
                scanf("%d%d", &item, &pos);
                insert(&head, item, pos, size);                                // Most Important Statement
                size++;
                break;
            default:
                printf("\n\t\tInvalid Option");
                break;
        }
    }
}

#include<stdio.h>
#include<stdlib.h>
#define ll long long int 
struct node
{
    ll data;
    struct node *next;
};

struct node* head;
struct node* newnode;
struct node* temp;
int size=0;

void push(int data)
{
    if(head==NULL)
    {
        head=(struct node*)malloc(sizeof(struct node));
        head->data=data;
        head->next=NULL;
        size++;
    }
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=head; 
        head=newnode;
        size++;
    }
}

void pop()
{
    if(head==NULL)
    {
        printf("Stack Underflow");
    }
    else
    {
        temp=head;
        head=temp->next;
        printf("%d",temp->data);
        free(temp);
	size--;
    }
}
int main()
{
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
using namespace std;
class Matrix
{
private:
    int row;
    int column;
    int ** ptr;                   // 2-D Pointer Way Of Representation

public:
    Matrix(int r,int c);         // Parameterized Operator

    void set_matrix();
    void display();

    Matrix operator +(const Matrix &mat);
    Matrix operator *(const Matrix &mat);

    friend ostream& operator <<(ostream& os , const Matrix &mat);
};

ostream& operator <<(ostream& os , const Matrix &mat)
{
    for(int i=0;i<mat.row;i++)
    {
        for(int j=0;j<mat.column;j++)
        {
            os<<mat.ptr[i][j]<< " ";
        }
        os<<endl;
    }
    return os;
}

Matrix Matrix::operator *(const Matrix &mat)
{
    Matrix temp(row,column);
    if(column==mat.row)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<mat.column;j++)
            {
                temp.ptr[i][j]=0;
                for(int k=0;k<column;k++)
                {
                    temp.ptr[i][j] += (ptr[i][k]*mat.ptr[k][j]);
                }
            }
        }
    }
    else
    {
        cout<<"Invalid Multiplication Operation"<<endl;
        for(int i=0;i<mat.row;i++)
        {
            for(int j=0;j<mat.column;j++)
            {
                temp.ptr[i][j] = 0;
            }
        }
    }
    return(temp);
}

Matrix Matrix::operator +(const Matrix &mat)
{
    Matrix temp(row,column);
    if(row==mat.row && column==mat.column)
    {
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<column;j++)
            {
                temp.ptr[i][j] = ptr[i][j]+mat.ptr[i][j];
            }
        }
    }
    else
    {
        cout<<"Invalid Addition Operation"<<endl;
        for(int i=0;i<mat.row;i++)
        {
            for(int j=0;j<mat.column;j++)
            {
                temp.ptr[i][j] = 0;
            }
        }
    }
    return(temp);
}

Matrix::Matrix(int r,int c) // Parameterized Constructor
{
    row=r;
    column=c;

    ptr=new int*[row];           // Allocation of Memory
    for(int i=0;i<row;i++)
    {
        ptr[i]=new int[column];
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            ptr[i][j]=0;
        }
    }
}


void Matrix::set_matrix()     // Data Insertion
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++)
        {
            cin>>ptr[i][j];
        }
    }
}


void Matrix::display()          // Print Data
{
    for(int i=0;i<row;i++)
    {
        cout<<endl;
        for(int j=0;j<column;j++)
        {
            cout<<ptr[i][j]<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    return 0;
}
