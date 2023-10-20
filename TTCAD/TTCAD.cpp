#include "TTCAD.h"
#include "Curves/Curves.hpp"
#include <memory>
#include <algorithm>
#include <random>
#include <exception>
#include <vector>
#include <assert.h>

std::shared_ptr<Curve> RandomCurve(double min_radius, double max_radius)
{
    const int n_curve_types = static_cast<int>(CurveType::TYPES_COUNT);
    using namespace std;
    mt19937 generator(random_device{}());
    uniform_real<> reals(min_radius, max_radius);

    int r = rand();

    switch (r % n_curve_types)
    {
    case 0:
        return make_shared<Circle>(reals(generator));
    case 1:
        return make_shared<Helix>(reals(generator));
    case 2:
        return make_shared<Ellipse>(reals(generator), reals(generator));
    default:
        throw logic_error("Unknown type!");
    }
}


void Test(size_t n)
{
    using namespace std;
    using  Curve_ptr = shared_ptr<Curve>;
    vector<Curve_ptr> v1;
    v1.reserve(n);
    for (size_t i = 0; i < n; i++)
    {
        v1.emplace_back(RandomCurve(0, 10));
    }

    for (const auto& curve : v1)
    {
        cout << "Point: " << curve->GetPointAt(M_PI_4) << "\tTangent: " << curve->GetTangentAt(M_PI_4) << endl;
    }

    vector<Curve_ptr> circles;
    copy_if(v1.begin(), v1.end(), back_inserter(circles),
        [](const Curve_ptr& curve) -> bool
        {
            return curve->GetType() == CurveType::CIRCLE;
        });

    sort(circles.begin(), circles.end(),
        [](const Curve_ptr& curve1, const Curve_ptr& curve2) -> bool
        {
            return curve1->GetLength() < curve2->GetLength();
        });
    double length = 0;
    for (const auto& curve : circles)
    {
        length += curve->GetLength();
    }
    cout << "Total length of circles: " << length << endl;
}

int main()
{
    Test(10);
}
