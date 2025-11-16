// 函数: sub_4e5220
// 地址: 0x4e5220
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_9 = data_20c0538
int32_t eax = data_1c04440
int32_t result_4 = ecx_9 - data_20c053c

if (eax == 0)
    data_20c0540 = 0
    data_20c0544 = 0
    data_20c054c = 0xffffffff
    data_20c053c = ecx_9
else
    int32_t ecx = 0
    
    if (result_4 s> 0xfa)
        result_4 = 0
    
    int32_t esi_1
    
    if (data_20c054c == eax)
        if (data_20c0544 == 0)
            ecx = data_20c0540
            goto label_4e5266
        
        int32_t eax_5 = data_20c0540
        int32_t ecx_2 = 0
        (&data_20c0510)[eax_5] = result_4
        int32_t eax_6 = eax_5 + 1
        
        if (eax_6 s>= 0xa)
            eax_6 = 0
        
        esi_1 = 0
        data_20c0540 = eax_6
        int32_t eax_7 = data_20c0510
        
        if (eax_7 != 0)
            esi_1 = eax_7
            ecx_2 = 1
        
        int32_t eax_8 = data_20c0514
        
        if (eax_8 != 0)
            esi_1 += eax_8
            ecx_2 += 1
        
        int32_t eax_9 = data_20c0518
        
        if (eax_9 != 0)
            esi_1 += eax_9
            ecx_2 += 1
        
        int32_t eax_10 = data_20c051c
        
        if (eax_10 != 0)
            esi_1 += eax_10
            ecx_2 += 1
        
        int32_t eax_11 = data_20c0520
        
        if (eax_11 != 0)
            esi_1 += eax_11
            ecx_2 += 1
        
        int32_t eax_12 = data_20c0524
        
        if (eax_12 != 0)
            esi_1 += eax_12
            ecx_2 += 1
        
        int32_t eax_13 = data_20c0528
        
        if (eax_13 != 0)
            esi_1 += eax_13
            ecx_2 += 1
        
        int32_t eax_14 = data_20c052c
        
        if (eax_14 != 0)
            esi_1 += eax_14
            ecx_2 += 1
        
        int32_t eax_15 = data_20c0530
        
        if (eax_15 != 0)
            esi_1 += eax_15
            ecx_2 += 1
        
        int32_t eax_16 = data_20c0534
        
        if (eax_16 != 0)
            esi_1 += eax_16
            ecx_2 += 1
        
        if (ecx_2 != 0)
            esi_1 = divs.dp.d(sx.q(esi_1), ecx_2)
    else
        data_20c0544 = 0
    label_4e5266:
        (&data_20c0510)[ecx] = result_4
        int32_t ecx_1 = ecx + 1
        
        if (ecx_1 s> 0xa)
            ecx_1 = 0xa
        
        esi_1 = 0
        int32_t edi_1 = 0
        data_20c0540 = ecx_1
        int32_t eax_1 = 0
        
        if (ecx_1 s> 0)
            do
                int32_t edx_1 = (&data_20c0510)[eax_1]
                
                if (edx_1 != 0)
                    esi_1 += edx_1
                    edi_1 += 1
                
                eax_1 += 1
            while (eax_1 s< ecx_1)
            
            if (edi_1 != 0)
                esi_1 = divs.dp.d(sx.q(esi_1), edi_1)
        
        if (ecx_1 s>= 0xa)
            data_20c0540 = 0
            data_20c0544 = 1
    
    int32_t ecx_6 = data_1c04440
    int32_t edi_3
    
    if (ecx_6 == 1)
        int32_t eax_33
        int32_t edx_10
        edx_10:eax_33 = sx.q(esi_1)
        edi_3 = (((edx_10 & 3) + eax_33) s>> 2) + esi_1
    else if (ecx_6 == 2)
        int32_t eax_30
        int32_t edx_9
        edx_9:eax_30 = sx.q(esi_1)
        edi_3 = ((eax_30 - edx_9) s>> 1) + esi_1
    else if (ecx_6 == 3)
        int32_t eax_25
        int32_t edx_6
        edx_6:eax_25 = sx.q(esi_1)
        int32_t eax_27
        int32_t edx_8
        edx_8:eax_27 = sx.q(esi_1)
        edi_3 = ((eax_27 - edx_8) s>> 1) + (((edx_6 & 3) + eax_25) s>> 2) + esi_1
        ecx_6 = data_1c04440
    else
        edi_3 = (ecx_6 - 2) * esi_1
    
    data_20c054c = ecx_6
    
    if (edi_3 s> 0xfa)
        edi_3 = 0xfa
    
    uint32_t eax_34
    
    do
        Sleep(1)
        eax_34 = timeGetTime()
        data_20c0538 = eax_34
        result_4 = eax_34 - data_20c053c
    while (result_4 s< edi_3)
    
    data_20c053c = eax_34
    Sleep(1)

int32_t result_3 = data_1af0a0c
int32_t result = data_1392710
data_1b8c218 = result
int32_t result_1

if (result_3 s< 0)
    result_1 = 0
else if (result_3 s<= 0)
    result_1 = result_4
    
    if (result_4 s<= 0)
        result_1 = 0
    
    result = GetFocus()
    
    if (result == data_7027bc || (data_139270c != 0xffffffff && result == data_1bfe270))
        result = GetAsyncKeyState(0x10)
        
        if ((0x8000 & result.w) == 0)
            goto label_4e5483
    else
    label_4e5483:
        int32_t ecx_7 = data_187c510
        
        if (ecx_7 != 0xffffffff)
            result = data_187a5c8
            
            if (result s> 0)
                result_1 *= result
            
            if (ecx_7 s<= 0)
                data_1bfe030 = 0
            else
                int32_t eax_36
                int32_t edx_12
                edx_12:eax_36 = sx.q(result_1 + data_1bfe030)
                result = divs.dp.d(edx_12:eax_36, ecx_7)
                result_1 = result
                data_1bfe030 = mods.dp.d(edx_12:eax_36, ecx_7)
        else
            result_1 = 0
    
    result_3 = data_1af0a0c
else
    result_1 = result_3

data_1392710 += result_1
data_1b8a718 += result_1
bool cond:1 = data_1af0a08 == 0
int32_t edx_14 = data_131310c
data_1b8c21c = edx_14

if (not(cond:1))
    if (result_3 s< 0)
        result_4 = 0
    else if (result_3 s<= 0)
        int32_t result_2 = data_1b8c214
        result = 0
        
        if (result_4 s<= 0)
            result_4 = 0
        
        if (data_187c514 != 0xffffffff)
            result = data_187a5cc
            
            if (result s> 0)
                result_4 *= result
                result_2 *= result
            
            if (data_187c514 s<= 0)
                data_1b1bd0c = 0
            else
                int32_t eax_38
                int32_t edx_15
                edx_15:eax_38 = sx.q(result_4 + data_1b1bd0c)
                result_4 = divs.dp.d(edx_15:eax_38, data_187c514)
                data_1b1bd0c = mods.dp.d(edx_15:eax_38, data_187c514)
                result = divs.dp.d(sx.q(result_2), data_187c514)
                edx_14 = data_131310c
                result_2 = result
                
                if (result_2 s<= 0)
                    result_2 = 1
        else
            result_4 = 0
            result_2 = 0
        
        if (data_1b8c214 s> 0 && result_4 s> result_2)
            result_4 = result_2
    else
        result_4 = result_3
    
    data_1b14a28 += result_4
    data_131310c = edx_14 + result_4

data_1af0a08 = 1
data_187c514 = 0
data_187a5cc = 0
data_187c510 = 0
data_187a5c8 = 0

if (result_3 s< 0)
    data_1af0a0c = result_3 + 1
    return result

if (result_3 s> 0)
    result_3 = 0xfffffff6

data_1af0a0c = result_3
return 0xfffffff6
