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

#ifndef ZTD_ENCODING_TABLES_VERSION_H
#define ZTD_ENCODING_TABLES_VERSION_H

#include <ztd/version.h>

// clang-format off
#if defined(ZTD_ENCODING_TABLES_BUILDING)
	#if (ZTD_ENCODING_TABLES_BUILDING != 0)
		#define ZTD_ENCODING_TABLES_BUILDING_I_ ZTD_ON
	#else
		#define ZTD_ENCODING_TABLES_BUILDING_I_ ZTD_OFF
	#endif
#else
	#define ZTD_ENCODING_TABLES_BUILDING_I_ ZTD_DEFAULT_OFF
#endif

#if defined(ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR)
	#if (ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR != 0)
		#define ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR_I_ ZTD_ON
	#else
		#define ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR_I_ ZTD_OFF
	#endif
#elif ZTD_IS_ON(ZTD_CXX)
	#define ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR_I_ ZTD_DEFAULT_ON
#else
	#define ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR_I_ ZTD_DEFAULT_OFF
#endif

#if ZTD_IS_ON(ZTD_ENCODING_TABLES_DEFINITION_IS_CONSTEXPR)
	// C++
	#define ZTD_ENCODING_TABLES_EXTERN_I_
#elif ZTD_IS_ON(ZTD_ENCODING_TABLES_BUILDING)
	#if ZTD_IS_ON(ZTD_CXX)
		// C++
		#define ZTD_ENCODING_TABLES_EXTERN_I_ extern "C"
	#else
		// normal
		#define ZTD_ENCODING_TABLES_EXTERN_I_ extern
	#endif
#else
	#if ZTD_IS_ON(ZTD_CXX)
		#define ZTD_ENCODING_TABLES_EXTERN_I_ extern "C"
	#else
		#define ZTD_ENCODING_TABLES_EXTERN_I_ extern
	#endif
#endif // C++ or not
// clang-format on

#endif
