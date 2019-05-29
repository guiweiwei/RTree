#ifndef CNODEENTRY_H
#define CNODEENTRY_H

#include "CRTreeCommon.h"

NS_RTREE_BEGIN

template <typename RECT>
class CNodeEntry
{
public:
	virtual RECT getMBR() const = 0;

	virtual bool isLeafEntry() const = 0;
};

NS_RTREE_END

#endif
