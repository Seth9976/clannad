// 函数: sub_7557bc
// 地址: 0x7557bc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t var_c = arg1
data_b95a28 = 0
GetModuleFileNameW(nullptr, &data_b95820, 0x104)
int16_t* esi = data_4ece2e8
data_b94f44 = &data_b95820

if (esi == 0 || *esi == 0)
    esi = &data_b95820

_wparse_cmdline(esi, nullptr, nullptr, &var_8, &var_c)
int32_t ebx = var_8

if (ebx u< 0x3fffffff)
    int32_t eax_1 = var_c
    
    if (eax_1 u< 0x7fffffff)
        uint32_t ecx_1 = (eax_1 + (ebx << 1)) * 2
        
        if (ecx_1 u>= eax_1 * 2)
            void* eax_3 = sub_74cd17(ecx_1)
            
            if (eax_3 != 0)
                _wparse_cmdline(esi, eax_3, eax_3 + (ebx << 2), &var_8, &var_c)
                int32_t eax_6 = var_8 - 1
                data_b94f34 = eax_3
                data_b94f2c = eax_6
                return 0

return 0xffffffff
