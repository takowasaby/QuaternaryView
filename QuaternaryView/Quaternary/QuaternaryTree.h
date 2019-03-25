#pragma once

#include <memory>
#include "../Object/ColiderBase.h"

class QuaternaryTree
{
	class ObjectReference
	{
		std::shared_ptr<ColiderBase> spObject_;
		std::unique_ptr<ObjectReference> upNezt_;
	};

public:
	QuaternaryTree(size_t depth);

};