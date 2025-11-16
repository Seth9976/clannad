// 函数: sub_5f3765
// 地址: 0x5f3765
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HMODULE hModule = GetModuleHandleW(u"kernel32.dll")
data_20f4500 = GetProcAddress(hModule, "FlsAlloc") ^ __security_cookie
data_20f4504 = GetProcAddress(hModule, "FlsFree") ^ __security_cookie
data_20f4508 = GetProcAddress(hModule, "FlsGetValue") ^ __security_cookie
data_20f450c = GetProcAddress(hModule, "FlsSetValue") ^ __security_cookie
data_20f4510 = GetProcAddress(hModule, "InitializeCriticalSectionEx") ^ __security_cookie
data_20f4514 = GetProcAddress(hModule, "CreateEventExW") ^ __security_cookie
data_20f4518 = GetProcAddress(hModule, "CreateSemaphoreExW") ^ __security_cookie
data_20f451c = GetProcAddress(hModule, "SetThreadStackGuarantee") ^ __security_cookie
data_20f4520 = GetProcAddress(hModule, "CreateThreadpoolTimer") ^ __security_cookie
data_20f4524 = GetProcAddress(hModule, "SetThreadpoolTimer") ^ __security_cookie
data_20f4528 = GetProcAddress(hModule, "WaitForThreadpoolTimerCallbacks") ^ __security_cookie
data_20f452c = GetProcAddress(hModule, "CloseThreadpoolTimer") ^ __security_cookie
data_20f4530 = GetProcAddress(hModule, "CreateThreadpoolWait") ^ __security_cookie
data_20f4534 = GetProcAddress(hModule, "SetThreadpoolWait") ^ __security_cookie
data_20f4538 = GetProcAddress(hModule, "CloseThreadpoolWait") ^ __security_cookie
data_20f453c = GetProcAddress(hModule, "FlushProcessWriteBuffers") ^ __security_cookie
data_20f4540 = GetProcAddress(hModule, "FreeLibraryWhenCallbackReturns") ^ __security_cookie
data_20f4544 = GetProcAddress(hModule, "GetCurrentProcessorNumber") ^ __security_cookie
data_20f4548 = GetProcAddress(hModule, "GetLogicalProcessorInformation") ^ __security_cookie
data_20f454c = GetProcAddress(hModule, "CreateSymbolicLinkW") ^ __security_cookie
data_20f4550 = GetProcAddress(hModule, "SetDefaultDllDirectories") ^ __security_cookie
data_20f4558 = GetProcAddress(hModule, "EnumSystemLocalesEx") ^ __security_cookie
data_20f4554 = GetProcAddress(hModule, "CompareStringEx") ^ __security_cookie
data_20f455c = GetProcAddress(hModule, "GetDateFormatEx") ^ __security_cookie
data_20f4560 = GetProcAddress(hModule, "GetLocaleInfoEx") ^ __security_cookie
data_20f4564 = GetProcAddress(hModule, "GetTimeFormatEx") ^ __security_cookie
data_20f4568 = GetProcAddress(hModule, "GetUserDefaultLocaleName") ^ __security_cookie
data_20f456c = GetProcAddress(hModule, "IsValidLocaleName") ^ __security_cookie
data_20f4570 = GetProcAddress(hModule, "LCMapStringEx") ^ __security_cookie
data_20f4574 = GetProcAddress(hModule, "GetCurrentPackageId") ^ __security_cookie
data_20f4578 = GetProcAddress(hModule, "GetTickCount64") ^ __security_cookie
data_20f457c = GetProcAddress(hModule, "GetFileInformationByHandleExW") ^ __security_cookie
int32_t result = GetProcAddress(hModule, "SetFileInformationByHandleW") ^ __security_cookie
data_20f4580 = result
return result
