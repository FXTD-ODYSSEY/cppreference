// cppreference link https://en.cppreference.com/w/cpp/utility/unreachable
#include <cassert>
#include <cstddef>
#include <cstdint>
#include <utility>
#include <vector>

struct Color {
    std::uint8_t r, g, b, a;
};

// Assume that only restricted set of texture caps is supported.
void generate_texture(std::vector<Color>& tex, std::size_t xy)
{
    switch (xy) {
    case 128:
        [[fallthrough]];
    case 256:
        [[fallthrough]];
    case 512: /* ... */
        tex.clear();
        tex.resize(xy * xy, Color { 0, 0, 0, 0 });
        break;
    default:
        std::unreachable();
    }
}

int main()
{
    std::vector<Color> tex;
    generate_texture(tex, 128); // OK
    assert(tex.size() == 128 * 128);
    generate_texture(tex, 32); // Results in undefined behavior
}
