// 函数: sub_6d7e70
// 地址: 0x6d7e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char eax = arg1[2].b
int32_t ebx
int32_t var_4 = ebx

if (eax == 6)
    void* esi_1 = arg2
    int32_t i_4 = *arg1
    
    if (*(arg1 + 9) != 8)
        if (i_4 != 0)
            char eax_9
            int32_t i
            
            do
                char eax_4 = *(esi_1 + 2)
                esi_1 += 8
                arg1.b = *(esi_1 - 8)
                arg2 += 8
                ebx.b = *(esi_1 - 7)
                *(arg2 - 8) = eax_4
                *(arg2 - 7) = *(esi_1 - 5)
                *(arg2 - 6) = *(esi_1 - 4)
                *(arg2 - 5) = *(esi_1 - 3)
                *(arg2 - 4) = *(esi_1 - 2)
                eax_9 = *(esi_1 - 1)
                *(arg2 - 3) = eax_9
                *(arg2 - 2) = arg1.b
                *(arg2 - 1) = ebx.b
                i = i_4
                i_4 -= 1
            while (i != 1)
            return eax_9
    else if (i_4 != 0)
        char eax_3
        int32_t i_1
        
        do
            char eax_1 = *(esi_1 + 1)
            esi_1 += 4
            arg1.b = *(esi_1 - 4)
            arg2 += 4
            *(arg2 - 4) = eax_1
            *(arg2 - 3) = *(esi_1 - 2)
            eax_3 = *(esi_1 - 1)
            *(arg2 - 2) = eax_3
            *(arg2 - 1) = arg1.b
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
        return eax_3
else if (eax == 4)
    void* esi_2 = arg2
    int32_t i_5 = *arg1
    
    if (*(arg1 + 9) != 8)
        if (i_5 != 0)
            int32_t i_2
            
            do
                char eax_10 = *(esi_2 + 2)
                esi_2 += 4
                arg1.b = *(esi_2 - 4)
                arg2 += 4
                ebx.b = *(esi_2 - 3)
                *(arg2 - 4) = eax_10
                eax = *(esi_2 - 1)
                *(arg2 - 3) = eax
                *(arg2 - 2) = arg1.b
                *(arg2 - 1) = ebx.b
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else if (i_5 != 0)
        int32_t i_3
        
        do
            eax = *(esi_2 + 1)
            esi_2 += 2
            arg1.b = *(esi_2 - 2)
            arg2 += 2
            *(arg2 - 2) = eax
            *(arg2 - 1) = arg1.b
            i_3 = i_5
            i_5 -= 1
        while (i_3 != 1)

return eax
