// =============================================================================
//
// ztd.encoding_tables
// Copyright © JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
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

#ifndef ZTD_ENCODING_TABLES_ISO_8859_8_TABLES_H
#define ZTD_ENCODING_TABLES_ISO_8859_8_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_iso_8859_8_index_to_code_point(size_t __lookup_index_pointer, uint_least32_t* __p_code_point)
     ZTD_USE(ZTD_NOEXCEPT_IF_CXX);
ZTD_EXTERN_C_I_ bool ztdc_iso_8859_8_code_point_to_index(uint_least32_t __lookup_code_point, size_t* __p_index)
     ZTD_USE(ZTD_NOEXCEPT_IF_CXX);

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_iso_8859_8_index_code_point_map[92]
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
	       { 34, 0x00A2 },
	       { 35, 0x00A3 },
	       { 36, 0x00A4 },
	       { 37, 0x00A5 },
	       { 38, 0x00A6 },
	       { 39, 0x00A7 },
	       { 40, 0x00A8 },
	       { 41, 0x00A9 },
	       { 42, 0x00D7 },
	       { 43, 0x00AB },
	       { 44, 0x00AC },
	       { 45, 0x00AD },
	       { 46, 0x00AE },
	       { 47, 0x00AF },
	       { 48, 0x00B0 },
	       { 49, 0x00B1 },
	       { 50, 0x00B2 },
	       { 51, 0x00B3 },
	       { 52, 0x00B4 },
	       { 53, 0x00B5 },
	       { 54, 0x00B6 },
	       { 55, 0x00B7 },
	       { 56, 0x00B8 },
	       { 57, 0x00B9 },
	       { 58, 0x00F7 },
	       { 59, 0x00BB },
	       { 60, 0x00BC },
	       { 61, 0x00BD },
	       { 62, 0x00BE },
	       { 95, 0x2017 },
	       { 96, 0x05D0 },
	       { 97, 0x05D1 },
	       { 98, 0x05D2 },
	       { 99, 0x05D3 },
	       { 100, 0x05D4 },
	       { 101, 0x05D5 },
	       { 102, 0x05D6 },
	       { 103, 0x05D7 },
	       { 104, 0x05D8 },
	       { 105, 0x05D9 },
	       { 106, 0x05DA },
	       { 107, 0x05DB },
	       { 108, 0x05DC },
	       { 109, 0x05DD },
	       { 110, 0x05DE },
	       { 111, 0x05DF },
	       { 112, 0x05E0 },
	       { 113, 0x05E1 },
	       { 114, 0x05E2 },
	       { 115, 0x05E3 },
	       { 116, 0x05E4 },
	       { 117, 0x05E5 },
	       { 118, 0x05E6 },
	       { 119, 0x05E7 },
	       { 120, 0x05E8 },
	       { 121, 0x05E9 },
	       { 122, 0x05EA },
	       { 125, 0x200E },
	       { 126, 0x200F },
       };
#else
     ;
#endif

#endif
