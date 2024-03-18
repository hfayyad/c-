#include <iostream>

// Function to calculate the total trade amount
double calculateTradeAmount(int price, double volume) {
    return price * volume;
}

int main() {
    // Variables declaration
    int currentPrice = 291; // Price of the stock
    double tradeVolume = 853.25; // Volume of the trade
    bool isBuySignal = true; // Signal to buy or sell
    char tradeAction = 'B'; // Action to take

    // Using variables
    std::cout << "Current Price: " << currentPrice << std::endl;
    std::cout << "Trade Volume: " << tradeVolume << std::endl;
    std::cout << "Buy Signal: " << isBuySignal << std::endl;
    std::cout << "Trade Action: " << tradeAction << std::endl;

    // Conditional statement to decide action
    if (currentPrice < 280 && isBuySignal) { // If price is less than 150 and buy signal is true
        std::cout << "Buy" << std::endl;
    } else {
        std::cout << "Hold or Sell" << std::endl;
    }

    // Function invocation to calculate trade amount
    double totalTradeAmount = calculateTradeAmount(currentPrice, tradeVolume);

    // Output
    std::cout << "Total Trade Amount: " << totalTradeAmount << std::endl;

    return 0;
}
