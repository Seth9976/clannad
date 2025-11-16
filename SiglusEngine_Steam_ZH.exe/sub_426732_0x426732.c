// 函数: sub_426732
// 地址: 0x426732
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* edx_3 = &eax_3[*(arg1 + 0x68) << 1]
void* ebx = arg4

if (eax_3 u< edx_3)
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        int32_t* edi_1 = ebx
        ebx += 0x10
        int32_t* edx_7 = (zx.d(*eax_3) << 4) + *(arg1 + 0x38)
        *edi_1 = *edx_7
        void* edi_2 = &edi_1[1]
        void* esi_2 = &edx_7[1]
        *edi_2 = *esi_2
        void* edi_3 = edi_2 + 4
        void* esi_3 = esi_2 + 4
        *edi_3 = *esi_3
        *(edi_3 + 4) = *(esi_3 + 4)
        uint32_t edx_8 = zx.d(eax_3[1])
        eax_3 = &eax_3[2]
        *(ebx - 4) = fconvert.s(float.t(edx_8) * fconvert.t(0.00392156886f))
    while (eax_3 u< edx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, ebx - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, ebx - (*(arg1 + 0x68) << 4))
