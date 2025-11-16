// 函数: sub_9a8580
// 地址: 0x9a8580
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* ebx = arg2

if (*ebx s<= 1)
    sub_742d70(arg3, 0, 1)
else
    sub_742d70(arg3, 1, 1)
    sub_742d70(arg3, *ebx - 1, 4)

if (ebx[0x121] s<= 0)
    sub_742d70(arg3, 0, 1)
else
    sub_742d70(arg3, 1, 1)
    sub_742d70(arg3, ebx[0x121] - 1, 8)
    int32_t i_3 = 0
    
    if (ebx[0x121] s> 0)
        void* edi_1 = &ebx[0x222]
        int32_t i
        
        do
            int32_t ecx_1 = 0
            int32_t eax_6 = *(arg1 + 4)
            uint32_t j = eax_6 - 1
            
            if (eax_6 != 1)
                do
                    ecx_1 += 1
                    j u>>= 1
                while (j != 0)
            
            sub_742d70(arg3, *(edi_1 - 0x400), ecx_1)
            int32_t ecx_2 = 0
            int32_t eax_8 = *(arg1 + 4)
            uint32_t j_1 = eax_8 - 1
            
            if (eax_8 != 1)
                do
                    ecx_2 += 1
                    j_1 u>>= 1
                while (j_1 != 0)
            
            sub_742d70(arg3, *edi_1, ecx_2)
            i = i_3 + 1
            edi_1 += 4
            i_3 = i
        while (i s< ebx[0x121])

sub_742d70(arg3, 0, 2)

if (*ebx s> 1)
    int32_t i_1 = 0
    
    if (*(arg1 + 4) s> 0)
        void* ebx_1 = &ebx[1]
        
        do
            sub_742d70(arg3, *ebx_1, 4)
            ebx_1 += 4
            i_1 += 1
        while (i_1 s< *(arg1 + 4))

int32_t* result = arg2

if (*result s> 0)
    void* edi_2 = &result[0x111]
    int32_t i_2 = 0
    
    do
        sub_742d70(arg3, 0, 8)
        sub_742d70(arg3, *(edi_2 - 0x40), 8)
        sub_742d70(arg3, *edi_2, 8)
        result = arg2
        edi_2 += 4
        i_2 += 1
    while (i_2 s< *result)

return result
