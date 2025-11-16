// 函数: sub_10005be9
// 地址: 0x10005be9
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
data_1001c500 = GetProcAddress(hModule, "FlsAlloc") ^ __security_cookie
data_1001c504 = GetProcAddress(hModule, "FlsFree") ^ __security_cookie
data_1001c508 = GetProcAddress(hModule, "FlsGetValue") ^ __security_cookie
data_1001c50c = GetProcAddress(hModule, "FlsSetValue") ^ __security_cookie
data_1001c510 = GetProcAddress(hModule, "InitializeCriticalSectionEx") ^ __security_cookie
data_1001c514 = GetProcAddress(hModule, "CreateEventExW") ^ __security_cookie
data_1001c518 = GetProcAddress(hModule, "CreateSemaphoreExW") ^ __security_cookie
data_1001c51c = GetProcAddress(hModule, "SetThreadStackGuarantee") ^ __security_cookie
data_1001c520 = GetProcAddress(hModule, "CreateThreadpoolTimer") ^ __security_cookie
data_1001c524 = GetProcAddress(hModule, "SetThreadpoolTimer") ^ __security_cookie
data_1001c528 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks") ^ __security_cookie
data_1001c52c = GetProcAddress(hModule, "CloseThreadpoolTimer") ^ __security_cookie
data_1001c530 = GetProcAddress(hModule, "CreateThreadpoolWait") ^ __security_cookie
data_1001c534 = GetProcAddress(hModule, "SetThreadpoolWait") ^ __security_cookie
data_1001c538 = GetProcAddress(hModule, "CloseThreadpoolWait") ^ __security_cookie
data_1001c53c = GetProcAddress(hModule, "FlushProcessWriteBuffers") ^ __security_cookie
data_1001c540 = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns") ^ __security_cookie
data_1001c544 = GetProcAddress(hModule, "GetCurrentProcessorNumber") ^ __security_cookie
data_1001c548 = GetProcAddress(hModule, "GetLogicalProcessorInformation") ^ __security_cookie
data_1001c54c = GetProcAddress(hModule, "CreateSymbolicLinkW") ^ __security_cookie
data_1001c550 = GetProcAddress(hModule, "SetDefaultDllDirectories") ^ __security_cookie
data_1001c558 = GetProcAddress(hModule, "EnumSystemLocalesEx") ^ __security_cookie
data_1001c554 = GetProcAddress(hModule, "CompareStringEx") ^ __security_cookie
data_1001c55c = GetProcAddress(hModule, "GetDateFormatEx") ^ __security_cookie
data_1001c560 = GetProcAddress(hModule, "GetLocaleInfoEx") ^ __security_cookie
data_1001c564 = GetProcAddress(hModule, "GetTimeFormatEx") ^ __security_cookie
data_1001c568 = GetProcAddress(hModule, "GetUserDefaultLocaleName") ^ __security_cookie
data_1001c56c = GetProcAddress(hModule, "IsValidLocaleName") ^ __security_cookie
data_1001c570 = GetProcAddress(hModule, "LCMapStringEx") ^ __security_cookie
data_1001c574 = GetProcAddress(hModule, "GetCurrentPackageId") ^ __security_cookie
data_1001c578 = GetProcAddress(hModule, "GetTickCount64") ^ __security_cookie
data_1001c57c = GetProcAddress(hModule, "GetFileInformationByHandleExW") ^ __security_cookie
int32_t result = GetProcAddress(hModule, "SetFileInformationByHandleW") ^ __security_cookie
data_1001c580 = result
return result
