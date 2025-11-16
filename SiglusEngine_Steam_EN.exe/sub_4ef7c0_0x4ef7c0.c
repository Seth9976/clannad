// 函数: sub_4ef7c0
// 地址: 0x4ef7c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg4
int32_t esi = arg3
int32_t var_8 = esi
int32_t edi = arg2
int32_t var_c = edi

if (esi s> ebx)
    int32_t eax = esi
    var_8 = ebx
    esi = ebx
    ebx = eax
    arg4 = ebx

int32_t edx = arg5

if (edi s> edx)
    int32_t eax_1 = edi
    var_c = edx
    edi = edx
    edx = eax_1
    arg5 = edx

int32_t ecx = arg18

if (ecx s> 0xb)
    ecx = 0xb
else if (ecx s< 0xffffffff)
    ecx = 0xffffffff

data_703050 = arg11
data_703054 = arg12
data_703058 = arg13
data_70305c = arg14
data_703060 = arg15
data_703064 = arg16
data_703068 = arg17
data_703094 = arg6
int32_t eax_11 = arg4 - var_8
data_70307c = edi
data_703084 = edx
data_703078 = esi
int32_t edx_1 = eax_11 + arg7
int32_t eax_13 = arg5 - var_c
data_703070 = ecx
data_703080 = ebx
int32_t ecx_1 = eax_13 + arg8
data_703088 = arg7
data_7030bc = eax_11 + 1
data_70308c = arg8
data_7030c0 = eax_13 + 1
data_7030a8 = arg9
data_7030c8 = ecx
data_70306c = arg10
data_703098 = arg7
data_70309c = arg8
data_7030a0 = edx_1
data_7030a4 = ecx_1
data_7030ac = arg7
data_7030b0 = arg8
data_7030b4 = edx_1
data_7030b8 = ecx_1
data_7030c4 = arg10

if (arg20 == 0)
    if (arg19 == 0)
        data_13926d4 = arg19.b
        data_13926d0 = 0xffffffff
    
    data_7030cc = arg19
else
    data_7030d0 = arg20
    data_7030cc = 0

if (arg21 != 0)
    sub_475030()
    sub_492ee0()

return sub_4b02b0()
