// 函数: sub_74d214
// 地址: 0x74d214
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
data_4ecd240 = GetProcAddress(hModule, "FlsAlloc") ^ __security_cookie
data_4ecd244 = GetProcAddress(hModule, "FlsFree") ^ __security_cookie
data_4ecd248 = GetProcAddress(hModule, "FlsGetValue") ^ __security_cookie
data_4ecd24c = GetProcAddress(hModule, "FlsSetValue") ^ __security_cookie
data_4ecd250 = GetProcAddress(hModule, "InitializeCriticalSectionEx") ^ __security_cookie
data_4ecd254 = GetProcAddress(hModule, "CreateEventExW") ^ __security_cookie
data_4ecd258 = GetProcAddress(hModule, "CreateSemaphoreExW") ^ __security_cookie
data_4ecd25c = GetProcAddress(hModule, "SetThreadStackGuarantee") ^ __security_cookie
data_4ecd260 = GetProcAddress(hModule, "CreateThreadpoolTimer") ^ __security_cookie
data_4ecd264 = GetProcAddress(hModule, "SetThreadpoolTimer") ^ __security_cookie
data_4ecd268 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks") ^ __security_cookie
data_4ecd26c = GetProcAddress(hModule, "CloseThreadpoolTimer") ^ __security_cookie
data_4ecd270 = GetProcAddress(hModule, "CreateThreadpoolWait") ^ __security_cookie
data_4ecd274 = GetProcAddress(hModule, "SetThreadpoolWait") ^ __security_cookie
data_4ecd278 = GetProcAddress(hModule, "CloseThreadpoolWait") ^ __security_cookie
data_4ecd27c = GetProcAddress(hModule, "FlushProcessWriteBuffers") ^ __security_cookie
data_4ecd280 = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns") ^ __security_cookie
data_4ecd284 = GetProcAddress(hModule, "GetCurrentProcessorNumber") ^ __security_cookie
data_4ecd288 = GetProcAddress(hModule, "GetLogicalProcessorInformation") ^ __security_cookie
data_4ecd28c = GetProcAddress(hModule, "CreateSymbolicLinkW") ^ __security_cookie
data_4ecd290 = GetProcAddress(hModule, "SetDefaultDllDirectories") ^ __security_cookie
data_4ecd298 = GetProcAddress(hModule, "EnumSystemLocalesEx") ^ __security_cookie
data_4ecd294 = GetProcAddress(hModule, "CompareStringEx") ^ __security_cookie
data_4ecd29c = GetProcAddress(hModule, "GetDateFormatEx") ^ __security_cookie
data_4ecd2a0 = GetProcAddress(hModule, "GetLocaleInfoEx") ^ __security_cookie
data_4ecd2a4 = GetProcAddress(hModule, "GetTimeFormatEx") ^ __security_cookie
data_4ecd2a8 = GetProcAddress(hModule, "GetUserDefaultLocaleName") ^ __security_cookie
data_4ecd2ac = GetProcAddress(hModule, "IsValidLocaleName") ^ __security_cookie
data_4ecd2b0 = GetProcAddress(hModule, "LCMapStringEx") ^ __security_cookie
data_4ecd2b4 = GetProcAddress(hModule, "GetCurrentPackageId") ^ __security_cookie
data_4ecd2b8 = GetProcAddress(hModule, "GetTickCount64") ^ __security_cookie
data_4ecd2bc = GetProcAddress(hModule, "GetFileInformationByHandleExW") ^ __security_cookie
int32_t result = GetProcAddress(hModule, "SetFileInformationByHandleW") ^ __security_cookie
data_4ecd2c0 = result
return result
