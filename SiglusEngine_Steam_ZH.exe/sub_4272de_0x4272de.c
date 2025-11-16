// 函数: sub_4272de
// 地址: 0x4272de
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* edx_3 = &eax_3[*(arg1 + 0x68) * 2]
int32_t* esi = arg4

if (eax_3 u< edx_3)
    int32_t edi
    int32_t var_c_1 = edi
    
    do
        *esi = *eax_3
        int32_t edi_2 = eax_3[1]
        esi[3] = fconvert.s(float.t(1))
        esi[1] = edi_2
        esi[2] = fconvert.s(float.t(1))
        eax_3 = &eax_3[2]
        esi = &esi[4]
    while (eax_3 u< edx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, esi - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, esi - (*(arg1 + 0x68) << 4))
