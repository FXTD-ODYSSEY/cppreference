// cplusplus link https://cplusplus.com/reference/locale
// using facet member directly:
myvar = use_facet<numpunct<char>>(mylocale).decimal_point();

// alias facet:
const numpunct<char>& myfacet = use_facet<numpunct<char>>(mylocale);
myvar = myfacet.decimal_point();
