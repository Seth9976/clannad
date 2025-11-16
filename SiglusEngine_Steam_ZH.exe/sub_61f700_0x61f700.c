// 函数: sub_61f700
// 地址: 0x61f700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = arg3

if (edx s< 0)
    edx = 0
else if (edx s> 0x10000)
    edx = 0x10000

uint32_t ecx = zx.d(arg4)
int32_t eax_5
int16_t edx_1
edx_1:eax_5 = sx.q((zx.d(arg5) - ecx) * edx)
return ((eax_5 + zx.d(edx_1)) s>> 0x10) + ecx
