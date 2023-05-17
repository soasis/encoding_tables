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

#ifndef ZTD_ENCODING_TABLES_MAC_ROMAN_TABLES_H
#define ZTD_ENCODING_TABLES_MAC_ROMAN_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_mac_roman_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_mac_roman_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_mac_roman_index_code_point_map[128]
     #if ZTD_IS_ON(ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR)
= {
	       { 0, 0x00C4 },
	       { 1, 0x00C5 },
	       { 2, 0x00C7 },
	       { 3, 0x00C9 },
	       { 4, 0x00D1 },
	       { 5, 0x00D6 },
	       { 6, 0x00DC },
	       { 7, 0x00E1 },
	       { 8, 0x00E0 },
	       { 9, 0x00E2 },
	       { 10, 0x00E4 },
	       { 11, 0x00E3 },
	       { 12, 0x00E5 },
	       { 13, 0x00E7 },
	       { 14, 0x00E9 },
	       { 15, 0x00E8 },
	       { 16, 0x00EA },
	       { 17, 0x00EB },
	       { 18, 0x00ED },
	       { 19, 0x00EC },
	       { 20, 0x00EE },
	       { 21, 0x00EF },
	       { 22, 0x00F1 },
	       { 23, 0x00F3 },
	       { 24, 0x00F2 },
	       { 25, 0x00F4 },
	       { 26, 0x00F6 },
	       { 27, 0x00F5 },
	       { 28, 0x00FA },
	       { 29, 0x00F9 },
	       { 30, 0x00FB },
	       { 31, 0x00FC },
	       { 32, 0x2020 },
	       { 33, 0x00B0 },
	       { 34, 0x00A2 },
	       { 35, 0x00A3 },
	       { 36, 0x00A7 },
	       { 37, 0x2022 },
	       { 38, 0x00B6 },
	       { 39, 0x00DF },
	       { 40, 0x00AE },
	       { 41, 0x00A9 },
	       { 42, 0x2122 },
	       { 43, 0x00B4 },
	       { 44, 0x00A8 },
	       { 45, 0x2260 },
	       { 46, 0x00C6 },
	       { 47, 0x00D8 },
	       { 48, 0x221E },
	       { 49, 0x00B1 },
	       { 50, 0x2264 },
	       { 51, 0x2265 },
	       { 52, 0x00A5 },
	       { 53, 0x00B5 },
	       { 54, 0x2202 },
	       { 55, 0x2211 },
	       { 56, 0x220F },
	       { 57, 0x03C0 },
	       { 58, 0x222B },
	       { 59, 0x00AA },
	       { 60, 0x00BA },
	       { 61, 0x03A9 },
	       { 62, 0x00E6 },
	       { 63, 0x00F8 },
	       { 64, 0x00BF },
	       { 65, 0x00A1 },
	       { 66, 0x00AC },
	       { 67, 0x221A },
	       { 68, 0x0192 },
	       { 69, 0x2248 },
	       { 70, 0x2206 },
	       { 71, 0x00AB },
	       { 72, 0x00BB },
	       { 73, 0x2026 },
	       { 74, 0x00A0 },
	       { 75, 0x00C0 },
	       { 76, 0x00C3 },
	       { 77, 0x00D5 },
	       { 78, 0x0152 },
	       { 79, 0x0153 },
	       { 80, 0x2013 },
	       { 81, 0x2014 },
	       { 82, 0x201C },
	       { 83, 0x201D },
	       { 84, 0x2018 },
	       { 85, 0x2019 },
	       { 86, 0x00F7 },
	       { 87, 0x25CA },
	       { 88, 0x00FF },
	       { 89, 0x0178 },
	       { 90, 0x2044 },
	       { 91, 0x20AC },
	       { 92, 0x2039 },
	       { 93, 0x203A },
	       { 94, 0xFB01 },
	       { 95, 0xFB02 },
	       { 96, 0x2021 },
	       { 97, 0x00B7 },
	       { 98, 0x201A },
	       { 99, 0x201E },
	       { 100, 0x2030 },
	       { 101, 0x00C2 },
	       { 102, 0x00CA },
	       { 103, 0x00C1 },
	       { 104, 0x00CB },
	       { 105, 0x00C8 },
	       { 106, 0x00CD },
	       { 107, 0x00CE },
	       { 108, 0x00CF },
	       { 109, 0x00CC },
	       { 110, 0x00D3 },
	       { 111, 0x00D4 },
	       { 112, 0xF8FF },
	       { 113, 0x00D2 },
	       { 114, 0x00DA },
	       { 115, 0x00DB },
	       { 116, 0x00D9 },
	       { 117, 0x0131 },
	       { 118, 0x02C6 },
	       { 119, 0x02DC },
	       { 120, 0x00AF },
	       { 121, 0x02D8 },
	       { 122, 0x02D9 },
	       { 123, 0x02DA },
	       { 124, 0x00B8 },
	       { 125, 0x02DD },
	       { 126, 0x02DB },
	       { 127, 0x02C7 },

       };
#else
;
#endif

#endif
