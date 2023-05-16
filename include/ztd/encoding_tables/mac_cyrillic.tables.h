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

#ifndef ZTD_ENCODING_TABLES_MAC_CYRILLIC_TABLES_H
#define ZTD_ENCODING_TABLES_MAC_CYRILLIC_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_mac_cyrillic_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_mac_cyrillic_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_EXTERN_C_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_mac_cyrillic_index_code_point_map[]
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
	       { 32, 0x2020 },
	       { 33, 0x00B0 },
	       { 34, 0x0490 },
	       { 35, 0x00A3 },
	       { 36, 0x00A7 },
	       { 37, 0x2022 },
	       { 38, 0x00B6 },
	       { 39, 0x0406 },
	       { 40, 0x00AE },
	       { 41, 0x00A9 },
	       { 42, 0x2122 },
	       { 43, 0x0402 },
	       { 44, 0x0452 },
	       { 45, 0x2260 },
	       { 46, 0x0403 },
	       { 47, 0x0453 },
	       { 48, 0x221E },
	       { 49, 0x00B1 },
	       { 50, 0x2264 },
	       { 51, 0x2265 },
	       { 52, 0x0456 },
	       { 53, 0x00B5 },
	       { 54, 0x0491 },
	       { 55, 0x0408 },
	       { 56, 0x0404 },
	       { 57, 0x0454 },
	       { 58, 0x0407 },
	       { 59, 0x0457 },
	       { 60, 0x0409 },
	       { 61, 0x0459 },
	       { 62, 0x040A },
	       { 63, 0x045A },
	       { 64, 0x0458 },
	       { 65, 0x0405 },
	       { 66, 0x00AC },
	       { 67, 0x221A },
	       { 68, 0x0192 },
	       { 69, 0x2248 },
	       { 70, 0x2206 },
	       { 71, 0x00AB },
	       { 72, 0x00BB },
	       { 73, 0x2026 },
	       { 74, 0x00A0 },
	       { 75, 0x040B },
	       { 76, 0x045B },
	       { 77, 0x040C },
	       { 78, 0x045C },
	       { 79, 0x0455 },
	       { 80, 0x2013 },
	       { 81, 0x2014 },
	       { 82, 0x201C },
	       { 83, 0x201D },
	       { 84, 0x2018 },
	       { 85, 0x2019 },
	       { 86, 0x00F7 },
	       { 87, 0x201E },
	       { 88, 0x040E },
	       { 89, 0x045E },
	       { 90, 0x040F },
	       { 91, 0x045F },
	       { 92, 0x2116 },
	       { 93, 0x0401 },
	       { 94, 0x0451 },
	       { 95, 0x044F },
	       { 96, 0x0430 },
	       { 97, 0x0431 },
	       { 98, 0x0432 },
	       { 99, 0x0433 },
	       { 100, 0x0434 },
	       { 101, 0x0435 },
	       { 102, 0x0436 },
	       { 103, 0x0437 },
	       { 104, 0x0438 },
	       { 105, 0x0439 },
	       { 106, 0x043A },
	       { 107, 0x043B },
	       { 108, 0x043C },
	       { 109, 0x043D },
	       { 110, 0x043E },
	       { 111, 0x043F },
	       { 112, 0x0440 },
	       { 113, 0x0441 },
	       { 114, 0x0442 },
	       { 115, 0x0443 },
	       { 116, 0x0444 },
	       { 117, 0x0445 },
	       { 118, 0x0446 },
	       { 119, 0x0447 },
	       { 120, 0x0448 },
	       { 121, 0x0449 },
	       { 122, 0x044A },
	       { 123, 0x044B },
	       { 124, 0x044C },
	       { 125, 0x044D },
	       { 126, 0x044E },
	       { 127, 0x20AC },
       };

#endif
