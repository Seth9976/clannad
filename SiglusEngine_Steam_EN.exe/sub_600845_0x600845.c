// 函数: sub_600845
// 地址: 0x600845
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx

if (sub_5f3725(ecx) == 0)
    return CreateFileW(arg1, arg2, arg3, arg4, arg5, arg6 | arg7, nullptr)

int32_t eax_2 = GetProcAddress(GetModuleHandleW(u"kernel32.dll"), "CreateFile2")

if (eax_2 == 0)
    return 0xffffffff

int32_t var_10_1 = 0
int32_t var_8_1 = 0
int32_t var_18_1 = arg6
int32_t var_14_1 = arg7
SECURITY_ATTRIBUTES* var_c_1 = arg4
int32_t var_1c = 0x18
return eax_2(arg1, arg2, arg3, arg5, &var_1c)
