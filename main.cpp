#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Carro.h"
#include <iostream>


Carro novoCarro("OVK23", "Branco", "Fiat" );

TEST_CASE( "Getters check", "[getters]" ) {
    REQUIRE( novoCarro.getPlaca() == "OVK23" );
    REQUIRE( novoCarro.getCor() == "Branco" );
    REQUIRE( novoCarro.getMarca() == "Fiat" );
}

TEST_CASE( "Setters check", "[setters]" ) {
    novoCarro.setPlaca("KLV00");
    novoCarro.setCor("Preto");
    novoCarro.setMarca("Toyota");

    REQUIRE( novoCarro.getPlaca() == "KLV00" );
    REQUIRE( novoCarro.getCor() == "Preto" );
    REQUIRE( novoCarro.getMarca() == "Toyota" );
}