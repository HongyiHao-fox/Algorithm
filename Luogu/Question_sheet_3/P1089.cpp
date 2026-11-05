#include <iostream>

int main(){
    int ans=0;
    int sum=0;
    
    for(int i = 1;i<=12;i++) {
        int s;
        std::cin>>s;
        if(ans+300<s){
            std::cout<<'-'<<i;return 0;
        }
        sum+=(300-s+ans)/100*100;
        ans=(300-s+ans)%100;
    }
    std::cout<<sum*1.2+ans;
    return 0;
}
