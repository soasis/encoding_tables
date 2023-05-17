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

#ifndef ZTD_ENCODING_TABLES_ISO_8859_5_TABLES_H
#define ZTD_ENCODING_TABLES_ISO_8859_5_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_iso_8859_5_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_iso_8859_5_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_iso_8859_5_index_code_point_map[128]
     #if ZTD_IS_ON(ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR)
= {
	       { 0, 0x0080 },
	       { 1, 0x0081 },
	       { 2, 0x0082 },
	       { 3, 0x0083 },
	       { 4, 0x0084 },
	       { 5, 0x0085 },
	       { 6, 0x0086 },
	       { 7, 0x0087 },
	       { 8, 0x0088 },
	       { 9, 0x0089 },
	       { 10, 0x008A },
	       { 11, 0x008B },
	       { 12, 0x008C },
	       { 13, 0x008D },
	       { 14, 0x008E },
	       { 15, 0x008F },
	       { 16, 0x0090 },
	       { 17, 0x0091 },
	       { 18, 0x0092 },
	       { 19, 0x0093 },
	       { 20, 0x0094 },
	       { 21, 0x0095 },
	       { 22, 0x0096 },
	       { 23, 0x0097 },
	       { 24, 0x0098 },
	       { 25, 0x0099 },
	       { 26, 0x009A },
	       { 27, 0x009B },
	       { 28, 0x009C },
	       { 29, 0x009D },
	       { 30, 0x009E },
	       { 31, 0x009F },
	       { 32, 0x00A0 },
	       { 33, 0x0401 },
	       { 34, 0x0402 },
	       { 35, 0x0403 },
	       { 36, 0x0404 },
	       { 37, 0x0405 },
	       { 38, 0x0406 },
	       { 39, 0x0407 },
	       { 40, 0x0408 },
	       { 41, 0x0409 },
	       { 42, 0x040A },
	       { 43, 0x040B },
	       { 44, 0x040C },
	       { 45, 0x00AD },
	       { 46, 0x040E },
	       { 47, 0x040F },
	       { 48, 0x0410 },
	       { 49, 0x0411 },
	       { 50, 0x0412 },
	       { 51, 0x0413 },
	       { 52, 0x0414 },
	       { 53, 0x0415 },
	       { 54, 0x0416 },
	       { 55, 0x0417 },
	       { 56, 0x0418 },
	       { 57, 0x0419 },
	       { 58, 0x041A },
	       { 59, 0x041B },
	       { 60, 0x041C },
	       { 61, 0x041D },
	       { 62, 0x041E },
	       { 63, 0x041F },
	       { 64, 0x0420 },
	       { 65, 0x0421 },
	       { 66, 0x0422 },
	       { 67, 0x0423 },
	       { 68, 0x0424 },
	       { 69, 0x0425 },
	       { 70, 0x0426 },
	       { 71, 0x0427 },
	       { 72, 0x0428 },
	       { 73, 0x0429 },
	       { 74, 0x042A },
	       { 75, 0x042B },
	       { 76, 0x042C },
	       { 77, 0x042D },
	       { 78, 0x042E },
	       { 79, 0x042F },
	       { 80, 0x0430 },
	       { 81, 0x0431 },
	       { 82, 0x0432 },
	       { 83, 0x0433 },
	       { 84, 0x0434 },
	       { 85, 0x0435 },
	       { 86, 0x0436 },
	       { 87, 0x0437 },
	       { 88, 0x0438 },
	       { 89, 0x0439 },
	       { 90, 0x043A },
	       { 91, 0x043B },
	       { 92, 0x043C },
	       { 93, 0x043D },
	       { 94, 0x043E },
	       { 95, 0x043F },
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
	       { 112, 0x2116 },
	       { 113, 0x0451 },
	       { 114, 0x0452 },
	       { 115, 0x0453 },
	       { 116, 0x0454 },
	       { 117, 0x0455 },
	       { 118, 0x0456 },
	       { 119, 0x0457 },
	       { 120, 0x0458 },
	       { 121, 0x0459 },
	       { 122, 0x045A },
	       { 123, 0x045B },
	       { 124, 0x045C },
	       { 125, 0x00A7 },
	       { 126, 0x045E },
	       { 127, 0x045F },
       };
#else
;
#endif

#endif
