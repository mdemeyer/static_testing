#include "static_testing/static_testing.hpp"

namespace test_assert_ne
{

using namespace static_testing;
using test_case = void;

constexpr test_case assertNotEqual() {
    assert_ne<1, 5>();
}

constexpr test_case assertNotEqualBoolean() {
    assert_ne<true, false>();
    assert_ne<false, true>();
}

constexpr test_case assertNoneEqual() {
    assert_ne<1, 2, 3>();
    assert_ne<1, 3, 2>();
    assert_ne<3, 2, 1>();
}

}
