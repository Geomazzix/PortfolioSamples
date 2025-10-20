#pragma once
namespace TOR
{
	static HMODULE module;
	typedef HMODULE DLLModule;
	bool GetLastErrorString( char* buffer, DWORD length);
	FARPROC GetSymbol(DLLModule module, const char* symbol);
	std::string GetDLLRootPath();
	const DLLModule& LoadTORModule(const char* dllName);
	void UnloadModule();
	size_t ReadAll(void* pOut, size_t bufferSize, const char* path);
}
