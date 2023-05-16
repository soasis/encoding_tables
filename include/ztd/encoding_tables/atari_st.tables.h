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

#ifndef ZTD_ENCODING_TABLES_ATARI_ST_TABLES_H
#define ZTD_ENCODING_TABLES_ATARI_ST_TABLES_H

#include <ztd/encoding_tables/version.h>

#include <ztd/encoding_tables/table_types.h>

ZTD_EXTERN_C_I_ bool ztdc_atari_st_index_to_code_point(
     size_t __lookup_index_pointer, uint_least32_t* __p_code_point) ZTD_NOEXCEPT_IF_CXX_I_;
ZTD_EXTERN_C_I_ bool ztdc_atari_st_code_point_to_index(
     uint_least32_t __lookup_code_point, size_t* __p_index) ZTD_NOEXCEPT_IF_CXX_I_;

ZTD_EXTERN_C_I_ ZTD_INLINE_CONSTEXPR_IF_CXX_I_ const ztd_et_index32_code_point_t ztd_et_atari_st_index_code_point_map[]
     = {
	       { 0, 0x0000 },
	       { 1, 0x21E7 },
	       { 2, 0x21E9 },
	       { 3, 0x21E8 },
	       { 4, 0x21E6 },
	       { 5, 0x1FBBD },
	       { 6, 0x1FBBE },
	       { 7, 0x1FBBF },
	       { 8, 0x2713 },
	       { 9, 0x1F552 },
	       { 10, 0x1F514 },
	       { 11, 0x266A },
	       { 12, 0x240C },
	       { 13, 0x240D },
	       { 14, 0xFFFD }, // Atari logo. Not proposed for Unicode.
	       { 15, 0xFFFD }, // Atari logo. Not proposed for Unicode.

	       { 16, 0x1FBF0 },
	       { 17, 0x1FBF1 },
	       { 18, 0x1FBF2 },
	       { 19, 0x1FBF3 },
	       { 20, 0x1FBF4 },
	       { 21, 0x1FBF5 },
	       { 22, 0x1FBF6 },
	       { 23, 0x1FBF7 },
	       { 24, 0x1FBF8 },
	       { 25, 0x1FBF9 },
	       { 26, 0x0259 },
	       { 27, 0x241B },
	       { 28, 0xFFFD }, // Atari logo. Not proposed for Unicode.
	       { 29, 0xFFFD }, // Atari logo. Not proposed for Unicode.
	       { 30, 0xFFFD }, // Atari logo. Not proposed for Unicode.
	       { 31, 0xFFFD }, // Atari logo. Not proposed for Unicode.


	       { 32, 0x0020 },
	       { 33, 0x0021 },
	       { 34, 0x0022 },
	       { 35, 0x0023 },
	       { 36, 0x0024 },
	       { 37, 0x0025 },
	       { 38, 0x0026 },
	       { 39, 0x0027 },
	       { 40, 0x0028 },
	       { 41, 0x0029 },
	       { 42, 0x002A },
	       { 43, 0x002B },
	       { 44, 0x002C },
	       { 45, 0x002D },
	       { 46, 0x002E },
	       { 47, 0x002F },

	       { 48, 0x0030 },
	       { 49, 0x0031 },
	       { 50, 0x0032 },
	       { 51, 0x0033 },
	       { 52, 0x0034 },
	       { 53, 0x0035 },
	       { 54, 0x0036 },
	       { 55, 0x0037 },
	       { 56, 0x0038 },
	       { 57, 0x0039 },
	       { 58, 0x003A },
	       { 59, 0x003B },
	       { 60, 0x003C },
	       { 61, 0x003D },
	       { 62, 0x003E },
	       { 63, 0x003F },

	       { 64, 0x0040 },
	       { 65, 0x0041 },
	       { 66, 0x0042 },
	       { 67, 0x0043 },
	       { 68, 0x0044 },
	       { 69, 0x0045 },
	       { 70, 0x0046 },
	       { 71, 0x0047 },
	       { 72, 0x0048 },
	       { 73, 0x0049 },
	       { 74, 0x004A },
	       { 75, 0x004B },
	       { 76, 0x004C },
	       { 77, 0x004D },
	       { 78, 0x004E },
	       { 79, 0x004F },

	       { 80, 0x0050 },
	       { 81, 0x0051 },
	       { 82, 0x0052 },
	       { 83, 0x0053 },
	       { 84, 0x0054 },
	       { 85, 0x0055 },
	       { 86, 0x0056 },
	       { 87, 0x0057 },
	       { 88, 0x0058 },
	       { 89, 0x0059 },
	       { 90, 0x005A },
	       { 91, 0x005B },
	       { 92, 0x005C },
	       { 93, 0x005D },
	       { 94, 0x005E },
	       { 95, 0x005F },

	       { 96, 0x0060 },
	       { 97, 0x0061 },
	       { 98, 0x0062 },
	       { 99, 0x0063 },
	       { 100, 0x0064 },
	       { 101, 0x0065 },
	       { 102, 0x0066 },
	       { 103, 0x0067 },
	       { 104, 0x0068 },
	       { 105, 0x0069 },
	       { 106, 0x006A },
	       { 107, 0x006B },
	       { 108, 0x006C },
	       { 109, 0x006D },
	       { 110, 0x006E },
	       { 111, 0x006F },

	       { 112, 0x0070 },
	       { 113, 0x0071 },
	       { 114, 0x0072 },
	       { 115, 0x0073 },
	       { 116, 0x0074 },
	       { 117, 0x0075 },
	       { 118, 0x0076 },
	       { 119, 0x0077 },
	       { 120, 0x0078 },
	       { 121, 0x0079 },
	       { 122, 0x007A },
	       { 123, 0x007B },
	       { 124, 0x007C },
	       { 125, 0x007D },
	       { 126, 0x007E },
	       { 127, 0x2302 },

	       { 128, 0x00C7 },
	       { 129, 0x00FC },
	       { 130, 0x00E9 },
	       { 131, 0x00E2 },
	       { 132, 0x00E4 },
	       { 133, 0x00E0 },
	       { 134, 0x00E5 },
	       { 135, 0x00E7 },
	       { 136, 0x00EA },
	       { 137, 0x00EB },
	       { 138, 0x00E8 },
	       { 139, 0x00EF },
	       { 140, 0x00EE },
	       { 141, 0x00EC },
	       { 142, 0x00C4 },
	       { 143, 0x00C5 },

	       { 144, 0x00C9 },
	       { 145, 0x00E6 },
	       { 146, 0x00C6 },
	       { 147, 0x00F4 },
	       { 148, 0x00F6 },
	       { 149, 0x00F2 },
	       { 150, 0x00FB },
	       { 151, 0x00F9 },
	       { 152, 0x00FF },
	       { 153, 0x00D6 },
	       { 154, 0x00DC },
	       { 155, 0x00A2 },
	       { 156, 0x00A3 },
	       { 157, 0x00A5 },
	       { 158, 0x00DF },
	       { 159, 0x0192 },

	       { 160, 0x00E1 },
	       { 161, 0x00ED },
	       { 162, 0x00F3 },
	       { 163, 0x00FA },
	       { 164, 0x00F1 },
	       { 165, 0x00D1 },
	       { 166, 0x00AA },
	       { 167, 0x00BA },
	       { 168, 0x00BF },
	       { 169, 0x2310 },
	       { 170, 0x00AC },
	       { 171, 0x00BD },
	       { 172, 0x00BC },
	       { 173, 0x00A1 },
	       { 174, 0x00AB },
	       { 175, 0x00BB },

	       { 176, 0x00E3 },
	       { 177, 0x00F5 },
	       { 178, 0x00D8 },
	       { 179, 0x00F8 },
	       { 180, 0x0153 },
	       { 181, 0x0152 },
	       { 182, 0x00C0 },
	       { 183, 0x00C3 },
	       { 184, 0x00D5 },
	       { 185, 0x00A8 },
	       { 186, 0x00B4 },
	       { 187, 0x2020 },
	       { 188, 0x00B6 },
	       { 189, 0x00A9 },
	       { 190, 0x00AE },
	       { 191, 0x2122 },

	       { 192, 0x0133 },
	       { 193, 0x0132 },
	       { 194, 0x05D0 },
	       { 195, 0x05D1 },
	       { 196, 0x05D2 },
	       { 197, 0x05D3 },
	       { 198, 0x05D4 },
	       { 199, 0x05D5 },
	       { 200, 0x05D6 },
	       { 201, 0x05D7 },
	       { 202, 0x05D8 },
	       { 203, 0x05D9 },
	       { 204, 0x05DB },
	       { 205, 0x05DC },
	       { 206, 0x05DE },
	       { 207, 0x05E0 },

	       { 208, 0x05E1 },
	       { 209, 0x05E2 },
	       { 210, 0x05E4 },
	       { 211, 0x05E6 },
	       { 212, 0x05E7 },
	       { 213, 0x05E8 },
	       { 214, 0x05E9 },
	       { 215, 0x05EA },
	       { 216, 0x05DF },
	       { 217, 0x05DA },
	       { 218, 0x05DD },
	       { 219, 0x05E3 },
	       { 220, 0x05E5 },
	       { 221, 0x00A7 },
	       { 222, 0x2227 },
	       { 223, 0x221E },

	       { 224, 0x03B1 },
	       { 225, 0x03B2 },
	       { 226, 0x0393 },
	       { 227, 0x03C0 },
	       { 228, 0x03A3 },
	       { 229, 0x03C3 },
	       { 230, 0x00B5 },
	       { 231, 0x03C4 },
	       { 232, 0x03A6 },
	       { 233, 0x0398 },
	       { 234, 0x03A9 },
	       { 235, 0x03B4 },
	       { 236, 0x222E },
	       { 237, 0x03D5 },
	       { 238, 0x2208 },
	       { 239, 0x2229 },

	       { 240, 0x2261 },
	       { 241, 0x00B1 },
	       { 242, 0x2265 },
	       { 243, 0x2264 },
	       { 244, 0x2320 },
	       { 245, 0x2321 },
	       { 246, 0x00F7 },
	       { 247, 0x2248 },
	       { 248, 0x00B0 },
	       { 249, 0x2022 },
	       { 250, 0x00B7 },
	       { 251, 0x221A },
	       { 252, 0x207F },
	       { 253, 0x00B2 },
	       { 254, 0x00B3 },
	       { 255, 0x00AF },

       };

#endif
