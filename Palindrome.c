// Day 4: Palindrome Number
#include <stdio.h>
int main() {
    int n=121, rev=0, temp=n, rem;
    while(temp!=0){ rem=temp%10; rev=rev*10+rem; temp/=10; }
    if(rev==n) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}
