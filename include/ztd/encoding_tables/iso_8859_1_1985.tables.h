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

#ifndef ZTD_ENCODING_TABLES_ISO_8859_1_1985_TABLES_H
#define ZTD_ENCODING_TABLES_ISO_8859_1_1985_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_iso_8859_1_1985_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_iso_8859_1_1985_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_ENCODING_TABLES_EXTERN_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index16_code_point_t
     ztd_et_iso_8859_1_1985_index_code_point_map[191]
#if ZTD_IS_ON(ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR)
     = {
	       { 0x20, 0x0020 },
	       { 0x21, 0x0021 },
	       { 0x22, 0x0022 },
	       { 0x23, 0x0023 },
	       { 0x24, 0x0024 },
	       { 0x25, 0x0025 },
	       { 0x26, 0x0026 },
	       { 0x27, 0x0027 },
	       { 0x28, 0x0028 },
	       { 0x29, 0x0029 },
	       { 0x2A, 0x002A },
	       { 0x2B, 0x002B },
	       { 0x2C, 0x002C },
	       { 0x2D, 0x002D },
	       { 0x2E, 0x002E },
	       { 0x2F, 0x002F },
	       { 0x30, 0x0030 },
	       { 0x31, 0x0031 },
	       { 0x32, 0x0032 },
	       { 0x33, 0x0033 },
	       { 0x34, 0x0034 },
	       { 0x35, 0x0035 },
	       { 0x36, 0x0036 },
	       { 0x37, 0x0037 },
	       { 0x38, 0x0038 },
	       { 0x39, 0x0039 },
	       { 0x3A, 0x003A },
	       { 0x3B, 0x003B },
	       { 0x3C, 0x003C },
	       { 0x3D, 0x003D },
	       { 0x3E, 0x003E },
	       { 0x3F, 0x003F },

	       { 0x40, 0x0040 },
	       { 0x41, 0x0041 },
	       { 0x42, 0x0042 },
	       { 0x43, 0x0043 },
	       { 0x44, 0x0044 },
	       { 0x45, 0x0045 },
	       { 0x46, 0x0046 },
	       { 0x47, 0x0047 },
	       { 0x48, 0x0048 },
	       { 0x49, 0x0049 },
	       { 0x4A, 0x004A },
	       { 0x4B, 0x004B },
	       { 0x4C, 0x004C },
	       { 0x4D, 0x004D },
	       { 0x4E, 0x004E },
	       { 0x4F, 0x004F },

	       { 0x50, 0x0050 },
	       { 0x51, 0x0051 },
	       { 0x52, 0x0052 },
	       { 0x53, 0x0053 },
	       { 0x54, 0x0054 },
	       { 0x55, 0x0055 },
	       { 0x56, 0x0056 },
	       { 0x57, 0x0057 },
	       { 0x58, 0x0058 },
	       { 0x59, 0x0059 },
	       { 0x5A, 0x005A },
	       { 0x5B, 0x005B },
	       { 0x5C, 0x005C },
	       { 0x5D, 0x005D },
	       { 0x5E, 0x005E },
	       { 0x5F, 0x005F },

	       { 0x60, 0x0060 },
	       { 0x61, 0x0061 },
	       { 0x62, 0x0062 },
	       { 0x63, 0x0063 },
	       { 0x64, 0x0064 },
	       { 0x65, 0x0065 },
	       { 0x66, 0x0066 },
	       { 0x67, 0x0067 },
	       { 0x68, 0x0068 },
	       { 0x69, 0x0069 },
	       { 0x6A, 0x006A },
	       { 0x6B, 0x006B },
	       { 0x6C, 0x006C },
	       { 0x6D, 0x006D },
	       { 0x6E, 0x006E },
	       { 0x6F, 0x006F },

	       { 0x70, 0x0070 },
	       { 0x71, 0x0071 },
	       { 0x72, 0x0072 },
	       { 0x73, 0x0073 },
	       { 0x74, 0x0074 },
	       { 0x75, 0x0075 },
	       { 0x76, 0x0076 },
	       { 0x77, 0x0077 },
	       { 0x78, 0x0078 },
	       { 0x79, 0x0079 },
	       { 0x7A, 0x007A },
	       { 0x7B, 0x007B },
	       { 0x7C, 0x007C },
	       { 0x7D, 0x007D },
	       { 0x7E, 0x007E },

	       { 0xA0, 0x00A0 },
	       { 0xA1, 0x00A1 },
	       { 0xA2, 0x00A2 },
	       { 0xA3, 0x00A3 },
	       { 0xA4, 0x00A4 },
	       { 0xA5, 0x00A5 },
	       { 0xA6, 0x00A6 },
	       { 0xA7, 0x00A7 },
	       { 0xA8, 0x00A8 },
	       { 0xA9, 0x00A9 },
	       { 0xAA, 0x00AA },
	       { 0xAB, 0x00AB },
	       { 0xAC, 0x00AC },
	       { 0xAD, 0x00AD },
	       { 0xAE, 0x00AE },
	       { 0xAF, 0x00AF },

	       { 0xB0, 0x00B0 },
	       { 0xB1, 0x00B1 },
	       { 0xB2, 0x00B2 },
	       { 0xB3, 0x00B3 },
	       { 0xB4, 0x00B4 },
	       { 0xB5, 0x00B5 },
	       { 0xB6, 0x00B6 },
	       { 0xB7, 0x00B7 },
	       { 0xB8, 0x00B8 },
	       { 0xB9, 0x00B9 },
	       { 0xBA, 0x00BA },
	       { 0xBB, 0x00BB },
	       { 0xBC, 0x00BC },
	       { 0xBD, 0x00BD },
	       { 0xBE, 0x00BE },
	       { 0xBF, 0x00BF },

	       { 0xC0, 0x00C0 },
	       { 0xC1, 0x00C1 },
	       { 0xC2, 0x00C2 },
	       { 0xC3, 0x00C3 },
	       { 0xC4, 0x00C4 },
	       { 0xC5, 0x00C5 },
	       { 0xC6, 0x00C6 },
	       { 0xC7, 0x00C7 },
	       { 0xC8, 0x00C8 },
	       { 0xC9, 0x00C9 },
	       { 0xCA, 0x00CA },
	       { 0xCB, 0x00CB },
	       { 0xCC, 0x00CC },
	       { 0xCD, 0x00CD },
	       { 0xCE, 0x00CE },
	       { 0xCF, 0x00CF },

	       { 0xD0, 0x00D0 },
	       { 0xD1, 0x00D1 },
	       { 0xD2, 0x00D2 },
	       { 0xD3, 0x00D3 },
	       { 0xD4, 0x00D4 },
	       { 0xD5, 0x00D5 },
	       { 0xD6, 0x00D6 },
	       { 0xD7, 0x0152 },
	       { 0xD8, 0x00D8 },
	       { 0xD9, 0x00D9 },
	       { 0xDA, 0x00DA },
	       { 0xDB, 0x00DB },
	       { 0xDC, 0x00DC },
	       { 0xDD, 0x00DD },
	       { 0xDE, 0x00DE },
	       { 0xDF, 0x00DF },

	       { 0xE0, 0x00E0 },
	       { 0xE1, 0x00E1 },
	       { 0xE2, 0x00E2 },
	       { 0xE3, 0x00E3 },
	       { 0xE4, 0x00E4 },
	       { 0xE5, 0x00E5 },
	       { 0xE6, 0x00E6 },
	       { 0xE7, 0x00E7 },
	       { 0xE8, 0x00E8 },
	       { 0xE9, 0x00E9 },
	       { 0xEA, 0x00EA },
	       { 0xEB, 0x00EB },
	       { 0xEC, 0x00EC },
	       { 0xED, 0x00ED },
	       { 0xEE, 0x00EE },
	       { 0xEF, 0x00EF },

	       { 0xF0, 0x00F0 },
	       { 0xF1, 0x00F1 },
	       { 0xF2, 0x00F2 },
	       { 0xF3, 0x00F3 },
	       { 0xF4, 0x00F4 },
	       { 0xF5, 0x00F5 },
	       { 0xF6, 0x00F6 },
	       { 0xF7, 0x0153 },
	       { 0xF8, 0x00F8 },
	       { 0xF9, 0x00F9 },
	       { 0xFA, 0x00FA },
	       { 0xFB, 0x00FB },
	       { 0xFC, 0x00FC },
	       { 0xFD, 0x00FD },
	       { 0xFE, 0x00FE },
	       { 0xFF, 0x00FF },
       };
#else
     ;
#endif

#endif
