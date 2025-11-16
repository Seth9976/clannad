// 函数: sub_542900
// 地址: 0x542900
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = sub_4cfc80(arg1)
int32_t edx = data_12dc2b4
int32_t ecx = eax_1
int32_t result = 0
int32_t var_c = ecx
void* esi = &data_12c92b4

if (edx s> 0)
    do
        int32_t eax_2 = *(esi + 0x44)
        
        if (eax_2 == ecx)
            int32_t eax_3 = sub_4d1be0(eax_2, arg1, esi + 1, eax_2)
            
            if (eax_3 == 0)
                sub_4d1c30(eax_3, esi + 0x48, arg1, *(esi + 0x88))
                return result
            
            edx = data_12dc2b4
            ecx = var_c
        
        result += 1
        esi += 0x98
    while (result s< edx)

return 0xffffffff
