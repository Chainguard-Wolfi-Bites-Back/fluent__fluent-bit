/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2015-2016 Treasure Data Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef FLB_TD_CONFIG_H
#define FLB_TD_CONFIG_H

#include <mk_core.h>
#include <fluent-bit/flb_io.h>

struct flb_out_td_config {
    int fd;           /* Socket to destination/backend */

    char *api;
    char *db_name;
    char *db_table;

    struct flb_io_upstream *u;
};

struct flb_out_td_config *td_config_init(struct mk_rconf *conf);

#endif
