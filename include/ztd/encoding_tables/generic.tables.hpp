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

#ifndef ZTD_ENCODING_TABLES_GENERIC_TABLES_HPP
#define ZTD_ENCODING_TABLES_GENERIC_TABLES_HPP

#include <ztd/encoding_tables/version.hpp>

#include <ztd/encoding_tables/generic.tables.h>
#include <ztd/encoding_tables/predicates.hpp>
#include <ztd/idk/span.hpp>
#include <ztd/ranges/algorithm.hpp>
#include <ztd/ranges/adl.hpp>

#include <cstddef>
#include <optional>
#include <algorithm>

#include <ztd/prologue.hpp>

namespace ztd { namespace et {
	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_OPEN_I_

	template <typename _IndexCodePointType = ::ztd::et::index32_code_point_t,
		typename _IndexType               = ::ztd::remove_cvref_t<decltype(::std::declval<_IndexCodePointType>()[0])>>
	inline constexpr ::std::optional<::std::size_t> generic_code_point_to_index(
		::ztd::span<const _IndexCodePointType> __index_code_point_map,
		::std::uint_least32_t __lookup_code_point) noexcept {
		const _IndexType __lookup_code = static_cast<_IndexType>(__lookup_code_point);
		auto __first                   = ::ztd::ranges::cbegin(__index_code_point_map);
		auto __last                    = ::ztd::ranges::cend(__index_code_point_map);
		const auto predicate
			= [&__lookup_code](const _IndexCodePointType& value) { return __lookup_code == value[1]; };
		auto __it = ::std::find_if(__first, __last, predicate);
		if (__it == __last) {
			return ::std::nullopt;
		}
		const auto& __index_and_codepoint = *__it;
		return static_cast<::std::size_t>(__index_and_codepoint[0]);
	}

	template <typename _IndexCodePointType = ::ztd::et::index32_code_point_t,
		typename _IndexType               = ::ztd::remove_cvref_t<decltype(::std::declval<_IndexCodePointType>()[0])>>
	inline constexpr ::std::optional<::std::uint_least32_t> generic_index_to_code_point(
		::ztd::span<const _IndexCodePointType> __index_code_point_map,
		::std::size_t __lookup_index_pointer) noexcept {
		_IndexType __lookup_index = static_cast<_IndexType>(__lookup_index_pointer);
		auto __first              = ::ztd::ranges::cbegin(__index_code_point_map);
		auto __last               = ::ztd::ranges::cend(__index_code_point_map);
		auto __it                 = ::ztd::ranges::lower_bound(
               __first, __last, __lookup_index, &::ztd::et::less_than_index_target<_IndexCodePointType, _IndexType>);
		if (__it.current == __it.last) {
			return ::std::nullopt;
		}
		const _IndexCodePointType& __index_and_codepoint = *__it.current;
		if (__index_and_codepoint[0] != __lookup_index) {
			return ::std::nullopt;
		}
		return static_cast<::std::uint_least32_t>(__index_and_codepoint[1]);
	}

	ZTD_ENCODING_TABLES_INLINE_ABI_NAMESPACE_CLOSE_I_
}} // namespace ztd::et

#include <ztd/epilogue.hpp>

#endif
