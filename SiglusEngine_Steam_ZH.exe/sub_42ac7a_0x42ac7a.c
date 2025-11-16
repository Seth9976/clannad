// 函数: sub_42ac7a
// 地址: 0x42ac7a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x1010)
uint32_t __security_cookie_1 = __security_cookie
int32_t esi
int32_t var_8 = esi
int32_t edi
int32_t var_c = edi
void var_1008
void* esi_1 = &var_1008
int32_t edi_1 = 0xffe
uint32_t var_100c
int32_t result = sub_42a41c(arg1, arg3, &var_100c)

if (result s>= 0)
    uint32_t ecx_2 = var_100c << 2
    int32_t eax_1 = *(ecx_2 + arg1[7])
    char var_1014_1 = eax_1.b
    int32_t eax_2 = eax_1 & 0xf
    char const* const var_1010_1
    
    if (eax_2 != 0xf)
        var_100c = &arg1[3]
        int32_t edx_6 = arg1[4]
        var_1010_1 = "warning"
        
        if (edx_6 != 0 && eax_2 != 0 && edx_6 u>= eax_2
                && ((var_1014_1 & 0x10) == 0 || (var_1014_1 & 0x20) == 0))
            int32_t* eax_5 = arg1[7] + ecx_2
            *eax_5 |= 0x20
            goto label_42ad48
        
        result = 0
    else
        var_1010_1 = "error"
        var_100c = &arg1[2]
    label_42ad48:
        
        if (arg2 != 0)
            int32_t eax_6 = *(arg2 + 0x10)
            
            if (eax_6 != 0)
                int32_t var_14_1 = eax_6
                int32_t eax_7 = sub_74aa1b(&var_1008, 0xffe, "%s")
                
                if (eax_7 s< 0)
                    eax_7 = 0xffe
                
                int32_t __saved_ebp
                esi_1 = &__saved_ebp + eax_7 - 0x1004
                edi_1 = 0xffe - eax_7
            
            int32_t eax_8 = *(arg2 + 0x14)
            
            if (eax_8 == 0)
                eax_8 += 1
            
            int32_t var_14_2 = eax_8
            int32_t eax_9 = sub_74aa1b(esi_1, edi_1, "(%u): ")
            
            if (eax_9 s< 0)
                eax_9 = edi_1
            
            esi_1 += eax_9
            edi_1 -= eax_9
        
        if (arg3 != 0)
            int32_t __saved_ebx_1 = arg3
            char const* const var_14_3 = var_1010_1
            int32_t eax_10 = sub_74aa1b(esi_1, edi_1, "%s X%u: ")
            
            if (eax_10 s< 0)
                eax_10 = edi_1
            
            esi_1 += eax_10
            edi_1 -= eax_10
        
        void arg_14
        int32_t eax_11 = __vsprintf_p(esi_1, edi_1, arg4, &arg_14)
        
        if (eax_11 s< 0)
            eax_11 = edi_1
        
        void* esi_2 = esi_1 + eax_11
        uint32_t eax_12 = var_100c
        *esi_2 = 0xa
        *(esi_2 + 1) = 0
        *eax_12 += 1
        result = sub_42a5a2(arg1, &var_1008)

sub_745f2b(__security_cookie_1)
return result
