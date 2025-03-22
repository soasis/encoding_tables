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

#ifndef ZTD_ENCODING_TABLES_ISO_8859_2_TABLES_H
#define ZTD_ENCODING_TABLES_ISO_8859_2_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_iso_8859_2_index_to_code_point(size_t __lookup_index_pointer, uint_least32_t* __p_code_point)
     ZTD_USE(ZTD_NOEXCEPT_IF_CXX);
ZTD_EXTERN_C_I_ bool ztdc_iso_8859_2_code_point_to_index(uint_least32_t __lookup_code_point, size_t* __p_index)
     ZTD_USE(ZTD_NOEXCEPT_IF_CXX);

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_iso_8859_2_index_code_point_map[128]
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
	       { 33, 0x0104 },
	       { 34, 0x02D8 },
	       { 35, 0x0141 },
	       { 36, 0x00A4 },
	       { 37, 0x013D },
	       { 38, 0x015A },
	       { 39, 0x00A7 },
	       { 40, 0x00A8 },
	       { 41, 0x0160 },
	       { 42, 0x015E },
	       { 43, 0x0164 },
	       { 44, 0x0179 },
	       { 45, 0x00AD },
	       { 46, 0x017D },
	       { 47, 0x017B },
	       { 48, 0x00B0 },
	       { 49, 0x0105 },
	       { 50, 0x02DB },
	       { 51, 0x0142 },
	       { 52, 0x00B4 },
	       { 53, 0x013E },
	       { 54, 0x015B },
	       { 55, 0x02C7 },
	       { 56, 0x00B8 },
	       { 57, 0x0161 },
	       { 58, 0x015F },
	       { 59, 0x0165 },
	       { 60, 0x017A },
	       { 61, 0x02DD },
	       { 62, 0x017E },
	       { 63, 0x017C },
	       { 64, 0x0154 },
	       { 65, 0x00C1 },
	       { 66, 0x00C2 },
	       { 67, 0x0102 },
	       { 68, 0x00C4 },
	       { 69, 0x0139 },
	       { 70, 0x0106 },
	       { 71, 0x00C7 },
	       { 72, 0x010C },
	       { 73, 0x00C9 },
	       { 74, 0x0118 },
	       { 75, 0x00CB },
	       { 76, 0x011A },
	       { 77, 0x00CD },
	       { 78, 0x00CE },
	       { 79, 0x010E },
	       { 80, 0x0110 },
	       { 81, 0x0143 },
	       { 82, 0x0147 },
	       { 83, 0x00D3 },
	       { 84, 0x00D4 },
	       { 85, 0x0150 },
	       { 86, 0x00D6 },
	       { 87, 0x00D7 },
	       { 88, 0x0158 },
	       { 89, 0x016E },
	       { 90, 0x00DA },
	       { 91, 0x0170 },
	       { 92, 0x00DC },
	       { 93, 0x00DD },
	       { 94, 0x0162 },
	       { 95, 0x00DF },
	       { 96, 0x0155 },
	       { 97, 0x00E1 },
	       { 98, 0x00E2 },
	       { 99, 0x0103 },
	       { 100, 0x00E4 },
	       { 101, 0x013A },
	       { 102, 0x0107 },
	       { 103, 0x00E7 },
	       { 104, 0x010D },
	       { 105, 0x00E9 },
	       { 106, 0x0119 },
	       { 107, 0x00EB },
	       { 108, 0x011B },
	       { 109, 0x00ED },
	       { 110, 0x00EE },
	       { 111, 0x010F },
	       { 112, 0x0111 },
	       { 113, 0x0144 },
	       { 114, 0x0148 },
	       { 115, 0x00F3 },
	       { 116, 0x00F4 },
	       { 117, 0x0151 },
	       { 118, 0x00F6 },
	       { 119, 0x00F7 },
	       { 120, 0x0159 },
	       { 121, 0x016F },
	       { 122, 0x00FA },
	       { 123, 0x0171 },
	       { 124, 0x00FC },
	       { 125, 0x00FD },
	       { 126, 0x0163 },
	       { 127, 0x02D9 },
       };
#else
     ;
#endif

#endif
