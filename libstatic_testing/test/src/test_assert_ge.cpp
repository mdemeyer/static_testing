#include "static_testing/static_testing.hpp"

namespace test_assert_ge
{

using namespace static_testing;
using test_case = void;

constexpr test_case assertGreaterOrEqual() {
    assert_ge<2, 1>();
    assert_ge<2, 2>();
}

constexpr test_case assertSortedGreaterOrEqualToLesser() {
    assert_ge<3, 2, 1>();
    assert_ge<1337, 1337, 1337>();
}

}
