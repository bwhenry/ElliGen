//---------------------------------------------------------
// SolverBase is a pure virtual base class for all solver
// types.
//---------------------------------------------------------

#ifndef SOLVER_BASE_HPP
#define SOLVER_BASE_HPP

class Grid;

class SolverBase
{
    // both are explicitly defaut as of now SolverBase contains no state
    SolverBase() {};
    ~SolverBase() {};

    virtual void Solve(Grid& aGrid) = 0;
};

#endif // !SOLVER_BASE_HPP

