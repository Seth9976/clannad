// 函数: sub_477010
// 地址: 0x477010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* var_628 = arg6
void* eax_3 = arg9
char* var_62c = eax_3
int32_t eax_4

if (arg3 s>= 0 && arg3 s< data_7031bc)
    eax_4 = arg2 + (arg3 << 1)
    eax_3 = eax_4 * 0x7a0 + &data_98bf04

enum MESSAGEBOX_RESULT eax_14

if (arg3 s< 0 || arg3 s>= data_7031bc || *(eax_3 + 0x27c) == 0 || arg4 s< 0
        || arg4 s>= *(eax_3 + 0x274))
    eax_14 = sub_476410(eax_3, arg2, arg3, arg4)
else
    int32_t* esi_4 = arg4 * 0x7d8 + *(eax_3 + 0x27c)
    int32_t var_638
    int32_t var_630
    char var_214[0x20c]
    void* eax_7 = sub_464730(&var_638, &var_630, arg8, &var_638, &var_214, var_628)
    
    if (eax_7 == 0)
        int32_t eax_24 = sub_476c40(eax_7, arg2, arg3, arg4, 0)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_24
    
    char var_624
    void var_41c
    enum MESSAGEBOX_RESULT eax_9 =
        sub_464940(&var_628, var_62c, &var_214, &var_628, &var_624, &var_41c, &var_214)
    enum MESSAGEBOX_RESULT edx_5
    
    if (eax_9 != 0xffffffff && var_624 == 0x3f)
        sub_476f90(sub_476f50(sub_476c40(eax_9, arg2, arg3, arg4, 0), arg5, esi_4, arg7, arg5), 
            var_630, esi_4, arg8)
        edx_5 = eax_9
    label_4772ca:
        int32_t eax_22 = sub_476fd0(&var_41c, edx_5, esi_4, &var_41c, var_628)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_22
    
    uint32_t var_658[0x4]
    uint32_t var_640
    eax_14 = sub_476c40(
        sub_464530(&var_640, &var_214, arg5, arg7, &var_640, &var_638, 1, var_638, &var_658), arg2, 
        arg3, arg4, 0)
    int32_t edx_8 = var_638
    
    if (edx_8 == 0xffffffff)
        if (eax_9 != 0xffffffff)
            sub_476f90(sub_476f50(arg5, arg5, esi_4, arg7, arg5), var_630, esi_4, arg8)
            edx_5 = eax_9
            goto label_4772ca
        
        int32_t esi_5 = var_630
        
        if (esi_5 != 0xffffffff && esi_5 u<= 0x1ff)
            *(esi_5 * 0x6c + &data_1382f88) -= 1
            
            if (*(esi_5 * 0x6c + &data_1382f88) s<= 0)
                sub_428300(esi_5 * 0x6c + 0x1382f8c)
                int32_t eax_23 = sub_428710(esi_5)
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_23
    else
        uint32_t eax_15 = var_640
        
        if (var_214[0] != 0 || (eax_15 != 0 && eax_15 != 1 && eax_15 != 6))
            char* ecx_11 = &var_624
            
            if (eax_9 == 0xffffffff)
                ecx_11 = &var_214
            
            int32_t eax_18
            
            if (edx_8 != 0xfffffffe)
                eax_18 = sub_476f00(eax_15, arg5, esi_4, ecx_11, arg7, eax_15, edx_8)
            else
                esi_4[0x64] = eax_15
                eax_18 = esi_4[0x5b] + 1
                esi_4[0x63] = arg5
                esi_4[0x38] = eax_18
            
            sub_476f90(eax_18, var_630, esi_4, arg8)
            edx_5 = eax_9
            goto label_4772ca
        
        eax_14 = sub_476e40(eax_15, eax_3, eax_4 * 0x650 + &data_72d6b0, esi_4, eax_15)
        
        if (eax_14 == 0)
            eax_14 = sub_476c40(eax_14, arg2, arg3, arg4, eax_14)
            
            if (data_702fc0 != 0)
                char* eax_16 = sub_476d70()
                sub_5f02dd(eax_1 ^ &__saved_ebp)
                return eax_16

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_14
