// 函数: sub_612360
// 地址: 0x612360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* result = sub_5fb2f0(arg2)

if (result.b != 0)
    char var_ac
    sub_6ef970(&var_ac)
    void* ecx_2 = arg2
    result = sub_5fb380(ecx_2, &var_ac)
    
    if (var_ac != 0)
        result = arg1[1]
        int32_t* esi_1 = *arg1
        int32_t edi_1 = 0
        uint32_t ebx_4 = (result - esi_1 + 3) u>> 2
        
        if (esi_1 u> result)
            ebx_4 = 0
        
        if (ebx_4 != 0)
            do
                result = *esi_1
                int32_t edx = *(ecx_2 + 0x308)
                int32_t temp0_1 = *(result + 0x120)
                
                if (edx s< temp0_1)
                label_6123f0:
                    int32_t edx_2 = *(ecx_2 + 0x310)
                    int32_t temp1_1 = *(result + 0x120)
                    
                    if (temp1_1 s< edx_2)
                        result = sub_6284e0(result + 4, &var_ac)
                        ecx_2 = arg2
                    else if (temp1_1 == edx_2 && *(result + 0x124) s<= *(ecx_2 + 0x314))
                        result = sub_6284e0(result + 4, &var_ac)
                        ecx_2 = arg2
                else if (edx == temp0_1 && *(ecx_2 + 0x30c) s<= *(result + 0x124))
                    goto label_6123f0
                
                edi_1 += 1
                esi_1 = &esi_1[1]
            while (edi_1 != ebx_4)

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
