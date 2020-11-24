#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//int main()
//{
//    char ch='w';
//    char*pc=&ch;
//
//    return 0;
//}
//int main()
//{
//    char arr[]="asfgasdf";
//    char *pc=&arr;
//    printf("%s\n",arr);
//    printf("%s\n",pc);
//    return 0;
//}
//int main()
//{
//    char*p="sadf";//常量字符串，不可修改。
//    const char*p="sadf";
//    printf("%c\n",*p);
//    printf("%s\n",p);
//    return 0;
//}
//www.stackoverflow.com栈溢出
//www.segmentfault.com段错误
//int main()
//{
//    char arr1[]="abcdef";//首元素地址
//    char arr2[]="abcdef";//首元素地址
//    const char*p1="abcd";//首元素地址
//    const char*p2="abcd";//首元素地址
//    if(p1==p2)
//    {
//        printf("hehe\n");
//    }
//    else
//    {
//        printf("haha\n");
//    }
////    if(arr1==arr2)
////    {
////        printf("hehe\n");
////    }
////    else
////    {
////        printf("haha\n");
////    }
//    return 0;
//}
//int main()
//{
//    int arr[10]={0};//整形数组
//    char ch[5]={0};//字符数组
//    int* ptr[4];//存放整形指针的数组-指针数组
//    char* trr[3];//存放字符指针的数组-指针数组
//    return 0;
//}
//int main()
//{
//    int a=10;
//    int b=20;
//    int c=30;
//    int d=40;
//    int* arr[4]={&a,&b,&c,&d};
//    for(int i=0;i<4;i++)
//    {
//        printf("%d ",*(arr[i]));
//    }
//    return 0;
//}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,2,4,6,7};
    int arr3[]={5,4,6,7,3};
    int* prr[]={arr1,arr2,arr3};
    int i=0;
    for(i=0;i<3;i++)
    {
        int j=0;
        for(j=0;j<5;j++)
        printf("%d ",prr[i][j]);
        printf("\n");
    }
    return 0;

}
