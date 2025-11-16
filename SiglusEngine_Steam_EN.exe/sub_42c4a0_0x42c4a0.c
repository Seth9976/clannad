// 函数: sub_42c4a0
// 地址: 0x42c4a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
int32_t ecx = arg2[2]

if (ecx != 0xffffffff)
    int32_t var_420
    eax_1 = sub_41fbc0(ecx, &var_420)
    
    if (eax_1 == 0)
        arg2[2] = 0xffffffff
    else
        eax_1 = var_420
        
        if (arg2[3] != eax_1)
            int32_t esi = arg2[2]
            arg2[3] = eax_1
            int32_t eax_2 = sub_41fbc0(esi, &var_420)
            
            if (eax_2 == 0)
                arg2[2] = 0xffffffff
                arg2[0x37] += 1
                sub_5f02dd(var_8 ^ &__saved_ebp)
                return eax_2
            
            int32_t* eax_5 = *(*(esi * 0x64 + data_13570f8 + 0x60) + (var_420 << 2))
            void var_41c
            sub_4cfd70(&var_41c, *eax_5 + eax_5)
            void var_214
            sub_4cfd70(&var_214, &var_41c)
            int32_t edi_1 = *(arg1 + 0x4c)
            int32_t esi_2 = *(arg1 + 0x60)
            sub_42bd40(arg2)
            char* eax_7 = sub_42bf10(&var_214, arg2, arg1, &var_214, edi_1, esi_2)
            *(arg1 + 0x4c) = edi_1
            arg2[0x37] += 1
            sub_5f02dd(var_8 ^ &__saved_ebp)
            return eax_7

sub_5f02dd(var_8 ^ &__saved_ebp)
return eax_1
