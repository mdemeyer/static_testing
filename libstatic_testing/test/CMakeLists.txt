add_executable(tests
    src/main.cpp

    src/test_assert_eq.cpp
    src/test_assert_ne.cpp

    src/test_assert_ge.cpp
    src/test_assert_gt.cpp

    src/test_assert_le.cpp
    src/test_assert_lt.cpp

    src/test_assert_false.cpp
    src/test_assert_true.cpp
    )

target_link_libraries(tests static_testing)
