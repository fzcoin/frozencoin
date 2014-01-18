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
    BOOST_CHECK_EQUAL(_GetBlockValue(167057,0,0),  1002017);

    // Segment 3:
    BOOST_CHECK_EQUAL(_GetBlockValue(167058,0,0),  1000000);
    BOOST_CHECK_EQUAL(_GetBlockValue(167177,0,0),  1000000);
    BOOST_CHECK_EQUAL(_GetBlockValue(167178,0,0),   999306);
    BOOST_CHECK_EQUAL(_GetBlockValue(239044,0,0),   584028);
    BOOST_CHECK_EQUAL(_GetBlockValue(253457,0,0),   500695);

    // Segment 4:
    BOOST_CHECK_EQUAL(_GetBlockValue(253458,0,0),   500000);
    BOOST_CHECK_EQUAL(_GetBlockValue(253577,0,0),   500000);
    BOOST_CHECK_EQUAL(_GetBlockValue(253578,0,0),   499891);
    BOOST_CHECK_EQUAL(_GetBlockValue(604817,0,0),   180110);

    // Segment 5:
    BOOST_CHECK_EQUAL(_GetBlockValue(604818,0,0),   180000);
    BOOST_CHECK_EQUAL(_GetBlockValue(604937,0,0),   180000);
    BOOST_CHECK_EQUAL(_GetBlockValue(604938,0,0),   179956);
    BOOST_CHECK_EQUAL(_GetBlockValue(1000000,0,0),   32992);
    BOOST_CHECK_EQUAL(_GetBlockValue(1049177,0,0),   14733);
    BOOST_CHECK_EQUAL(_GetBlockValue(1068497,0,0),    7545);

    // Segment 6:
    BOOST_CHECK_EQUAL(_GetBlockValue(1068498,0,0),    7500);
    BOOST_CHECK_EQUAL(_GetBlockValue(1300000,0,0),    7500);
    BOOST_CHECK_EQUAL(_GetBlockValue(1510000,0,0),    7500);
    BOOST_CHECK_EQUAL(_GetBlockValue(1691866,0,0),    7500);
    BOOST_CHECK_EQUAL(_GetBlockValue(1691867,0,0),   10900);

    // Segment 7:
    BOOST_CHECK_EQUAL(_GetBlockValue(1691868,0,0),       0);
    BOOST_CHECK_EQUAL(_GetBlockValue(2000000,0,0),       0);
    BOOST_CHECK_EQUAL(_GetBlockValue(5222222,0,0),       0);
    BOOST_CHECK_EQUAL(_GetBlockValue(13333333,0,0),      0);
    BOOST_CHECK_EQUAL(_GetBlockValue(62626262,0,0),      0);
    BOOST_CHECK_EQUAL(_GetBlockValue(500000001,0,0),     0);
}


BOOST_AUTO_TEST_CASE(GetCoinSupplyTotals)
{
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(100000,false),    440411190151);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(100000,true),     440411190151);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(200000,false),    575124320349);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(200000,true),     575124320349);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(300000,false),    632427694135);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(300000,true),     632427694135);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(400000,false),    673640585154);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(400000,true),     673640585154);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(500000,false),    705746007720);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(500000,true),     705746007720);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(600000,false),    728743963583);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(600000,true),     728743963583);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(700000,false),    745071733417);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(700000,true),     745071733417);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(800000,false),    757672858413);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(800000,true),     757672858413);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(900000,false),    766553746032);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(900000,true),     766553746032);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1000000,false),   771714394976);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1000000,true),    771714394976);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1100000,false),   773338694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1100000,true),    773338694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1200000,false),   774088694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1200000,true),    774088694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1300000,false),   774838694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1300000,true),    774838694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1400000,false),   775588694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1400000,true),    775588694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1500000,false),   776338694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1500000,true),    776338694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1600000,false),   777088694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1600000,true),    777088694100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1691866,false),   777777689100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1691866,true),    777777689100);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1691867,false),   777777700000);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(1691867,true),    777777700000);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(2000000,false),   777777700000);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(2000000,true),    777777700000);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(2100000,false),   777777700000);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(2100000,true),    777777700000);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(2200000,false),   777777700000);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(5000000,true),    777777700000);
    BOOST_CHECK_EQUAL(_GetTotalCoinSupply(10000000,true),   777777700000);
}


BOOST_AUTO_TEST_SUITE_END()
