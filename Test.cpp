#include "doctest.h"
#include "sources/Point.hpp"
#include "sources/Character.hpp"
#include "sources/Cowboy.hpp"
#include "sources/Ninja.hpp"
#include "sources/OldNinja.hpp"
#include "sources/Team.hpp"


using namespace ariel;
using namespace std;
TEST_CASE("Test Point class") {
    // Test case 1: Testing the distance function
    SUBCASE("Test distance function") {
        Point p1(0.0, 0.0);
        Point p2(3.0, 4.0);

        double expectedDistance = 5.0;
        double calculatedDistance = p1.distance(p2);

        CHECK_EQ(expectedDistance, calculatedDistance);
    }
}
TEST_CASE("Test Character class") {
    // Test case 1: Testing the distance function
    SUBCASE("Test distance function") {
        Point p1(0.0, 0.0);
        Point p2(3.0, 4.0);
        Character character("John Doe", p1);

        double expectedDistance = 5.0;
        double calculatedDistance = character.distance(p2);

        CHECK_EQ(expectedDistance, calculatedDistance);
    }

    // Test case 2: Testing the print function
    SUBCASE("Test print function") {
        Point p(2.5, 1.5);
        Character character("Alice", p);

        string expectedOutput = "Name: Alice";
        string actualOutput = character.print();

        CHECK_EQ(expectedOutput, actualOutput);
    }
}
TEST_CASE("Test Cowboy class") {
    // Test case 1: Testing the shoot function
    SUBCASE("Test shoot function") {
        Point p(0.0, 0.0);
        Cowboy cowboy("John Doe", p);
        Character enemy("Enemy", p);

        cowboy.shoot(&enemy);

        // Assert the expected changes after shooting
        CHECK_EQ(cowboy.hasBullets(), false);
        CHECK_EQ(enemy.getHealth(), 90); // Assuming shooting decreases the enemy's health by 10
    }

    // Test case 2: Testing the getStockpile function
    SUBCASE("Test getStockpile function") {
        Point p(2.5, 1.5);
        Cowboy cowboy("Alice", p);

        int expectedStockpile = 6;
        int actualStockpile = cowboy.getStockpile();

        CHECK_EQ(expectedStockpile, actualStockpile);
    }
}
TEST_CASE("Test Ninja class") {
    SUBCASE("Test move function") {
        Point p1(0.0, 0.0);
        Point p2(2.0, 2.0);
        Ninja ninja("Ninja", p1);
        Character character("Character", p2);

        ninja.move(&character);

        // Assert the expected changes after moving
        CHECK_EQ(ninja.getLocation().getX(), p2.getX());
        CHECK_EQ(ninja.getLocation().getY(), p2.getY());
    }

    SUBCASE("Test slash function") {
        Point p1(0.0, 0.0);
        Point p2(1.0, 1.0);
        Ninja ninja("Ninja", p1);
        Character character("Character", p2);

        ninja.slash(&character);

        // Assert the expected changes after slashing
        CHECK_EQ(character.getHealth(), 90); // Assuming slashing decreases the character's health by 10
    }
}
TEST_CASE("Test OldNinja class") {
    SUBCASE("Test constructor") {
        Point p(0.0, 0.0);
        OldNinja oldNinja("OldNinja", p);

        // Assert the initial state after constructing an OldNinja object
        CHECK_EQ(oldNinja.getName(), "OldNinja");
        CHECK_EQ(oldNinja.getLocation().getX(), p.getX());
        CHECK_EQ(oldNinja.getLocation().getY(), p.getY());
        CHECK_EQ(oldNinja.getHealth(), 100);
    }
}
TEST_CASE("Test Team class") {
    SUBCASE("Test add function") {
        Team team;
        Character* character1 = new Cowboy("John Doe", Point(0.0, 0.0));
        Character* character2 = new OldNinja("Jane Smith", Point(1.0, 1.0));

        team.add(character1);
        team.add(character2);

        // Assert the size of the team after adding characters
        CHECK_EQ(team.stillAlive(), 2);
    }

    SUBCASE("Test stillAlive function") {
        Team team;
        Character* character1 = new Cowboy("John Doe", Point(0.0, 0.0));
        Character* character2 = new OldNinja("Jane Smith", Point(1.0, 1.0));

        team.add(character1);
        team.add(character2);

        // Assert the number of characters still alive in the team
        CHECK_EQ(team.stillAlive(), 2);

       
    }

}
TEST_CASE("Test TrainedNinja class") {
    SUBCASE("Test constructor") {
        ariel::Point location(1.0, 2.0);
        ariel::TrainedNinja ninja("Ninja Name", location);

        // Assert the name and location of the TrainedNinja object
        CHECK_EQ(ninja.getName(), "Ninja Name");
        CHECK_EQ(ninja.getLocation().getX(), 1.0);
        CHECK_EQ(ninja.getLocation().getY(), 2.0);
    }

}
TEST_CASE("Test YoungNinja class") {
    SUBCASE("Test constructor") {
        ariel::Point location(1.0, 2.0);
        ariel::YoungNinja ninja("Ninja Name", location);

        // Assert the name and location of the YoungNinja object
        CHECK_EQ(ninja.getName(), "Ninja Name");
        CHECK_EQ(ninja.getLocation().getX(), 1.0);
        CHECK_EQ(ninja.getLocation().getY(), 2.0);
    }

}


