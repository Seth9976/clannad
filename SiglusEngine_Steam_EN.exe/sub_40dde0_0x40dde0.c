// 函数: sub_40dde0
// 地址: 0x40dde0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax
int32_t ecx
int32_t edx
void* result = sub_5f1ac0(eax, edx, ecx, 1, 0x520)
int32_t i_5 = 0
*(result + 0x510) = arg1
*(result + 0x508) = arg1[0xd2]
int32_t i_6 = *arg1
void* result_1 = result

if (i_6 s> 0)
    void* eax_3 = &arg1[1]
    int32_t i
    
    do
        int32_t edx_1 = *eax_3
        eax_3 += 4
        i_5 += arg1[edx_1 + 0x20]
        i = i_6
        i_6 -= 1
    while (i != 1)

*(result + 0x504) = i_5 + 2
void var_104

if (i_5 + 2 s> 0)
    void* ecx_1 = &var_104
    void* eax_4 = &arg1[0xd1]
    int32_t i_8 = i_5 + 2
    int32_t i_1
    
    do
        *ecx_1 = eax_4
        eax_4 += 4
        ecx_1 += 4
        i_1 = i_8
        i_8 -= 1
    while (i_1 != 1)

sub_5f02f0(&var_104, i_5 + 2, 4, sub_40e000)

if (i_5 + 2 s> 0)
    void* eax_5 = &var_104
    void* ecx_2 = result + 0x104
    int32_t i_9 = i_5 + 2
    int32_t i_2
    
    do
        int32_t ebx_2 = *eax_5
        eax_5 += 4
        ecx_2 += 4
        *(ecx_2 - 4) = (ebx_2 - arg1 - 0x344) s>> 2
        i_2 = i_9
        i_9 -= 1
    while (i_2 != 1)

int32_t i_3 = 0

if (i_5 + 2 s> 0)
    void* ecx_3 = result + 0x104
    
    do
        int32_t edx_2 = *ecx_3
        ecx_3 += 4
        *(result + (edx_2 << 2) + 0x208) = i_3
        i_3 += 1
    while (i_3 s< i_5 + 2)
    
    if (i_5 + 2 s> 0)
        void* result_2 = result
        int32_t i_7 = i_5 + 2
        int32_t i_4
        
        do
            int32_t edx_3 = *(result_2 + 0x104)
            result_2 += 4
            i_4 = i_7
            i_7 -= 1
            *(result_2 - 4) = arg1[edx_3 + 0xd1]
        while (i_4 != 1)

switch (arg1[0xd0] - 1)
    case 0
        *(result + 0x50c) = 0x100
    case 1
        *(result + 0x50c) = 0x80
    case 2
        *(result + 0x50c) = 0x56
    case 3
        *(result + 0x50c) = 0x40

if (i_5 s> 0)
    void* eax_8 = result + 0x30c
    int32_t edx_5 = 2
    void* var_110_1 = eax_8
    void* var_11c_1 = &arg1[0xd3]
    
    do
        int32_t ebx_6 = 0
        int32_t var_118_1 = *(result + 0x508)
        int32_t esi_2 = 0
        int32_t edi_2 = 1
        int32_t ecx_6 = *var_11c_1
        int32_t ecx_7 = 0
        
        if (edx_5 s> 0)
            void* var_120_1 = &arg1[0xd1]
            
            do
                int32_t eax_12 = *var_120_1
                
                if (eax_12 s> esi_2 && eax_12 s< ecx_6)
                    ebx_6 = ecx_7
                    esi_2 = eax_12
                
                if (eax_12 s< var_118_1 && eax_12 s> ecx_6)
                    edi_2 = ecx_7
                    var_118_1 = eax_12
                
                ecx_7 += 1
                var_120_1 += 4
            while (ecx_7 s< edx_5)
            
            result = result_1
            eax_8 = var_110_1
        
        *(eax_8 + 0xfc) = ebx_6
        *eax_8 = edi_2
        eax_8 += 4
        edx_5 += 1
        var_11c_1 += 4
        var_110_1 = eax_8
    while (edx_5 - 2 s< i_5)

return result
