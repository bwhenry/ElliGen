//---------------------------------------------------------
// Grid stores the location data of all nodes as well as
// handling inport/export.
//---------------------------------------------------------

#ifndef GRID_HPP
#define GRID_HPP

#include <vector>

class Grid
{
public:

    // making this a struct for now, if it starts to need 
    // functionality it can be changed to a class
    struct Node
    {
        double X, Y;
    };
    
    Grid();
    ~Grid();
    
private:
    std::vector<std::vector<Node>> mGridPoints;
};

#endif // !GRID.HPP