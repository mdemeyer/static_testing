#include "static_testing/static_testing.hpp"

namespace test_assert_eq
{

using namespace static_testing;
using test_case = void;

constexpr test_case assertEqualInt() {
    assert_eq<1, 1>();
}

constexpr test_case assertEqualVariable() {
    constexpr int val1 = 1;
    constexpr int val2 = 1;

    assert_eq<val1, val2>();
}

constexpr test_case assertEqualBoolean() {
    assert_eq<true, true>();
}

constexpr test_case assertAllEqual() {
    assert_eq<3, 3, 3>();
    assert_eq<4, 4, 4, 4>();
    assert_eq<5, 5, 5, 5, 5>();
}

constexpr test_case assertAllEqualMutlitpleTypes() {
    constexpr int i = 5;
    constexpr short s = 5;
    constexpr long long l = 5;

    assert_eq<i, s>();
    assert_eq<i, s, l>();
}

}
