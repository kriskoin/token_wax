#include <divitoken111.hpp>
ACTION divitoken111::test( ) {
   print_f("Tensting on wax \n");
}




CONTRACT divitoken111 : public eosio::contract{
public:
    using contract::contract;
    ACTION newdivitk() {

        //assign asset attributes
        name author = get_self();
        name category = "divi_cat"_n;
        name owner = "divi_owner"_n;
        std::string idata = R"json({"name": "Divi Token", "desc" : "Example using simple assets framework" })json";
        std::string mdata = R"json({"color": "black", "img" : "https://diviproject.org/" })json";
        bool requireClaim = false;

        //call the simpleassets create action
        action(
            { author, "active"_n },
            "simpleassets"_n,
            "create"_n,
            std::tuple(author, category, owner, idata, mdata, requireClaim)
        )
        .send();

    }
};

EOSIO_DISPATCH(divitoken111, (newdivitk))
