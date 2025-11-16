// 函数: sub_4774d0
// 地址: 0x4774d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = arg5
char* var_834 = eax_2
int32_t eax_3
int32_t edi_1

if (arg3 s>= 0 && arg3 s< data_7031bc)
    eax_3 = arg2 + (arg3 << 1)
    eax_2 = eax_3 * 0x7a0 + &data_98bf04
    edi_1 = *(eax_2 + 0x27c)

int32_t* eax_5

if (arg3 s< 0 || arg3 s>= data_7031bc || edi_1 == 0 || arg4 s< 0 || arg4 s>= *(eax_2 + 0x274))
    eax_5 = sub_476410(eax_2, arg2, arg3, arg4)
else
    int32_t* esi_4 = arg4 * 0x7d8 + edi_1
    eax_5 = esi_4[0x64]
    
    if (eax_5 == 0 || eax_5 == 1 || eax_5 == 2 || eax_5 == 5 || eax_5 == 6 || eax_5 == 7
            || eax_5 == 8)
        int32_t edi_2 = esi_4[1]
        int32_t var_83c
        void var_420
        
        if (edi_2 == 0xffffffff)
            var_83c = 0
        else
            sub_428a50(edi_2)
            sub_4cfd70(&var_420, &esi_4[0x6e])
            var_83c = 1
        
        int32_t var_840
        char var_830
        char var_628[0x208]
        void var_218
        int32_t eax_7 = sub_464e40(&var_830, &var_840, var_834, &var_830, &var_218, &var_628)
        uint32_t eax_8 = esi_4[0x63]
        int32_t edx_4
        
        if (eax_7 != 0xffffffff && var_830 == 0x3f)
            sub_476bb0(esi_4)
            sub_476f50(sub_476930(esi_4), eax_8, esi_4, arg6, eax_8)
            sub_476f90(&var_420, edi_2, esi_4, &var_420)
            edx_4 = eax_7
        label_4777c6:
            int32_t eax_20 = sub_476fd0(&var_218, edx_4, esi_4, &var_218, var_840)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_20
        
        uint32_t var_864[0x4]
        uint32_t var_854
        sub_464530(eax_8, &var_628, eax_8, arg6, &var_854, &var_83c, 1, var_83c, &var_864)
        sub_476bb0(esi_4)
        eax_5 = sub_476930(esi_4)
        int32_t edx_6 = var_83c
        
        if (edx_6 == 0xffffffff)
            if (eax_7 != 0xffffffff)
                sub_476f50(arg6, eax_8, esi_4, arg6, eax_8)
                sub_476f90(&var_420, edi_2, esi_4, &var_420)
                edx_4 = eax_7
                goto label_4777c6
            
            if (edi_2 != 0xffffffff && edi_2 u<= 0x1ff)
                *(edi_2 * 0x6c + &data_1382f88) -= 1
                
                if (*(edi_2 * 0x6c + &data_1382f88) s<= 0)
                    sub_428300(edi_2 * 0x6c + 0x1382f8c)
                    int32_t eax_21 = sub_428710(edi_2)
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return eax_21
        else
            uint32_t eax_11 = var_854
            
            if (var_628[0] != 0 || (eax_11 != 0 && eax_11 != 1 && eax_11 != 6))
                char* ecx_16 = &var_830
                
                if (eax_7 == 0xffffffff)
                    ecx_16 = &var_628
                
                if (edx_6 != 0xfffffffe)
                    sub_476f00(arg6, eax_8, esi_4, ecx_16, arg6, eax_11, edx_6)
                else
                    esi_4[0x64] = eax_11
                    int32_t eax_14 = esi_4[0x5b] + 1
                    esi_4[0x63] = eax_8
                    esi_4[0x38] = eax_14
                
                sub_476f90(&var_420, edi_2, esi_4, &var_420)
                edx_4 = eax_7
                goto label_4777c6
            
            eax_5 = sub_476e40(eax_11, eax_2, eax_3 * 0x650 + &data_72d6b0, esi_4, eax_11)
            
            if (eax_5 == 0)
                eax_5 = sub_476c40(eax_5, arg2, arg3, arg4, eax_5)
                
                if (data_702fc0 != 0)
                    char* eax_12 = sub_476d70()
                    sub_5f02dd(eax_1 ^ &__saved_ebp)
                    return eax_12

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_5
