/*
 * Copyright 2023 Babit Authors
 *
 * This file is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 */

#ifndef BMF_MOCK_DECODER_H
#define BMF_MOCK_DECODER_H

#include <bmf/sdk/module.h>
#include <bmf/sdk/module_registry.h>
USE_BMF_SDK_NS
class MockDecoder : public Module {
public:
    MockDecoder(int node_id,JsonParam json_param);

    int reset();

    int process(Task &task);

    int close();

    int number_ = 0;
};

REGISTER_MODULE_CLASS(MockDecoder)

#endif //BMF_MOCK_DECODER_H
