// 函数: sub_4267c2
// 地址: 0x4267c2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax_3 = *(arg1 + 0x60) * arg2 + *(arg1 + 0x64) * arg3 + *(arg1 + 0x20)
void* edx_3 = *(arg1 + 0x68) + eax_3
int32_t* ebx = arg4

if (eax_3 u< edx_3)
    int32_t edi
    int32_t var_10_1 = edi
    
    do
        int32_t* esi_3 = (zx.d(*eax_3) << 4) + *(arg1 + 0x38)
        *ebx = *esi_3
        void* edi_2 = &ebx[1]
        void* esi_4 = &esi_3[1]
        *edi_2 = *esi_4
        void* edi_3 = edi_2 + 4
        void* esi_5 = esi_4 + 4
        *edi_3 = *esi_5
        eax_3 = &eax_3[1]
        ebx = &ebx[4]
        *(edi_3 + 4) = *(esi_5 + 4)
    while (eax_3 u< edx_3)

if (*(arg1 + 0x18) != 0)
    sub_41eede(arg1, ebx - (*(arg1 + 0x68) << 4))

int16_t x87control

if (*(arg1 + 0x10) != 0)
    sub_41f14b(arg1, x87control, ebx - (*(arg1 + 0x68) << 4))
