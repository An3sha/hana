/*!
@file
Defines `boost::hana::Enumerable::mcd`.

@copyright Louis Dionne 2014
Distributed under the Boost Software License, Version 1.0.
(See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
 */

#ifndef BOOST_HANA_ENUMERABLE_MCD_HPP
#define BOOST_HANA_ENUMERABLE_MCD_HPP

#include <boost/hana/enumerable/enumerable.hpp>


namespace boost { namespace hana {
    //! Minimal complete definition : `succ` and `pred`
    struct Enumerable::mcd { };
}}

#endif // !BOOST_HANA_ENUMERABLE_MCD_HPP
