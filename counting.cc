#include <iostream>
#include <fstream>
#include <string>
int countLine(String s){
int line = 1;
string i = s.substring(0,1);
while (i != s.length()-1)
{
if (s.substring(i,i+1).equals('/n'))
line++;

}
return lines;
}
int countChar(String s)
{
	return s.size();
	
	
}
int main() {
    //int number_of_lines = 0, c;
	String s;
    cin<<s;

   
    std::cout << countLine(s)<<" lines" << std::endl;
    std::cout<<countChar(s)<<" characters"<<std:endl;
    return 0;
}
