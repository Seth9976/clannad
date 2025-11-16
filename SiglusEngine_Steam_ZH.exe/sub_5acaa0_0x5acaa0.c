// 函数: sub_5acaa0
// 地址: 0x5acaa0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s< 0)
    return 

int32_t eax_1
int32_t edx_3
edx_3:eax_1 = muls.dp.d(0x78787879, *(arg1 + 0x418) - *(arg1 + 0x414))
int32_t edx_4 = edx_3 s>> 5

if (arg2 s>= (edx_4 u>> 0x1f) + edx_4)
    return 

int32_t eax_4 = *(arg1 + 0x414)
int32_t ecx_2 = arg2 * 0x11
int32_t esi_1 = *(eax_4 + (ecx_2 << 2) + 8)
int32_t* edi_1 = eax_4 + (ecx_2 << 2)
int32_t ecx_3 = *edi_1
int32_t eax = edi_1[3]
void var_c
int32_t eax_9
void* ecx_5
int32_t* edx_10

if (ecx_3 != 0xffffffff)
    if (eax == 0)
        *(edi_1[1] * 0x164 + *(*(data_bac4ac + 0xa4) + ecx_3 * 0xb8 + 0xa4) + 8) =
            sub_6ae470(arg3, 0)
        return 
    
    if (eax == 3)
        ecx_5 = edi_1[1] * 0x164 + 0xc
        eax_9 = *(*(data_bac4ac + 0xa4) + ecx_3 * 0xb8 + 0xa4)
    label_5acc40:
        int32_t* ecx_15 = ecx_5 + eax_9
        eax = arg3
        
        if (ecx_15 != eax)
            sub_52e3c0(ecx_15, eax, 0, 0xffffffff)
    else if (eax == 2)
        void* edi_3 = *sub_58c590(&var_c, 
            edi_1[1] * 0x164 + 0x160 + *(*(data_bac4ac + 0xa4) + ecx_3 * 0xb8 + 0xa4))
        sub_54b010(&var_c)
        
        if (edi_3 != 0 && esi_1 s>= 0 && esi_1 s< (*(edi_3 + 0xa8) - *(edi_3 + 0xa4)) s>> 2)
            sub_557630(edi_3, esi_1, sub_6ae470(arg3, 0))
    else if (eax == 5)
        edx_10 = edi_1[1] * 0x164 + 0x160 + *(*(data_bac4ac + 0xa4) + ecx_3 * 0xb8 + 0xa4)
    label_5acd12:
        void* edi_4 = *sub_58c640(&var_c, edx_10)
        sub_54b010(&var_c)
        
        if (edi_4 != 0 && esi_1 s>= 0 && esi_1 s< sub_55aeb0(edi_4 + 4))
            sub_57a560(edi_4, esi_1, arg3)
else
    if (eax == 0)
        *(edi_1[1] * 0x164 + *(data_bac4b0 + 0xa4) + 8) = sub_6ae470(arg3, 0)
        return 
    
    if (eax == 3)
        ecx_5 = edi_1[1] * 0x164
        eax_9 = *(data_bac4b0 + 0xa4) + 0xc
        goto label_5acc40
    
    if (eax == 2)
        void* edi_2 = *sub_58c590(&var_c, *(data_bac4b0 + 0xa4) + 0x160 + edi_1[1] * 0x164)
        sub_54b010(&var_c)
        
        if (edi_2 != 0 && esi_1 s>= 0 && esi_1 s< (*(edi_2 + 0xa8) - *(edi_2 + 0xa4)) s>> 2)
            sub_557630(edi_2, esi_1, sub_6ae470(arg3, 0))
    else if (eax == 5)
        edx_10 = *(data_bac4b0 + 0xa4) + 0x160 + edi_1[1] * 0x164
        goto label_5acd12
