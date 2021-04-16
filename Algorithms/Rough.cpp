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



#include <bits/stdc++.h>
using namespace std;

class Point
{
    friend istream& operator >>(istream &in,Point &rhs);
    friend ostream& operator <<(ostream &out,const Point &rhs);

    private:
        int x;
        int y;
    public:
        Point();                        // Default Constructor 
        Point(int x, int y);            // Parameterized Constructor
        Point(const Point &rhs);        // Copy Constructor
        ~Point()                        // Destructor
        {
            cout<<endl<<"Destructor Called"<<endl;
        }

        bool operator ==(const Point &rhs);
        void operator =(const Point &rhs);

        Point operator +(const Point &rhs);
        Point operator -(const Point &rhs);
        Point operator ++();        // (++x) Pre-Increment
        Point operator ++(int x);   // (x++) Post-Increment
        Point operator --();        // (--x) Pre-Decrement
        Point operator --(int x);   // (x--) Post-Decrement

        void display();

};
ostream& operator <<(ostream &out,const Point &rhs)
{
    out<<rhs.x<<" "<<rhs.y;
    return out;
}
istream& operator >>(istream &in,Point &rhs)
{
    in>>rhs.x>>rhs.y;
    return in;
}
void Point::display()
{
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
}
///////////////////////////////////////////////////////////////////////////

bool Point::operator ==(const Point &rhs)
{
    if((x==rhs.x)&&(y==rhs.y))
    {
        return true;
    }
    return false;
}

void Point::operator =(const Point &rhs)
{
    x=rhs.x;
    y=rhs.y;
}

Point Point::operator ++()
{
    Point temp;
    temp.x=++x;
    temp.y=++y;
    return temp;    
}
Point Point::operator ++(int x)
{
    Point temp;
    temp.x=x++;
    temp.y=y++;
    return temp;    
}
Point Point::operator --()
{
    Point temp;
    temp.x=--x;
    temp.y=--y;
    return temp;    
}
Point Point::operator --(int x)
{
    Point temp;
    temp.x=x--;
    temp.y=y--;
    return temp;    
}

/////////////////////////////////////////////////////////////////////////////

Point Point::operator -(const Point &rhs)
{
    Point temp;
    temp.x=x-rhs.x;
    temp.y=y-rhs.y;
    return temp;
}
Point Point::operator +(const Point &rhs)
{
    Point temp;
    temp.x=x+rhs.x;
    temp.y=y+temp.y;
    return temp;
}

Point::Point(const Point &rhs)
{
    x=rhs.x;
    y=rhs.y;
}
Point::Point(int x, int y)
{
    this->x=x;
    this->y=y;
}
Point::Point()
{
    x=0;
    y=0;
}

int main()
{
    Point p1;
    Point p2(10,20);

    p1.display();
    p2.display();
                                            // We can also write like this -->> p1.operator==(p2)

    Point p3 = p1;
    p3.display();
    
    p1 = p2;
    if(p1 == p2) 
    {
        cout << "Point are EQUAL." << endl;
    }

    p3 = ++p1;
    cout<<"After Pre-Increment -> ";
    p3.display();
    
    p3 = p1++;
    cout<<"After Post-Increment -> ";
    p3.display();   
    
    p3 = ++p1;
    cout<<"After Pre-Increment (Proof of Post-Increment)-> ";
    p3.display();

    Point p4(13,24);
    
    p3 = --p1;
    cout<<"After Pre-Decrement -> ";
    p3.display();
  
    p3 = p1--;
    cout<<"After Post-Decrement -> ";
    p3.display(); 
    
    p3 = --p1;
    cout<<"After Pre-Decrement (Proof of Post-Decrement)-> ";
    p3.display();
    cout<<endl<<endl<<"-_-";

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
#include<stdbool.h>
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

void strcat1(char *ptr1, const char *ptr2)
{
    while(*ptr1!='\0')
    {
        ptr1++;
    }
    while(*ptr2!='\0')
    {
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1='\0';
}

void strcpy1(char *ptr1, const char *ptr2)
{
    while(*ptr2!='\0')
    {
        *ptr1=*ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1='\0';
}

bool strcmp1(const char *ptr1, const char *ptr2)
{
    int len1=strlen1(ptr1);
    int len2=strlen1(ptr2);
    int max=(len1>len2)?len1:len2;
    
    for(int i=0;i<max;i++)
    {
        if(*(ptr1+i)!=*(ptr2+i))
        {
            return false;
        }
    }
    return true;
}

void swap(char *ptr1,char *ptr2)
{
    char temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
void strev1(char *ptr)
{
   int len=strlen1(ptr);
   int num=(len/2);
    for(int i=0;i<num;i++)
    {
        swap(&ptr[i],&ptr[num+len-i-1]);
    }
}

int main() 
{
    char str[100];
    char str1[100]="Hello";
    scanf("%[^\n]%*c",&str);
    printf("%s",str);
    
    printf("\n%d",strlen1(str));    // Strlen
    
    strcat1(str,str1);              // Strcat
    printf("\n%s",str);
    
    strcpy1(str,str1);              // Strcpy
    printf("\n%s",str);
    strcpy1(str,"Hello1"); 
    printf("\n%s",str);
    if(strcmp1(str,str1))           // strcmp
    {
        printf("\nBoth are Same");
    }
    else
    {
        printf("\nBoth are Different");
    }
    char str3[100]="Hello";
    strev1(str3);                   // strrev
    printf("\n->%s",str3);
    return 0;
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

	
///////////////////////////	2	///////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen1(const char *str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
void str_cat(char* s1, char* s2)
{
    while(*s1!='\0')
    {
        *s1++;
    }
    while(*s2!='\0')
    {
        *s1=*s2;
        *s2++;
        *s1++;
    }
    *s1='\0';
}
void solve(char* str1, char* str2)
{
    int x=strlen1(str1);
    int y=strlen1(str2);

    int i=0;
    int j=0;
    int m=0;
    int n=0;
    int k=0;
    char *ptr=(char *)malloc(100);
    char *ch=(char *)malloc(1);
    char c;
    int count=0;
    int ans=0;
                                            // abcd   &  abc
    for(i=0;i<x;i++)        // 4
    {
        count=0;
        for(j=i;j<x;j++)    // 4
        {
            c=str1[j];
            *ch=c;
            str_cat(ptr,ch);
            k=strlen1(ptr);
     
            //  abcd     -->>  a ab  abc  abcd   b  bc bcd  c cd d 
    
            //    abc    -->>    a ab abc   b   bc  c 
            
            char c1;
            int m=0;
            char *ptr1=(char *)malloc(100);
            char *ch1=(char *)malloc(1);
            int k1;
            for(int m=0;m<y;m++)
            {
                for(int l=m;l<y;l++)
                {
                    c1=str2[l];
                    *ch1=c1;
                    str_cat(ptr1,ch1);
                    k1=strlen1(ptr1);
                    count=0;
                    for(int z=0;z<k;z++)
                    {
                        if(ptr[z]==ptr[z])
                        {
                            count++;
                        }
                        if(count==k1&&strlen1(ptr1)==strlen1(ptr))
                        {
                            printf("%s , ",ptr1);
                            ans++;
                            break;
                        }
                        if(strlen1(ptr1)==y && strlen1(ptr)==x)
                        {
                            printf("\nTotal matched string is %d",ans);
                            return;
                        }
                    }
                    count=0;
                }
                *ptr1='\0';
            }
        }
        *ptr='\0';
    }
}

int main()
{
    char str1[]="abcd";
    char str2[]="abc";

    solve(str1,str2);

    return 0;
}

/////////////////////////////////	3        ////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strlen1(const char *str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
void str_cat(char* s1, char* s2)
{
    while(*s1!='\0')
    {
        *s1++;
    }
    while(*s2!='\0')
    {
        *s1=*s2;
        *s2++;
        *s1++;
    }
    *s1='\0';
}
void solve(char* str1, char* str2, char* str3)
{
    int x=strlen1(str1);
    int y=strlen1(str2);
    int z=strlen1(str3);
    int i=0;
    int j=0;
    int count=0;
    char *ch=(char *)malloc(1);
    char c;
    char *ptr=(char *)malloc(z*(x+y));

    for(i=0;i<x;i++)    // abcabcfg  ->8
    {
        c=str1[i];
        *ch=c;
        count=0;
        for(j=0;j<y;j++)//abc  ->3
        {
            if(str1[i+j]==str2[j])
            {
                ++count;
                if(count==y)
                {
                    str_cat(ptr,str3);
                    i=i+2;
                }
            }
            else
            {
                str_cat(ptr,ch);
                break;
            }
        }
    }
    printf("%s",ptr);
}
int main()
{
    char str1[]="abcabcfg";
    char str2[]="abc";
    char str3[]="k";

    solve(str1,str2,str3);

    return 0;
}


////////////////////    CODE-1    ///////////////////////


#include<stdio.h>
#include<stdlib.h>

int len(const char *str)
{
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}

char* concat(const char *str1, const char *str2)
{
    int len1=len(str1);
    int len2=len(str2);
    
    char *ptr =(char *)malloc(len1+len2+5);     // Length of str1 + Length of str2 + 5(Pine)
    
    int i=0,j=0,k=0;
    
    while(i<len1)
    {
        *(ptr+j++)=*(str1+i++);
    }
    
    while(k<len2)
    {
        *(ptr+j++)=*(str2+k++);
    }
    
    char *p="PinE";
    
    for(int i=0;i<*(p+i);i++)
    {
        *(ptr+j+i)=*(p+i);
    }

    ptr[j+4]='\0';

    return ptr;
}

int main() 
{
	char *str1="Sunny";
	char *str2="Chaudhary";

	printf("%s",concat(str1,str2));

	return 0;
}
	
	
	
