//
// Created by 36376 on 2023/3/28.
//

#include<iostream>



int main() {
    char ch1 = '/';
    std::cout << ch1 << std::endl;

    const char ch2 = ch1;
    std::cout << ch2 << std::endl;

    const char ch3 = 'a';
    std::cout << ch3 << std::endl;

    std::string c = "123123";
    std::cout << c << " and c.size is " << c.size() << ",and c.length is " << c.length() << std::endl;

    char ch4 = 'abc';
    std::cout << ch4 << std::endl;

    std::string s1(21, '1');
    std::cout << s1 << std::endl;

    std::cout << sizeof(int64_t) << std::endl;

}
