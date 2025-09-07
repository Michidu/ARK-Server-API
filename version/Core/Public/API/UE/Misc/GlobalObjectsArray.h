
class FUObjectItem
{
public:
	UObject* Object;
	int SerialNumber;
};

class FChunkedFixedUObjectArray
{
public:
	enum
	{
		ElementsPerChunk = 64 * 1024
	};

	FUObjectItem& GetByIndex(int Index)
	{
		return *GetObjectPtr(Index);
	}

	FUObjectItem* GetObjectPtr(int Index)
	{
		auto ChunkIndex = Index / ElementsPerChunk;
		auto WithinChunkIndex = Index % ElementsPerChunk;
		auto Chunk = Objects[ChunkIndex];
		return Chunk + WithinChunkIndex;
	}

	FUObjectItem** Objects;
	FUObjectItem* PreAllocatedObjects;
	int MaxElements;
	int NumElements;
	int MaxChunks;
	int NumChunks;
};

class FUObjectArray
{
public:
	int ObjFirstGCIndex;
	int ObjLastNonGCIndex;
	int MaxObjectsNotConsideredByGC;
	bool OpenForDisregardForGC;
	FChunkedFixedUObjectArray ObjObjects;
};