// 函数: __setargv
// 地址: 0x5f7e54
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg1
int32_t var_c = arg1

if (data_20f4594 == 0)
    ___initmbctable()

data_64186c = 0
GetModuleFileNameA(nullptr, &data_641768, 0x104)
char* esi = data_20f459c
data_640fd0 = &data_641768

if (esi == 0 || *esi == 0)
    esi = &data_641768

sub_5f7f07(esi, nullptr, nullptr, &var_8, &var_c)
int32_t ebx = var_8

if (ebx u< 0x3fffffff)
    int32_t ecx = var_c
    
    if (ecx u< 0xffffffff)
        uint32_t edx_1 = ecx + (ebx << 2)
        
        if (edx_1 u>= ecx)
            int32_t* eax_1 = sub_5f6ab6(edx_1)
            
            if (eax_1 != 0)
                sub_5f7f07(esi, eax_1, &eax_1[ebx], &var_8, &var_c)
                int32_t eax_4 = var_8 - 1
                data_640fc0 = eax_1
                data_640fbc = eax_4
                return 0

return 0xffffffff
