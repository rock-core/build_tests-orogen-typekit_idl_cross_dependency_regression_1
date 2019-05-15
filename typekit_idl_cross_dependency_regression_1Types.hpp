#ifndef typekit_idl_cross_dependency_regression_1Types_HPP
#define typekit_idl_cross_dependency_regression_1Types_HPP

#include <base/Angle.hpp>

namespace typekit_idl_cross_dependency_regression_1 {
    // First structure, depends on stuff from base/orogen/types
    struct BaseUsingStruct {
        base::Angle angle;
    };

    // Second structure, not depending on stuff from base/orogen/types
    struct StdUsingStruct {
        int angle;
    };
}


#endif
