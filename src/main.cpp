#include "Funghi.hpp"
#include "Margherita.hpp"
#include "Pizzeria.hpp"
#include "ThreadTimer.hpp"

int main() {
    ThreadTimer time;
    Pizzeria bravo("Bravo Pizza", time);
    Pizzas pizzas = {new Margherita{25.0}, new Funghi{30.0}};

    auto orderId = bravo.makeOrder(pizzas);
    auto price = bravo.calculatePrice(orderId);
    bravo.bakePizzas(orderId);
    bravo.completeOrder(orderId);

    return 0;
}
