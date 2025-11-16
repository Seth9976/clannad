// 函数: sub_41a0ca
// 地址: 0x41a0ca
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ecx = *arg1
int16_t* ebx = *(ecx + 0x20)
uint16_t* esi = *(arg1[1] + 0x20)
void* eax_3 = *(ecx + 0x6c) * *(ecx + 0x60) + ebx
uint16_t* var_1c = esi
int16_t* var_20 = ebx

if (ebx u< eax_3)
    int32_t edi
    int32_t var_3c_1 = edi
    
    do
        void* ecx_2 = &ebx[*(ecx + 0x68)]
        int16_t* edi_2 = *(ecx + 0x60) + ebx
        uint16_t* var_10_1 = esi
        int16_t* var_14_1 = ebx
        int16_t* var_18_1 = edi_2
        
        if (ebx u< ecx_2)
            do
                uint32_t ecx_3 = zx.d(ebx[1])
                uint32_t esi_1 = zx.d(edi_2[1])
                uint32_t ecx_4 = zx.d(*edi_2)
                uint32_t edi_3 = zx.d(*ebx)
                uint16_t ebx_9 = (((esi_1 & 0x83e0) + (edi_3 & 0x83e0) + (ecx_4 & 0x83e0)
                    + (ecx_3 & 0x83e0) + 0x10040) u>> 2).w ^ (((esi_1 & 0x7c1f) + (edi_3 & 0x7c1f)
                    + (ecx_4 & 0x7c1f) + (ecx_3 & 0x7c1f) + 0x802) u>> 2).w
                edi_2 = &var_18_1[2]
                var_18_1 = edi_2
                uint16_t* ecx_23 = var_10_1
                var_10_1 = &var_10_1[1]
                *ecx_23 = (ebx_9 & 0x7c1f) ^ (((esi_1 & 0x83e0) + (edi_3 & 0x83e0)
                    + (ecx_4 & 0x83e0) + (ecx_3 & 0x83e0) + 0x10040) u>> 2).w
                ebx = &var_14_1[2]
                var_14_1 = ebx
            while (ebx u< ecx_2)
            
            ebx = var_20
        
        esi = var_1c + *(arg1[1] + 0x60)
        ecx = *arg1
        ebx = &ebx[*(ecx + 0x60)]
        var_1c = esi
        var_20 = ebx
    while (ebx u< eax_3)

return 0
