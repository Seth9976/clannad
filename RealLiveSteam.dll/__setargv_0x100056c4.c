// 函数: __setargv
// 地址: 0x100056c4
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

int32_t var_8 = arg1
int32_t var_c = arg1

if (data_1001c594 == 0)
    ___initmbctable()

data_1001b2a4 = 0
GetModuleFileNameA(nullptr, &data_1001b1a0, 0x104)
char* esi = data_1001c59c
data_1001aa44 = &data_1001b1a0

if (esi == 0 || *esi == 0)
    esi = &data_1001b1a0

sub_10005777(esi, nullptr, nullptr, &var_8, &var_c)
int32_t ebx = var_8

if (ebx u< 0x3fffffff)
    int32_t ecx = var_c
    
    if (ecx u< 0xffffffff)
        uint32_t edx_1 = ecx + (ebx << 2)
        
        if (edx_1 u>= ecx)
            int32_t* eax_1 = sub_1000425a(edx_1)
            
            if (eax_1 != 0)
                sub_10005777(esi, eax_1, &eax_1[ebx], &var_8, &var_c)
                int32_t eax_4 = var_8 - 1
                data_1001aa34 = eax_1
                data_1001aa30 = eax_4
                return 0

return 0xffffffff
