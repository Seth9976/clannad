// 函数: sub_9a9b20
// 地址: 0x9a9b20
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* edi = arg1
int32_t esi = 0xffffffff
int32_t var_c = 0
int32_t eax = edi[0xd2]
sub_742d70(arg2, *edi, 5)
int32_t i_7 = 0

if (*edi s> 0)
    void* ecx_1 = &edi[1]
    void* var_10_1 = ecx_1
    int32_t i
    
    do
        sub_742d70(arg2, *ecx_1, 4)
        
        if (esi s< *var_10_1)
            esi = *var_10_1
        
        i = i_7 + 1
        ecx_1 = var_10_1 + 4
        i_7 = i
        var_10_1 = ecx_1
    while (i s< *edi)

int32_t i_5 = esi + 1

if (esi + 1 s> 0)
    void* var_8 = &edi[0x50]
    void* esi_2 = &edi[0x30]
    int32_t i_1
    
    do
        sub_742d70(arg2, *(esi_2 - 0x40) - 1, 3)
        sub_742d70(arg2, *esi_2, 2)
        
        if (*esi_2 != 0)
            sub_742d70(arg2, *(esi_2 + 0x40), 8)
        
        int32_t j_2 = 0
        
        if (1 << (*esi_2).b s> 0)
            void* edi_1 = var_8
            int32_t j
            
            do
                sub_742d70(arg2, *edi_1 + 1, 8)
                edi_1 += 4
                j = j_2 + 1
                j_2 = j
            while (j s< 1 << (*esi_2).b)
        
        var_8 += 0x20
        esi_2 += 4
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    edi = arg1

sub_742d70(arg2, edi[0xd0] - 1, 2)
int32_t ecx_5 = 0
uint32_t i_3 = eax - 1
uint32_t i_2 = i_3

if (eax != 1)
    do
        ecx_5 += 1
        i_2 u>>= 1
    while (i_2 != 0)

int32_t result = sub_742d70(arg2, ecx_5, 4)
int32_t ecx_6 = 0
int32_t var_8_1 = 0

if (i_3 != 0)
    do
        ecx_6 += 1
        i_3 u>>= 1
    while (i_3 != 0)
    
    var_8_1 = ecx_6

int32_t i_4 = 0
int32_t edx_2 = 0
int32_t i_6 = 0

if (*edi s> 0)
    result = &edi[1]
    int32_t result_1 = result
    
    do
        int32_t ebx_2 = var_c + edi[*result + 0x20]
        var_c = ebx_2
        
        if (edx_2 s< ebx_2)
            int32_t j_3 = ebx_2 - edx_2
            void* esi_5 = &edi[0xd3 + edx_2]
            int32_t edx_3 = edx_2 + j_3
            int32_t j_1
            
            do
                sub_742d70(arg2, *esi_5, ecx_6)
                ecx_6 = var_8_1
                esi_5 += 4
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
            edx_2 = edx_3
            edi = arg1
            i_4 = i_6
        
        i_4 += 1
        result = result_1 + 4
        i_6 = i_4
        result_1 = result
    while (i_4 s< *edi)

return result
