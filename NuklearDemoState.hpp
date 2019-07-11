#pragma once

#include <Usagi/Graphics/Game/GraphicalGameState.hpp>

namespace usagi
{
class NuklearSystem;

class NuklearDemoState : public GraphicalGameState
{
public:
    NuklearDemoState(Element *parent, std::string name, GraphicalGame *game);
};
}
