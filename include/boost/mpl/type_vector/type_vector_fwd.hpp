//-----------------------------------------------------------------------------
// boost mpl/type_vector/type_vector_fwd.hpp header file
// See http://www.boost.org for updates, documentation, and revision history.
//-----------------------------------------------------------------------------
//
// Copyright (c) 2000-01
// Aleksey Gurtovoy
//
// Permission to use, copy, modify, distribute and sell this software
// and its documentation for any purpose is hereby granted without fee, 
// provided that the above copyright notice appears in all copies and 
// that both the copyright notice and this permission notice appear in 
// supporting documentation. No representations are made about the 
// suitability of this software for any purpose. It is provided "as is" 
// without express or implied warranty.

#ifndef BOOST_MPL_TYPE_VECTOR_FWD_HPP
#define BOOST_MPL_TYPE_VECTOR_FWD_HPP

#include "boost/mpl/null.hpp"
#include "boost/mpl/preprocessor/enumerate_default_params.hpp"

namespace boost {
namespace mpl {

struct type_vector_sequence_tag;

template<BOOST_MPL_ENUMERATE_DEFAULT_PARAMS(typename T, mpl::null_argument)>
struct type_vector;

} // namespace mpl
} // namespace boost 

#endif // BOOST_MPL_TYPE_VECTOR_FWD_HPP
