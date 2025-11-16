// 函数: sub_6e5fd0
// 地址: 0x6e5fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg1 + 0xc9f0)
int32_t ebx = *(arg1 + 0xc9ec)
void* edi = arg1 + 0xc9e4

if (eax s< 3)
    ebx = sub_6ec810(edi, 3)
    eax = *(edi + 0xc)

uint32_t ebx_1 = ebx u>> 0x1d
*(edi + 8) = ebx << 3
*(edi + 0xc) = eax - 3
void* eax_4

if (ebx_1 != 0)
    eax_4 = (ebx_1 << 3) + &data_adbfa8
else
    void* i = nullptr
    int64_t var_20 = 0
    
    do
        int32_t eax_3 = *(edi + 0xc)
        int32_t edx_1 = *(edi + 8)
        
        if (eax_3 s< 3)
            edx_1 = sub_6ec810(edi, 3)
            eax_3 = *(edi + 0xc)
        
        *(edi + 8) = edx_1 << 3
        *(edi + 0xc) = eax_3 - 3
        eax_3.b = *(i + 0xadbfe0)
        i += 1
        *(&var_20 + (edx_1 u>> 0x1d)) = eax_3.b
    while (i s< 8)
    
    eax_4 = &var_20

int32_t edx_3 = *(arg1 + 0xfc)
int32_t eax_5 = 0xadbd20
int32_t var_18 = edx_3

if (ebx_1 != 7)
    eax_5 = 0xadbd38

int32_t ecx_6 = *(arg1 + 0xd0)
char* ebx_2 = nullptr
void* result_1 = *(arg1 + 0xf0)
void* result = *(arg1 + 0xec)
int32_t var_14 = ecx_6

if (edx_3 != 0)
    int32_t* esi_1 = result + 8
    result = result_1
    
    do
        if (*(ebx_2 + result) != 0xff)
            if ((*(ecx_6 + (esi_1[-2] << 2)) & 1) != 0 || (*(ecx_6 + (esi_1[-1] << 2)) & 1) != 0
                    || (*(ecx_6 + (*esi_1 << 2)) & 1) != 0
                    || (*(ecx_6 + (esi_1[1] << 2)) & 1) != 0)
                edx_3 = var_18
                uint32_t eax_10
                eax_10.b = *(sub_6ec760(edi, eax_5) + eax_4)
                *(ebx_2 + result_1) = eax_10.b
                ecx_6 = var_14
                result = result_1
            else
                result = result_1
                *(ebx_2 + result) = 0
        
        ebx_2 = &ebx_2[1]
        esi_1 = &esi_1[0xc]
    while (ebx_2 u< edx_3)

return result
