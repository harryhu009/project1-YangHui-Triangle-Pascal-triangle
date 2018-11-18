#include<iostream>
#ifndef MARMOSET_TESTING
int main();
#endif
int pascal_triangle(int n);
int pascal_triangle(int n)
{
    int k,i,x;
    for (i=0;i<n;i++)
    {
        x=1;
        for(k=0;k<=i;k++)
        {
            std::cout <<x<<" ";
            x =x*(i-k)/(k+1);
        }
        std::cout << std::endl;
    }
    return (n+1)*n/2;
}
int pascal_triangle_recursive(int n);
int pascal_triangle_recursive(int n){
    int i;
    if(n>0){
        pascal_triangle_recursive(n-1);
    }
    i=n;
    int x=1;
    for(int j=0;j<=i;j++){
        std::cout<<x<<" ";
        x=x*(i-j)/(j+1);
    }
    std::cout<<"\n";
    return (n+2)*(n+1)/2;
}
#ifndef MARMOSET_TESTING
int main(){
    int n;
    std::cin>>n;
    std::cout<<pascal_triangle(n)<<std::endl;
    std::cout<<pascal_triangle_recursive(n-1)<<std::endl;
    return 0;
}
#endif

