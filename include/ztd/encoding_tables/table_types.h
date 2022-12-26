// =============================================================================
//
// ztd.encoding_tables
// Copyright © 2022-2023 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.encoding_tables licenses may use this file in
// accordance with the commercial license agreement provided with the
// Software or, alternatively, in accordance with the terms contained in
// a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License") for non-commercial use; you may not use this
// file except in compliance with the License. You may obtain a copy of the
// License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// ============================================================================ //

#pragma once

#ifndef ZTD_ENCODING_TABLES_ENCODING_TYPES_TABLES_H
#define ZTD_ENCODING_TABLES_ENCODING_TYPES_TABLES_H

#include <ztd/encoding_tables/version.h>

#if ZTD_IS_ON(ZTD_C)
#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>
#else
#include <cstddef>
#include <cstdint>
#endif

typedef uint_least16_t ztd_et_index16;
typedef ztd_et_index16 ztd_et_index16_code_point_t[2];

typedef uint_least32_t ztd_et_index32;
typedef ztd_et_index32 ztd_et_index32_code_point_t[2];

typedef bool(ztd_et_basic_lookup_index_to_code_point_function)(size_t, uint_least32_t*);
typedef bool(ztd_et_basic_lookup_code_point_to_index_function)(uint_least32_t, size_t*);

#endif
