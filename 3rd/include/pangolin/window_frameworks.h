// CMake generated file. Do Not Edit.

#pragma once

namespace pangolin {

void RegisterWinWindowFactory();

inline bool LoadBuiltInWindowFrameworks()
{
    RegisterWinWindowFactory();
    return true;
}

} // pangolin
