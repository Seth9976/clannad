// 函数: sub_4761c0
// 地址: 0x4761c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_2 = data_1af4e8c

if (eax_2 u<= 0x1ff)
    int32_t edx_1 = data_1af4e88
    void* ecx_2 = eax_2 * 0xca0 + &data_72d6b0
    eax_2 = eax_2 * 0xf40 + &data_98bf04
    
    if (edx_1 s< 0 || edx_1 s>= *(eax_2 + 0x274))
        int32_t ecx_6 = *(ecx_2 + 0xc)
        
        if (ecx_6 == 1 || ecx_6 == 9 || ecx_6 == 4 || ecx_6 == 3 || ecx_6 == 6)
            int32_t ecx_9 = *(eax_2 + 0x80)
            int32_t ebx_1 = *(eax_2 + 0x78)
            int32_t esi_1 = *(eax_2 + 0x7c)
            int32_t edi_1 = *(eax_2 + 0x84)
            
            if (ebx_1 s<= ecx_9 && esi_1 s<= edi_1)
                sub_475950(eax_2, esi_1, ebx_1, ecx_9, edi_1)
                int32_t var_14 = 0xffff0000
                int32_t var_10_1 = 0xffff00ff
                int32_t var_c_1 = 0xff000000
                eax_2 = sub_4759c0(&var_14, esi_1, ebx_1, ecx_9, edi_1, &var_14)
                data_1b14a24 = 1
        else if (ecx_6 == 8)
            int32_t eax_5 = sub_4760e0(ecx_6, eax_2)
            sub_5f02dd(eax_1 ^ &__saved_ebp)
            return eax_5
    else if (edx_1 s>= 0)
        int32_t eax_4 = sub_476030(eax_2, edx_1)
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_4

sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_2
