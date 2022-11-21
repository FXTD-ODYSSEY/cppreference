// cppreference link https://en.cppreference.com/w/cpp/chrono/duration/max
#include <chrono>
#include <cstdint>
#include <iomanip>
#include <iostream>

int main()
{
    constexpr uint64_t chrono_years_max = std::chrono::years::max().count();
    constexpr uint64_t chrono_seconds_max = std::chrono::seconds::max().count();

    constexpr uint64_t age_of_universe_in_years { 13'787'000'000 }; //: λCDM ≈ k₁/H₀ = k₂/42.
    constexpr uint64_t seconds_per_year { 365'25 * 24 * 36 }; // 365¼ × 24 × 60 × 60
    constexpr uint64_t age_of_universe_in_seconds { age_of_universe_in_years * seconds_per_year };

    std::cout
        << "The Age of the Universe is ≈ "
        << std::scientific << std::setprecision(2)
        << static_cast<double>(age_of_universe_in_years) << " years or "
        << static_cast<double>(age_of_universe_in_seconds) << " seconds.\n\n"
        << "chrono::years::max() = " << chrono_years_max << ", sizeof(chrono::years) = "
        << sizeof(std::chrono::years) << " bytes.\n"
                                         "chrono::years "
        << (age_of_universe_in_years <= chrono_years_max ? "CAN" : "CANNOT")
        << " keep the Age of the Universe in YEARS.\n\n"
        << "chrono::seconds::max() = " << chrono_seconds_max << ", sizeof(chrono::seconds) = "
        << sizeof(std::chrono::seconds) << " bytes.\n"
                                           "chrono::seconds "
        << (age_of_universe_in_seconds <= chrono_seconds_max ? "CAN" : "CANNOT")
        << " keep the Age of the Universe in SECONDS.\n";
}
