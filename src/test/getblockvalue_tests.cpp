#include <boost/test/unit_test.hpp>

#include "main.h"

BOOST_AUTO_TEST_SUITE(GetBlockValue_tests)

BOOST_AUTO_TEST_CASE(GetBlockValue_limits)
{
    //
    // Check that the decrease of the block reward is working
    // according to the model data.
    //
    BOOST_CHECK_EQUAL(_GetBlockValue(1,0,0),     1000*COIN);

    // Segment 1:
    BOOST_CHECK_EQUAL(_GetBlockValue(2,0,0),       50*COIN);
    BOOST_CHECK_EQUAL(_GetBlockValue(10000,0,0),   50*COIN);
    BOOST_CHECK_EQUAL(_GetBlockValue(77777,0,0),   50*COIN);

    // Segment 2:
    BOOST_CHECK_EQUAL(_GetBlockValue(77778,0,0),   25*COIN);
    BOOST_CHECK_EQUAL(_GetBlockValue(77897,0,0),   25*COIN);
    BOOST_CHECK_EQUAL(_GetBlockValue(77898,0,0),   2497984);
    BOOST_CHECK_EQUAL(_GetBlockValue(80641,0,0),   2453630);
    BOOST_CHECK_EQUAL(_GetBlockValue(135362,0,0),  1534275);
    BOOST_CHECK_EQUAL(_GetBlockValue(167176,0,0),  1000000);
    BOOST_CHECK_EQUAL(_GetBlockValue(167177,0,0),  1000000);

    // Segment 3:
    BOOST_CHECK_EQUAL(_GetBlockValue(167178,0,0),   999306);
    BOOST_CHECK_EQUAL(_GetBlockValue(239044,0,0),   584028);
    BOOST_CHECK_EQUAL(_GetBlockValue(253577,0,0),   500000);

    // Segment 4:
    BOOST_CHECK_EQUAL(_GetBlockValue(253578,0,0),   499891);
    BOOST_CHECK_EQUAL(_GetBlockValue(604937,0,0),   180000);

    // Segment 5:
    BOOST_CHECK_EQUAL(_GetBlockValue(604938,0,0),   179954);
    BOOST_CHECK_EQUAL(_GetBlockValue(1000000,0,0),   26600);
    BOOST_CHECK_EQUAL(_GetBlockValue(1049177,0,0),    7547);

    // Segment 6:
    BOOST_CHECK_EQUAL(_GetBlockValue(1049178,0,0),    7500);
    BOOST_CHECK_EQUAL(_GetBlockValue(1910000,0,0),    7500);
    BOOST_CHECK_EQUAL(_GetBlockValue(1913378,0,0),    7500);
    BOOST_CHECK_EQUAL(_GetBlockValue(1913379,0,0),    7880);

    // Segment 7:
    BOOST_CHECK_EQUAL(_GetBlockValue(1913380,0,0),       0);
    BOOST_CHECK_EQUAL(_GetBlockValue(5000000,0,0),       0);
    BOOST_CHECK_EQUAL(_GetBlockValue(10000000,0,0),      0);
    BOOST_CHECK_EQUAL(_GetBlockValue(90000000,0,0),      0);
    BOOST_CHECK_EQUAL(_GetBlockValue(500000001,0,0),     0);
}

BOOST_AUTO_TEST_SUITE_END()
