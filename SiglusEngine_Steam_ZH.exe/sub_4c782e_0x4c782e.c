// 函数: sub_4c782e
// 地址: 0x4c782e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* var_c = arg1
int32_t eax_2 = *arg2 + 1
int32_t* edx_1 = *(arg1 + 0x14) + (eax_2 << 2)
int32_t esi_1 = *(arg1 + 8)

if (eax_2 u< esi_1)
    int32_t edi
    int32_t var_14_1 = edi
    int32_t* edi_1 = edx_1
    
    do
        void* edx_2 = *edi_1
        int16_t ebx_1 = (*(*(*(arg1 + 0x10) + (*(edx_2 + 4) << 2)) + 4)).w
        
        if (((ebx_1.b & 0x10) == 0 || (ebx_1:1.b & 2) != 0) && (ebx_1.b & 0x20) == 0)
            break
        
        void* esi_5 = *(*edx_1 + 0x68)
        void* edx_3 = *(edx_2 + 0x68)
        
        if (*(esi_5 + 0x24) != *(edx_3 + 0x24))
            break
        
        if (*(esi_5 + 0x20) != *(edx_3 + 0x20))
            break
        
        eax_2 += 1
        edi_1 = &edi_1[1]
    while (eax_2 u< esi_1)

*arg2 = eax_2 - 1
return 0
