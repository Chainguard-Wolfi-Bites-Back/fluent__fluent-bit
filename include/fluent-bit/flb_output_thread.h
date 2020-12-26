/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  Fluent Bit
 *  ==========
 *  Copyright (C) 2019-2020 The Fluent Bit Authors
 *  Copyright (C) 2015-2018 Treasure Data Inc.
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

#ifndef FLB_OUTPUT_THREAD_H
#define FLB_OUTPUT_THREAD_H

int flb_output_thread_pool_create(struct flb_config *config,
                                  struct flb_output_instance *ins);

void flb_output_thread_pool_destroy(struct flb_output_instance *ins);
int flb_output_thread_pool_start(struct flb_output_instance *ins);
int flb_output_thread_pool_flush(struct flb_task *task,
                                 struct flb_output_instance *out_ins,
                                 struct flb_config *config);

#endif
