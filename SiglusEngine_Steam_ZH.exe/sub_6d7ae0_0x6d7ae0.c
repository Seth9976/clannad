// 函数: sub_6d7ae0
// 地址: 0x6d7ae0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3

if (*(arg3 + 9) != 8 || *(arg3 + 0xa) != 1)
    return 

if (arg4 == 1)
    int32_t i_5 = *arg3
    int32_t ecx_2 = 0
    char* esi_2 = arg2
    int32_t eax_14 = 0x80
    
    if (i_5 != 0)
        int32_t i
        
        do
            if (*arg2 != 0)
                ecx_2 |= eax_14
            
            arg2 = &arg2[1]
            
            if (eax_14 s<= 1)
                *esi_2 = ecx_2.b
                eax_14 = 0x80
                esi_2 = &esi_2[1]
                ecx_2 = 0
            else
                eax_14 s>>= 1
            
            i = i_5
            i_5 -= 1
        while (i != 1)
        
        if (eax_14 != 0x80)
            *esi_2 = ecx_2.b
else
    int32_t ebx_1
    char* esi_1
    bool cond:1_1
    
    if (arg4 == 2)
        int32_t i_4 = *arg3
        esi_1 = arg2
        ebx_1 = 0
        int32_t ecx_1 = 6
        
        if (i_4 != 0)
            int32_t i_1
            
            do
                ebx_1 |= (zx.d(*arg2) & 3) << ecx_1.b
                
                if (ecx_1 != 0)
                    ecx_1 -= 2
                else
                    *esi_1 = ebx_1.b
                    ecx_1 = 6
                    esi_1 = &esi_1[1]
                    ebx_1 = 0
                
                arg2 = &arg2[1]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            cond:1_1 = ecx_1 == 6
        label_6d7b44:
            
            if (not(cond:1_1))
                *esi_1 = ebx_1.b
    else if (arg4 == 4)
        int32_t i_3 = *arg3
        int32_t ecx = arg4
        ebx_1 = 0
        esi_1 = arg2
        
        if (i_3 != 0)
            int32_t i_2
            
            do
                ebx_1 |= (zx.d(*arg2) & 0xf) << ecx.b
                
                if (ecx != 0)
                    ecx -= 4
                else
                    *esi_1 = ebx_1.b
                    ecx = 4
                    esi_1 = &esi_1[1]
                    ebx_1 = 0
                
                arg2 = &arg2[1]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            cond:1_1 = ecx == 4
            goto label_6d7b44

char eax_7 = arg4.b
*(arg3 + 9) = eax_7
eax_7 = muls.dp.b(eax_7, *(arg3 + 0xa))
*(arg3 + 0xb) = eax_7
uint32_t eax_8 = zx.d(eax_7)

if (eax_7 u>= 8)
    arg3[1] = (eax_8 u>> 3) * *arg3
    return 

arg3[1] = (eax_8 * *arg3 + 7) u>> 3
