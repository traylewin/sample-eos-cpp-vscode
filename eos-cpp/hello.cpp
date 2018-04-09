/**
 *  @file
 *  @copyright defined in eos/LICENSE.txt
 */
#include <hello.hpp>

using namespace eosio;

class hello : public eosio::contract {
    public:
        using contract::contract;

        void hi( account_name user) {
            print("Hello, ", name{user} );
        }
};

EOSIO_ABI( hello, (hi) )