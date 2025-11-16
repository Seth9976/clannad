// 函数: sub_46e0b0
// 地址: 0x46e0b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg2
int32_t esi = arg3

if (esi s> edi)
    arg1 = esi
    esi = edi
    edi = arg1

if (esi s< 0)
    return 

int32_t ebx_1 = data_7031bc

if (edi s>= ebx_1)
    return 

int32_t i_1 = edi - esi + 1

if (i_1 s<= 0)
    return 

arg1 = arg4 + (esi << 1)
char* ecx_1 = arg1 * 0x650 + 0x72db9c
int32_t i

do
    if (esi s>= 0 && esi s< ebx_1)
        arg1 = sub_466690(arg1, arg5, ecx_1, arg6, arg7, arg8, arg9, arg10, arg11, arg12)
    
    esi += 1
    ecx_1 = &ecx_1[0xca0]
    i = i_1
    i_1 -= 1
while (i != 1)
