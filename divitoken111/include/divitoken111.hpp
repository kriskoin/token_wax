#include <eosio/eosio.hpp>
using namespace eosio;


CONTRACT divitoken111 : public eosio::contract{
public:
    using contract::contract;
   ACTION test();
   ACTION newdivitk();
};

EOSIO_DISPATCH(divitoken111, (test)(newdivitk));