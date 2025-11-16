// 函数: sub_48b340
// 地址: 0x48b340
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = data_108f2d4 != 2
*arg2 = 0
int32_t var_1c
int32_t var_14
int32_t var_10

if (cond:0)
    int32_t eax_6 = *(arg1 * 0x1d4 + 0x1090bfc)
    
    if (eax_6 == 0xffffffff)
        eax_6 = data_703790
    
    var_1c = eax_6
    var_10 = *(arg1 * 0x3920 + 0xf89b14)
    var_14 = *(arg1 * 0x3920 + 0xf89b18)
else
    var_10 = 0
    var_14 = 0
    int32_t eax_3 = *(data_131d2d0 * 0x10c + 0x1098084)
    
    if (eax_3 == 0xffffffff)
        eax_3 = data_703790
    
    var_1c = eax_3

bool cond:1 = data_13130c0.d != 0
void* ecx_2 = data_13130dc
data_13130dc = 0xffffffff

if (not(cond:1))
    data_108f304 = 0xffffffff
    return 0xffffffff

int32_t edi = data_131310c
int32_t eax_10 = 0
int32_t result_2 = 0
int32_t var_18 = 0
int32_t edx = 0
int32_t result_1 = 0
int32_t var_c = 0

if (data_13701f0 != 0 || data_1370238 != 0 || data_1370214 != 0 || data_137025c != 0)
    if (edi - data_1ff4cc4 u< 0x1e)
        eax_10 = 0
    else
        eax_10 = 1
        data_1ff4cc4 = edi
        var_18 = 1

int32_t* eax_13
void* ecx_3

if (data_13701ed != 0 || (data_13701ec != 0 && eax_10 != 0))
    if (ecx_2 != 0xffffffff)
        eax_13 = ecx_2 - 1
        ecx_3 = data_13130c0:8
    else
        ecx_3 = data_13130c0:8
        eax_13 = ecx_3 - 1
    
    edx = 0xffffffff
    var_c = 0xffffffff
else
    eax_13 = arg2
    ecx_3 = data_13130c0:8

if (data_1370235 != 0 || (data_1370234 != 0 && var_18 != 0))
    if (ecx_2 != 0xffffffff)
        eax_13 = ecx_2 + 1
    else
        eax_13 = nullptr
    
    edx = 1
    var_c = 1
label_48b4d4:
    int32_t* edi_2
    
    while (true)
        if (eax_13 s<= 0xffffffff)
            eax_13 = ecx_3 - 1
        else if (eax_13 s>= ecx_3)
            eax_13 = nullptr
        
        edi_2 = eax_13 * 0x2c + data_13130c0:4
        
        if (edi_2[5] == 0)
            break
        
        eax_13 += edx
    
    int32_t ecx_4 = edi_2[1]
    int32_t eax_19
    int32_t edx_1
    edx_1:eax_19 = sx.q(edi_2[3] - ecx_4)
    int32_t eax_21 = (eax_19 - edx_1) s>> 1
    sub_4d5970(*edi_2 + eax_21 + var_10, eax_21 + ecx_4 + var_14)
    edi = data_131310c
    ecx_3 = data_13130c0:8
    edx = var_c
    data_108f2f0 = 1
else
    if (edx != 0)
        goto label_48b4d4
    
    if (data_108f2f4 != data_131d2cc || data_108f2f8 != data_1320e58)
        data_108f2f0 = 1

int32_t eax_28

if (data_108f2e0 == 0)
    eax_28 = data_108f2e8
else
    if (edx == 0 && data_108f2ec == 0 && var_1c != 0)
        void* eax_22 = nullptr
        int32_t* edi_4
        
        while (true)
            if (eax_22 s<= 0xffffffff)
                eax_22 = ecx_3 - 1
            else if (eax_22 s>= ecx_3)
                eax_22 = nullptr
            
            edi_4 = eax_22 * 0x2c + data_13130c0:4
            
            if (edi_4[5] == 0)
                break
            
            eax_22 += 1
        
        int32_t ecx_8 = edi_4[1]
        int32_t eax_25
        int32_t edx_5
        edx_5:eax_25 = sx.q(edi_4[3] - ecx_8)
        int32_t eax_27 = (eax_25 - edx_5) s>> 1
        int32_t edi_7 = *edi_4 + eax_27 + var_10
        int32_t esi_1 = eax_27 + ecx_8 + var_14
        sub_4d5970(edi_7, esi_1)
        data_108f2f4 = edi_7
        edi = data_131310c
        data_108f2f8 = esi_1
        result_2 = 0
        data_108f2ec = 1
    
    eax_28 = edi
    data_108f2e0 = 0
    data_108f2e8 = eax_28

if (data_703798 == 0 || edi - eax_28 u>= data_12dc62c)
    data_108f2fc = 1
    data_108f300 = 1
else if (data_108f2fc != 0 || data_108f2f0 != 0)
    data_108f300 = 1

int32_t edi_9 = data_13130c0:8
int32_t* ecx_10 = data_13130c0:4
int32_t edx_7 = data_13130e0
int32_t var_c_1 = 0

if (edi_9 s> 0)
    int32_t eax_29 = 0
    
    while (true)
        if (ecx_10[5] == 0)
            if (data_131d2cc s>= *ecx_10 + var_10 && data_131d2cc s<= ecx_10[2] + var_10
                    && data_1320e58 s>= ecx_10[1] + var_14 && data_1320e58 s<= ecx_10[3] + var_14)
                break
            
            eax_29 = var_c_1
        
        eax_29 += 1
        ecx_10 = &ecx_10[0xb]
        var_c_1 = eax_29
        
        if (eax_29 s>= edi_9)
            goto label_48b66e

int32_t ecx_11

if (edi_9 s> 0 && (edx_7 == 0xffffffff || edx_7 == var_c_1))
    ecx_11 = var_c_1
    data_13130dc = ecx_11
else
label_48b66e:
    ecx_11 = data_13130dc

int32_t result

if (ecx_11 == 0xffffffff)
    if (data_13702a1 != 0)
    label_48b71f:
        edx_7 = 0xfffffffe
        data_13130e0 = 0xfffffffe
    label_48b781:
        
        if (data_13702a0 != 0)
            if (edx_7 s>= 0)
                result_2 = 4
            
            result = result_2
        else
            data_13130e0 = 0xffffffff
            result = result_1
    else if (data_13702a2 == 0)
        if (data_108f2d8 == 0 || data_137027e == 0 || data_108f300 == 0)
            goto label_48b781
        
        result = 2
    else
    label_48b73c:
        
        if (edx_7 s>= 0)
            result_2 = 5
        
        edx_7 = 0xffffffff
        result_1 = result_2
        data_13130e0 = 0xffffffff
        
        if (result_2 == 3)
            goto label_48b752
        
        if (result_2 == 0)
            goto label_48b781
        
        result = result_1
else if (data_13702a1 != 0)
    if (data_108f300 == 0)
        goto label_48b71f
    
    data_13130e0 = ecx_11
    result = 4
else if (data_13702a2 == 0)
    if (data_108f2d8 == 0 || data_137027e == 0)
        if (ecx_11 == ecx_2)
            goto label_48b781
        
        result_2 = 3
        result_1 = 3
    label_48b752:
        sub_4a1e40(0)
        edx_7 = data_13130e0
        ecx_11 = data_13130dc
        goto label_48b781
    
    if (data_108f300 == 0)
        goto label_48b781
    
    result = 2
else
    if (data_108f300 == 0 || edx_7 != ecx_11)
        goto label_48b73c
    
    result = 1
    sub_4847d0()

if (result == 1)
    *arg2 = *(ecx_11 * 0x2c + data_13130c0:4 + 0x1c)
else if (result == 2)
    data_108f304 = result
    *arg2 = 0xffffffff
    return result

data_108f304 = result
return result
