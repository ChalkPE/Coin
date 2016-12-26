/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-26
 */

#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Person {
    public: string name, phone, address; void scan(){ cin >> name >> phone >> address; }
    void print(){ cout << "이름 : " << name << endl << "전화번호 : " << phone << endl << "주소 : " << address << endl; }
};

int main(){
    vector<Person> v(3); for(size_t i = 0; i < 3; i++) v[i].scan();
    max_element(v.begin(), v.end(), [](Person a, Person b){ return a.name.compare(b.name) > 0; })->print();
}