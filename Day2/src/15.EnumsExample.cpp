#include <iostream>

using namespace std;

typedef enum {
    LC_VALID,
    LC_EXPIRED,
    LC_EXPIERING_SOON
}license_status;

const char* print_license_status(const license_status l_inst){
    const char *status[] = {"is Valid", "has expired", "Will expire in 1 month"};
    return status[l_inst];
}

// int enumExamples(){
int main(){

    license_status l1 = LC_VALID;
    license_status l2 = LC_EXPIRED;
    license_status l3 = LC_EXPIERING_SOON;

    cout << "The license l1: " << print_license_status(l1) << " with value " << l1 << endl;
    cout << "The license l2: " << print_license_status(l2) << " with value " << l2 << endl;
    cout << "The license l3: " << print_license_status(l3) << " with value " << l3 << endl;



    return 0;
}