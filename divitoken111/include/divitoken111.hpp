#include <eosio/eosio.hpp>
using namespace eosio;

CONTRACT divitoken111 : public contract {
   public:
      using contract::contract;

      ACTION test( );

      using test_action = action_wrapper<"test"_n, &divitoken111::test>;
};
