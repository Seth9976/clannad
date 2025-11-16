// 函数: sub_4b93bd
// 地址: 0x4b93bd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ecx = *(arg1 + 0xc)
int32_t edi
int32_t var_10 = edi
int32_t j = 0
int32_t result = 0

if (ecx u> 0x40)
    sub_4a4100(arg1, nullptr, 0x1194, 
        "program is order of magnitude too large to compile to ps_1_4")
    return 1

int32_t i = 0

if (ecx u> 0)
    do
        void* ecx_2 = *(*(arg1 + 0x18) + (i << 2))
        i += 1
        *(ecx_2 + 0x28) = 0
    while (i u< *(arg1 + 0xc))

int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x18) + (i_1 << 2))
        *(arg1 + 0x100) = eax_2
        
        if (*(eax_2 + 0x24) != 0 && *(eax_2 + 4) u> 0)
            do
                void* eax_3 = *(arg1 + 0x100)
                
                if (*(*(*(arg1 + 0x14) + (*(*(eax_3 + 8) + (j << 2)) << 2)) + 0x6c) == 1)
                    sub_4a4100(arg1, *(eax_3 + 0x3c), 0x1194, 
                        "cannot perform texture load that is in anyway dependent on COLOR registers")
                    result = 1
                
                j += 1
            while (j u< *(*(arg1 + 0x100) + 4))
        
        j = 0
        
        if (sub_4b9346(arg1, *(arg1 + 0x100), 0) == 0)
            return 1
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

return result
