
#include "Money.h"

int main(){
    Money lave(7543, 32);
    Money lave2, lave3;

    lave2 = lave * 3;
    lave3 = lave2 / 100;

    lave.printMoney();
    lave2.printMoney();
    lave3.printMoney();
    return 0;
}
