// TTCAD.cpp: определяет точку входа для приложения.
//

#include "TTCAD.h"
#include "Circle.h"
#include <memory>




int main()
{
    using namespace std;
    unique_ptr<Curve> curve = make_unique<Circle>(5);
    cout << curve->GetLength() << endl;
    cout << curve->GetPointAt(0) << endl;
    cout << curve->GetTangentAt(0) << endl;
}
