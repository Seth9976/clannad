// 函数: sub_674be0
// 地址: 0x674be0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* eax = data_bac45c
*(eax + 0x60) += 4
int32_t esi = *(*(eax + 0x60) - 4)
int32_t i_3 = sub_677fa0(arg3, arg2)
int32_t i_1 = i_3
int32_t i_2 = i_3
char eax_2 = sub_65d530(esi, arg4)

if (eax_2 == 0)
    return eax_2

void* ecx_1 = data_bac460
int32_t ecx_3 = 0
int32_t* edx_1 = sub_548970(ecx_1 + 4, *(ecx_1 + 0xb8) - 1, 1)
int32_t ebx = 0
int32_t* var_14 = edx_1
int32_t var_8 = 0
int32_t* eax_5

if (i_1 s> 0)
    int32_t esi_1 = 0
    int32_t i
    
    do
        int32_t eax_7 = *(arg3 + 0xa4)
        
        if (*(eax_7 + esi_1 + 4) == 0xa)
            int32_t eax_8 = *(eax_7 + esi_1 + 8)
            int32_t var_2c_1 = ecx_3
            int32_t* eax_9 = sub_55b0d0(&edx_1[0x57], ebx)
            
            if (eax_9 != 0)
                *eax_9 = eax_8
            
            ecx_3 = var_8
            ebx += 1
            edx_1 = var_14
        
        eax_5 = *(arg3 + 0xa4)
        
        if (*(eax_5 + esi_1 + 4) == 0x14)
            void* edi_1 = &eax_5[3] + esi_1
            eax_5 = sub_55b400(&edx_1[0x85], ecx_3, 1)
            
            if (eax_5 != 0 && eax_5 != edi_1)
                sub_52e3c0(eax_5, edi_1, 0, 0xffffffff)
            
            i_1 = i_2
            ecx_3 = var_8 + 1
            var_8 = ecx_3
        
        edx_1 = var_14
        esi_1 += 0x164
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

eax_5.b = 1
return eax_5
