// 函数: sub_4993a0
// 地址: 0x4993a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 s< 0x64)
    arg3 = 0x64

int32_t eax_1 = divs.dp.d(0x6400, arg3)
int32_t ecx = 0x100 - eax_1

if (0x100 - eax_1 s>= 0)
    eax_1 = 0xff
    
    if (ecx s> 0xff)
        ecx = 0xff
else
    ecx = 0

int32_t var_c = ecx
int32_t var_10 = arg4
void var_18
return sub_4d7ef0(eax_1, 0x7035fc, &data_7035d8, ecx, arg2, var_18)
