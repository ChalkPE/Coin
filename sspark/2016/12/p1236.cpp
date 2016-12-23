/**
 * @author ChalkPE <chalk@chalk.pe>
 * @since 2016-12-23
 */

#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

struct Person {
    string name;
    short  height;
    double weight;
};

void print(vector<Person> vec, string what){
    cout << what << endl;
    for(size_t i = 0; i < 5; i++) cout << vec[i].name << ' ' << vec[i].height << ' ' << fixed << setprecision(1) << vec[i].weight << endl;
    cout << endl;
}

int main(){
    vector<Person> vec(5);
    for(size_t i = 0; i < 5; i++) cin >> vec[i].name >> vec[i].height >> vec[i].weight;

    sort(vec.begin(), vec.end(), [](Person a, Person b){ return a.name.compare(b.name) < 0; });
    print(vec, "이름순");

    sort(vec.begin(), vec.end(), [](Person a, Person b){ return a.weight > b.weight; });
    print(vec, "몸무게순");
}