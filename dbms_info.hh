#ifndef DBMS_INFO_HH
#define DBMS_INFO_HH

#include "config.h"
#include <string>
#include <map>
#include <iostream>

using namespace std;

struct dbms_info {
    string dbms_name;
    string test_db;
    string inst_path;
    int test_port;
    int ouput_or_affect_num;
    bool can_trigger_error_in_txn;
    string host_addr;

    dbms_info(map<string,string>& options);
    dbms_info() {
        dbms_name = "";
        test_db = "";
        inst_path = "";
        test_port = 0;
        ouput_or_affect_num = 0;
        can_trigger_error_in_txn = false;

        host_addr = "";
    };
};

#endif