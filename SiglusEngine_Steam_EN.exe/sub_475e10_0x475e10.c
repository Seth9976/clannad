// 函数: sub_475e10
// 地址: 0x475e10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = *(arg2 + 0x274)
int32_t var_18 = result

if (result s> 0)
    int32_t* esi_1 = *(arg2 + 0x27c) + 0x190
    int32_t* var_1c_1 = esi_1
    int32_t i
    
    do
        result = *esi_1
        
        if (result == 1 || result == 9 || result == 4 || result == 3 || result == 6)
            int32_t edi_1 = esi_1[-0x4d]
            int32_t ebx_1 = esi_1[-0x4b]
            int32_t ecx = esi_1[-0x4c]
            int32_t edx = esi_1[-0x4a]
            
            if (edi_1 s<= ebx_1 && ecx s<= edx)
                int32_t edx_1 = edx - ebx_1
                int32_t var_14 = 0xffffff
                int32_t ecx_1 = ecx - edi_1
                int32_t var_10_1 = 0
                int32_t var_c_1 = 0xffffff00
                void* esi_2 = &var_14:1
                int32_t var_28_1 = edx_1
                int32_t var_24_1 = ecx_1
                int32_t j_1 = 4
                int32_t j
                
                do
                    int32_t var_38_1 = 0
                    int32_t var_3c_1 = 0xff
                    int32_t var_40_1 = 0
                    int32_t var_44_1 = 0
                    int32_t eax_6 = ecx_1 + edi_1
                    result = sub_5860f0(eax_6, data_702fec, data_702fe8, data_702ff0, edi_1, eax_6, 
                        ebx_1, edx_1 + ebx_1, *(esi_2 - 1), zx.d(*esi_2), zx.d(*(esi_2 + 1)), 
                        data_702ff4, data_702ff8, data_702ffc, data_703000, ecx_1, 0, 0, 0, 0, 0, 
                        0, 0, 0)
                    ecx_1 = var_24_1
                    esi_2 += 3
                    edx_1 = var_28_1
                    ebx_1 -= 1
                    edi_1 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                esi_1 = var_1c_1
                data_1b14a24 = 1
        
        esi_1 = &esi_1[0x1f6]
        i = var_18
        var_18 -= 1
        var_1c_1 = esi_1
    while (i != 1)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
