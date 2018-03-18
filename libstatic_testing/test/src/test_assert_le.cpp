#include "static_testing/static_testing.hpp"

namespace test_assert_le
{

using namespace static_testing;
using test_case = void;

constexpr test_case assertLesserOrEqual() {
    assert_le<1, 2>();
    assert_le<2, 2>();
}

constexpr test_case assertSortedLesserOrEqualToGreater() {
    assert_le<1, 2, 3>();
    assert_le<2, 2, 3>();
    assert_le<1, 2, 2>();
    assert_le<1, 2, 3, 3>();
}

}
