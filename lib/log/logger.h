#pragma once

#include "log4cplus/logger.h"
#include "log4cplus/loggingmacros.h"
#include "log4cplus/configurator.h"
#include "log4cplus/fileappender.h"
#include "log4cplus/layout.h"
#include "log4cplus/ndc.h"
#include "log4cplus/helpers/loglog.h"
#include "log4cplus/consoleappender.h"

#define LOGGER(x) log4cplus::Logger::getInstance(LOG4CPLUS_TEXT({x}))

void init_logger();
