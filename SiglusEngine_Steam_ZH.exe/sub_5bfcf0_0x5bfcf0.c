// 函数: sub_5bfcf0
// 地址: 0x5bfcf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t* result = __security_cookie ^ &__saved_ebp
int32_t* result_1 = result

if (arg2 s>= 0 && arg3 s>= 0)
    void var_8c
    __builtin_memcpy(&var_8c, arg1, 0x80)
    sub_677cd0(&var_8c)
    
    if (*(arg1 + 0x11c) s> 0)
        sub_677cd0(arg1 + 0xa0)
    
    void* const esi_2 = *(arg1 + 0x200)
    
    if (esi_2 == *(arg1 + 0x204))
        esi_2 = nullptr
    
    int32_t* esi_3 = esi_2 + 4
    
    while (true)
        int32_t edi_3 = *(arg1 + 0x200)
        int32_t ecx_2 = *(arg1 + 0x204)
        
        if (edi_3 == ecx_2)
            break
        
        if (&esi_3[-1] u>= (ecx_2 - edi_3) s/ 0x164 * 0x164 + edi_3)
            break
        
        int32_t eax_6 = *esi_3
        
        if (eax_6 != 0xa)
            if (eax_6 == 0x14)
                sub_60c680(data_bac49c + 0xc, &esi_3[2])
            
            esi_3 = &esi_3[0x59]
        else
            sub_677bb0(esi_3[1])
            esi_3 = &esi_3[0x59]
    
    void* ecx_9 = data_bac460
    int32_t edi_4 = *(data_bac45c + 0x64)
    *(sub_548970(ecx_9 + 4, *(ecx_9 + 0xb8) - 1, 1) + 0x2d0) = 0
    sub_65a2f0()
    sub_698240(arg2, arg3)
    void* ecx_11 = data_bac460
    void* eax_14 = sub_548970(ecx_11 + 4, *(ecx_11 + 0xb8) - 1, 1)
    *(eax_14 + 0x2c8) = 3
    *(eax_14 + 0x2cc) = 0x100
    sub_676610(1)
    void* edx_4 = data_bac460
    *(eax_14 + 0x300) = edi_4
    *(eax_14 + 0x304) = arg2
    *(eax_14 + 0x308) = arg3
    void* eax_16 = sub_548970(edx_4 + 4, *(edx_4 + 0xb8) - 1, 1)
    int32_t ecx_17 = *(arg1 + 0x204) - *(arg1 + 0x200)
    bool cond:1_1 = *(arg1 + 0x11c) s> 0
    *(eax_16 + 0x2dc) = arg3
    int32_t eax_18
    eax_18.b = cond:1_1
    *(eax_16 + 0x2d4) = eax_18 + 1 + ecx_17 s/ 0x164
    *(eax_16 + 0x2d8) = arg2
    result = sub_673b70()

sub_745f2b(result_1 ^ &__saved_ebp)
return result
