#include "static_testing/static_testing.hpp"

namespace test_assert_false
{

using namespace static_testing;
using test_case = void;

constexpr test_case assertFalse() {
    assert_false<false>();
}

constexpr test_case assertNotTrue() {
    assert_false<!true>();
}

constexpr test_case assertAllFalse() {
    assert_false<false, false>();
    assert_false<false, false, false>();
}

}
