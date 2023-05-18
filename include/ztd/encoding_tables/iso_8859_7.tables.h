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

#ifndef ZTD_ENCODING_TABLES_ISO_8859_7_TABLES_H
#define ZTD_ENCODING_TABLES_ISO_8859_7_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_iso_8859_7_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_iso_8859_7_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_iso_8859_7_index_code_point_map[125]
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
	       { 33, 0x2018 },
	       { 34, 0x2019 },
	       { 35, 0x00A3 },
	       { 36, 0x20AC },
	       { 37, 0x20AF },
	       { 38, 0x00A6 },
	       { 39, 0x00A7 },
	       { 40, 0x00A8 },
	       { 41, 0x00A9 },
	       { 42, 0x037A },
	       { 43, 0x00AB },
	       { 44, 0x00AC },
	       { 45, 0x00AD },
	       { 47, 0x2015 },
	       { 48, 0x00B0 },
	       { 49, 0x00B1 },
	       { 50, 0x00B2 },
	       { 51, 0x00B3 },
	       { 52, 0x0384 },
	       { 53, 0x0385 },
	       { 54, 0x0386 },
	       { 55, 0x00B7 },
	       { 56, 0x0388 },
	       { 57, 0x0389 },
	       { 58, 0x038A },
	       { 59, 0x00BB },
	       { 60, 0x038C },
	       { 61, 0x00BD },
	       { 62, 0x038E },
	       { 63, 0x038F },
	       { 64, 0x0390 },
	       { 65, 0x0391 },
	       { 66, 0x0392 },
	       { 67, 0x0393 },
	       { 68, 0x0394 },
	       { 69, 0x0395 },
	       { 70, 0x0396 },
	       { 71, 0x0397 },
	       { 72, 0x0398 },
	       { 73, 0x0399 },
	       { 74, 0x039A },
	       { 75, 0x039B },
	       { 76, 0x039C },
	       { 77, 0x039D },
	       { 78, 0x039E },
	       { 79, 0x039F },
	       { 80, 0x03A0 },
	       { 81, 0x03A1 },
	       { 83, 0x03A3 },
	       { 84, 0x03A4 },
	       { 85, 0x03A5 },
	       { 86, 0x03A6 },
	       { 87, 0x03A7 },
	       { 88, 0x03A8 },
	       { 89, 0x03A9 },
	       { 90, 0x03AA },
	       { 91, 0x03AB },
	       { 92, 0x03AC },
	       { 93, 0x03AD },
	       { 94, 0x03AE },
	       { 95, 0x03AF },
	       { 96, 0x03B0 },
	       { 97, 0x03B1 },
	       { 98, 0x03B2 },
	       { 99, 0x03B3 },
	       { 100, 0x03B4 },
	       { 101, 0x03B5 },
	       { 102, 0x03B6 },
	       { 103, 0x03B7 },
	       { 104, 0x03B8 },
	       { 105, 0x03B9 },
	       { 106, 0x03BA },
	       { 107, 0x03BB },
	       { 108, 0x03BC },
	       { 109, 0x03BD },
	       { 110, 0x03BE },
	       { 111, 0x03BF },
	       { 112, 0x03C0 },
	       { 113, 0x03C1 },
	       { 114, 0x03C2 },
	       { 115, 0x03C3 },
	       { 116, 0x03C4 },
	       { 117, 0x03C5 },
	       { 118, 0x03C6 },
	       { 119, 0x03C7 },
	       { 120, 0x03C8 },
	       { 121, 0x03C9 },
	       { 122, 0x03CA },
	       { 123, 0x03CB },
	       { 124, 0x03CC },
	       { 125, 0x03CD },
	       { 126, 0x03CE },
       };
#else
;
#endif

#endif
