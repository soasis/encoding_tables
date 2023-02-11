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

#ifndef ZTD_ENCODING_TABLES_WINDOWS_1257_TABLES_HPP
#define ZTD_ENCODING_TABLES_WINDOWS_1257_TABLES_HPP

#include <ztd/encoding_tables/version.hpp>

#include <ztd/encoding_tables/windows_1257.tables.h>
#include <ztd/encoding_tables/single_byte_high_lookup.hpp>
#include <ztd/ranges/algorithm.hpp>
#include <ztd/ranges/adl.hpp>

#include <cstddef>
#include <optional>

#include <ztd/prologue.hpp>

namespace ztd { namespace et {
	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_OPEN_I_

	inline constexpr ::std::optional<::std::uint_least32_t> windows_1257_index_to_code_point(
		::std::size_t __lookup_index_pointer) noexcept {
		return ::ztd::et::single_byte_high_index_to_code_point(
			ztd_et_windows_1257_index_code_point_map, __lookup_index_pointer);
	}

	inline constexpr ::std::optional<::std::size_t> windows_1257_code_point_to_index(
		::std::uint_least32_t __lookup_code_point) noexcept {
		return ::ztd::et::single_byte_high_code_point_to_index(
			ztd_et_windows_1257_index_code_point_map, __lookup_code_point);
	}

	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::et

#include <ztd/epilogue.hpp>

#endif
