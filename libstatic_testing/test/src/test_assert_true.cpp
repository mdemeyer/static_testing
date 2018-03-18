#include "static_testing/static_testing.hpp"

namespace test_assert_true
{

using namespace static_testing;
using test_case = void;

constexpr test_case assertTrue() {
    assert_true<true>();
}

constexpr test_case assertNotFalse() {
    assert_true<!false>();
}

constexpr test_case assertAllTrue() {
    assert_true<true, true>();
    assert_true<true, true, !false>();
}

}
