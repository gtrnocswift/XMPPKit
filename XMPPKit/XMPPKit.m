//
//  XMPPKit.m
//  XMPPKit
//
//  Created by swift on 12/5/14.
//  Copyright (c) 2014 Georgia Institute of Technology. All rights reserved.
//

#import "XMPPKit.h"

// Log levels: off, error, warn, info, verbose
#if DEBUG
static const int ddLogLevel = LOG_LEVEL_VERBOSE;
#else
static const int ddLogLevel = LOG_LEVEL_INFO;
#endif