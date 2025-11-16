// 函数: sub_6d4dc0
// 地址: 0x6d4dc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 u> 0x4000)
    return 

uint32_t eax = zx.d(*arg1)

if ((eax.b & 0xf) != 8 || (eax & 0xf0) u> 0x70)
    return 

eax u>>= 4
int32_t edx = 1 << (eax.b + 7)

if (arg2 u> edx)
    return 

do
    edx u>>= 1
    uint32_t temp3_1 = eax
    eax -= 1
    
    if (temp3_1 == 1)
        break
while (arg2 u<= edx)

int32_t ecx_5 = zx.d(arg1[1]) & 0xe0
int32_t eax_2 = eax << 4 | 8
*arg1 = eax_2.b
ecx_5.b -= (modu.dp.d(0:((eax_2 << 8) + ecx_5), 0x1f)).b
ecx_5.b += 0x1f
arg1[1] = ecx_5.b
