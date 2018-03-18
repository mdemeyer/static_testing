#include "static_testing/static_testing.hpp"

namespace test_assert_lt
{

using namespace static_testing;
using test_case = void;

constexpr test_case assertLesser() {
    assert_lt<1, 2>();
}

constexpr test_case assertSortedLesserToGreater() {
    assert_lt<1, 2, 3>();
    assert_lt<38, 50, 100>();
}

}
