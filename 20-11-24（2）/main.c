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
//    char*p="sadf";//�����ַ����������޸ġ�
//    const char*p="sadf";
//    printf("%c\n",*p);
//    printf("%s\n",p);
//    return 0;
//}
//www.stackoverflow.comջ���
//www.segmentfault.com�δ���
//int main()
//{
//    char arr1[]="abcdef";//��Ԫ�ص�ַ
//    char arr2[]="abcdef";//��Ԫ�ص�ַ
//    const char*p1="abcd";//��Ԫ�ص�ַ
//    const char*p2="abcd";//��Ԫ�ص�ַ
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
//    int arr[10]={0};//��������
//    char ch[5]={0};//�ַ�����
//    int* ptr[4];//�������ָ�������-ָ������
//    char* trr[3];//����ַ�ָ�������-ָ������
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
