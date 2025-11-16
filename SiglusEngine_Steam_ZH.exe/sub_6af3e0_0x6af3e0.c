// 函数: sub_6af3e0
// 地址: 0x6af3e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* esi = *arg3

if (esi == arg4 || *esi - 0x30 u> 9)
    int32_t* eax
    eax.b = 0
    return eax

int64_t var_10 = 0
int32_t edx = 0
int32_t ebx = 0
int32_t var_14 = 0
var_10:4.d = 0

do
    uint32_t eax_2 = zx.d(*esi)
    
    if (eax_2.w - 0x30 u> 9)
        break
    
    int32_t ecx_1 = var_10:4.d
    int32_t eax_4
    int32_t edx_1
    edx_1:eax_4 = sx.q(eax_2 - 0x30)
    int32_t ecx_2 = ecx_1 << 2
    int32_t temp0_1 = var_10:4.d
    var_10:4.d += ecx_2
    int32_t eax_7 = var_10:4.d
    int32_t eax_8 = eax_7 * 2
    ebx = eax_4 + eax_8
    var_10:4.d = ebx
    edx = adc.d(edx_1, 
        adc.d(var_14, var_14 << 2 | ecx_1 u>> 0xffffffe2, temp0_1 + ecx_2 u< temp0_1) << 1
            | eax_7 u>> 0xffffffe1, 
        eax_4 + eax_8 u< eax_4)
    esi = &esi[1]
    var_14 = edx
while (esi != arg4)

if (arg2 != 0)
    *arg2 = ebx
    arg2[1] = edx

*arg3 = esi
int32_t* eax_10
eax_10.b = 1
return eax_10
