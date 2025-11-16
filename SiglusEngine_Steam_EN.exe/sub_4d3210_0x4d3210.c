// 函数: sub_4d3210
// 地址: 0x4d3210
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
STARTUPINFOA startupInfo
PROCESS_INFORMATION processInformation
sub_4d1ba0(sub_4d1ba0(eax_1, 0x44, &startupInfo, 0), 0x10, &processInformation, 0)
startupInfo.cb = 0x44
startupInfo.wShowWindow = 1
void var_218

if (arg5 == 0)
    if (arg3 == 0)
        sub_4cfd70(&var_218, arg4)
    else
        wsprintfA(&var_218, "%s\%s", arg3, arg4)
else if (arg3 == 0)
    wsprintfA(&var_218, "%s %s", arg4, arg5)
else
    wsprintfA(&var_218, "%s\%s %s", arg3, arg4, arg5)

if (CreateProcessA(nullptr, &var_218, nullptr, nullptr, 0, 0, nullptr, arg2, &startupInfo, 
        &processInformation) == 0)
    BOOL eax_3
    eax_3.b = 0
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_3

if (arg6 != 0)
    WaitForInputIdle(processInformation.hProcess, arg6)

uint32_t eax_4
eax_4.b = 1
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_4
