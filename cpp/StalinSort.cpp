#include <iostream>
#include <vector>

int main()
{
    int n, temp;
    std::vector <int> v;
    std::cin>>n;
    for (int i = 0; i < n; ++i) 
    {
        std::cin>>temp;
        v.push_back(temp);
    }
        
    int max = v[0];
    for (int i = 0; i < n; ++i)
    {
        if (v[i] >= max)
        {
            std::cout<<v[i]<<" "; 
            max = v[i];   
        }
    }
}