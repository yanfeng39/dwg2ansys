#ifndef ConvertH
#define ConvertH 1

#include "dwg2ansysLibExport.h"

namespace Convert
{
  dwg2ansysLib_EXPORT bool dwg_to_ansys( const wchar_t * source_name, const wchar_t * target_name );
};

#endif
