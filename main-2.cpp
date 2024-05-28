#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main() {
    Ship s(1, 2);
    Mine m(3, 4);
    Explosion e(5, 6);

    s.move(3, 4);
    m.explode();
    e.apply(s);

    cout << get<0>(s.getPos()) << " " << get<1>(s.getPos()) <<  " " << s.getType() << endl;
    cout << get<0>(m.getPos()) << " " << get<1>(m.getPos()) <<  " " << m.getType() << endl;
    cout << get<0>(e.getPos()) << " " << get<1>(e.getPos()) <<  " " << e.getType() << endl;
}