// 函数: sub_612440
// 地址: 0x612440
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (*(arg2 + 0xa0) s>= 0)
    char var_ac
    sub_6ef970(&var_ac)
    result = sub_5fc680(arg2, &var_ac)
    
    if (var_ac != 0)
        result = arg1[1]
        int32_t* esi_1 = *arg1
        int32_t edi_1 = 0
        uint32_t ecx_5 = (result - esi_1 + 3) u>> 2
        
        if (esi_1 u> result)
            ecx_5 = 0
        
        if (ecx_5 != 0)
            do
                void* ecx_6 = *esi_1
                result = *(ecx_6 + 0x120)
                
                if (*(arg2 + 0xd0) s<= result && result s<= *(arg2 + 0xd4))
                    result = sub_6284e0(ecx_6 + 4, &var_ac)
                
                edi_1 += 1
                esi_1 = &esi_1[1]
            while (edi_1 != ecx_5)

sub_745f2b(result_1 ^ &__saved_ebp)
return result
