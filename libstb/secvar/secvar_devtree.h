// SPDX-License-Identifier: Apache-2.0
/* Copyright 2013-2019 IBM Corp. */

#ifndef _SECVAR_DEVTREE_H_
#define _SECVAR_DEVTREE_H_

int secvar_set_secure_mode(void);
void secvar_init_devnode(const char *compatible);

void secvar_set_status(const char *status);
void secvar_set_update_status(uint64_t val);

#endif
