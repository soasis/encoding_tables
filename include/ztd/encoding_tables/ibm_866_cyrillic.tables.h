// =============================================================================
//
// ztd.encoding_tables
// Copyright © 2022-2023 JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.encoding_tables licenses may use
// this file in accordance with the commercial license agreement provided
// with the Software or, alternatively, in accordance with the terms
// contained in a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License") for non-commercial use; you may not use
// this file except in compliance with the License. You may obtain a copy
// of the License at
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

#ifndef ZTD_ENCODING_TABLES_IBM_866_CYRILLIC_TABLES_H
#define ZTD_ENCODING_TABLES_IBM_866_CYRILLIC_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_ibm_866_cyrillic_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_ibm_866_cyrillic_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_ibm_866_cyrillic_index_code_point_map[128]
     #if ZTD_IS_ON(ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR)
= {
	       { 0, 0x0410 },
	       { 1, 0x0411 },
	       { 2, 0x0412 },
	       { 3, 0x0413 },
	       { 4, 0x0414 },
	       { 5, 0x0415 },
	       { 6, 0x0416 },
	       { 7, 0x0417 },
	       { 8, 0x0418 },
	       { 9, 0x0419 },
	       { 10, 0x041A },
	       { 11, 0x041B },
	       { 12, 0x041C },
	       { 13, 0x041D },
	       { 14, 0x041E },
	       { 15, 0x041F },
	       { 16, 0x0420 },
	       { 17, 0x0421 },
	       { 18, 0x0422 },
	       { 19, 0x0423 },
	       { 20, 0x0424 },
	       { 21, 0x0425 },
	       { 22, 0x0426 },
	       { 23, 0x0427 },
	       { 24, 0x0428 },
	       { 25, 0x0429 },
	       { 26, 0x042A },
	       { 27, 0x042B },
	       { 28, 0x042C },
	       { 29, 0x042D },
	       { 30, 0x042E },
	       { 31, 0x042F },
	       { 32, 0x0430 },
	       { 33, 0x0431 },
	       { 34, 0x0432 },
	       { 35, 0x0433 },
	       { 36, 0x0434 },
	       { 37, 0x0435 },
	       { 38, 0x0436 },
	       { 39, 0x0437 },
	       { 40, 0x0438 },
	       { 41, 0x0439 },
	       { 42, 0x043A },
	       { 43, 0x043B },
	       { 44, 0x043C },
	       { 45, 0x043D },
	       { 46, 0x043E },
	       { 47, 0x043F },
	       { 48, 0x2591 },
	       { 49, 0x2592 },
	       { 50, 0x2593 },
	       { 51, 0x2502 },
	       { 52, 0x2524 },
	       { 53, 0x2561 },
	       { 54, 0x2562 },
	       { 55, 0x2556 },
	       { 56, 0x2555 },
	       { 57, 0x2563 },
	       { 58, 0x2551 },
	       { 59, 0x2557 },
	       { 60, 0x255D },
	       { 61, 0x255C },
	       { 62, 0x255B },
	       { 63, 0x2510 },
	       { 64, 0x2514 },
	       { 65, 0x2534 },
	       { 66, 0x252C },
	       { 67, 0x251C },
	       { 68, 0x2500 },
	       { 69, 0x253C },
	       { 70, 0x255E },
	       { 71, 0x255F },
	       { 72, 0x255A },
	       { 73, 0x2554 },
	       { 74, 0x2569 },
	       { 75, 0x2566 },
	       { 76, 0x2560 },
	       { 77, 0x2550 },
	       { 78, 0x256C },
	       { 79, 0x2567 },
	       { 80, 0x2568 },
	       { 81, 0x2564 },
	       { 82, 0x2565 },
	       { 83, 0x2559 },
	       { 84, 0x2558 },
	       { 85, 0x2552 },
	       { 86, 0x2553 },
	       { 87, 0x256B },
	       { 88, 0x256A },
	       { 89, 0x2518 },
	       { 90, 0x250C },
	       { 91, 0x2588 },
	       { 92, 0x2584 },
	       { 93, 0x258C },
	       { 94, 0x2590 },
	       { 95, 0x2580 },
	       { 96, 0x0440 },
	       { 97, 0x0441 },
	       { 98, 0x0442 },
	       { 99, 0x0443 },
	       { 100, 0x0444 },
	       { 101, 0x0445 },
	       { 102, 0x0446 },
	       { 103, 0x0447 },
	       { 104, 0x0448 },
	       { 105, 0x0449 },
	       { 106, 0x044A },
	       { 107, 0x044B },
	       { 108, 0x044C },
	       { 109, 0x044D },
	       { 110, 0x044E },
	       { 111, 0x044F },
	       { 112, 0x0401 },
	       { 113, 0x0451 },
	       { 114, 0x0404 },
	       { 115, 0x0454 },
	       { 116, 0x0407 },
	       { 117, 0x0457 },
	       { 118, 0x040E },
	       { 119, 0x045E },
	       { 120, 0x00B0 },
	       { 121, 0x2219 },
	       { 122, 0x00B7 },
	       { 123, 0x221A },
	       { 124, 0x2116 },
	       { 125, 0x00A4 },
	       { 126, 0x25A0 },
	       { 127, 0x00A0 },
       };
#else
;
#endif

#endif
