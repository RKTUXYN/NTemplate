/**
* Copyright (c) 2018, SOW (https://www.safeonline.world). (https://github.com/RKTUXYN) All rights reserved.
* @author {SOW}
* Copyrights licensed under the New BSD License.
* See the accompanying LICENSE file for terms.
*/
#pragma once
#ifndef NTEMPLATE_ASYNC_DEP_
#define NTEMPLATE_ASYNC_DEP_
#ifndef NTEMPLATE_DEP_
#include "dependancy.h"
#endif //!NTEMPLATE_DEP_
#ifndef NTEMPLATE_ARG_
#include "narg.h"
#endif //!NTEMPLATE_ARG_
#ifndef NTEMPLATE_COMP_
#include "compiler.h"
#endif //!NTEMPLATE_COMP_
#ifndef _CHRONO_
#include <chrono>
#endif //!_CHRONO_
#ifndef _M_CEE ///clr or /clr:pure //_IOSFWD_
#ifndef _THREAD_
#include <thread>
#endif //!_THREAD_
#ifndef UV_H
#include <uv.h>
#endif //!UV_H
#endif //!_M_CEE
#endif//!NTEMPLATE_ASYNC_DEP_