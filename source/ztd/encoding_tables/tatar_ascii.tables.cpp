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

#include <ztd/encoding_tables/version.hpp>

#include <ztd/encoding_tables/tatar_ascii.tables.h>

#include <ztd/encoding_tables/tatar_ascii.tables.hpp>

ZTD_EXTERN_C_I_ bool ztdc_tatar_ascii_index_to_code_point(size_t __lookup_index_pointer, uint_least32_t* __p_code_point)
     ZTD_USE(ZTD_NOEXCEPT_IF_CXX) {
	auto __val = ztd::et::tatar_ascii_index_to_code_point(__lookup_index_pointer);
	if (__val) {
		*__p_code_point = *__val;
		return true;
	}
	return false;
}

ZTD_EXTERN_C_I_ bool ztdc_tatar_ascii_code_point_to_index(uint_least32_t __lookup_code_point, size_t* __p_index)
     ZTD_USE(ZTD_NOEXCEPT_IF_CXX) {
	auto __val = ztd::et::tatar_ascii_code_point_to_index(__lookup_code_point);
	if (__val) {
		*__p_index = *__val;
		return true;
	}
	return false;
}
