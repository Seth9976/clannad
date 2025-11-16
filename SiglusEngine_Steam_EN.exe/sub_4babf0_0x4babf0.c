// 函数: sub_4babf0
// 地址: 0x4babf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
arg1[8] += arg2

if (arg1[8] u>= arg1[7])
    sub_4ba9a0(arg1)

arg1[0xf] += arg2
int32_t result

if (arg1[0xf] u>= arg1[0xe])
    result = sub_4baae0(arg1)
else
    result = 0

int32_t ecx_1 = arg1[0xd]

if (ecx_1 s> 0)
    arg1[2] = 0
else if (ecx_1 s< 0)
    arg1[2] = 1

if (result == 0)
    arg1[0xc] += arg2
    int32_t ecx_2 = arg1[0xb]
    uint32_t edi_1 = arg1[0xc]
    
    if (ecx_2 != 0)
        int32_t edx = 0
        uint32_t temp1_1 = modu.dp.d(edx:edi_1, ecx_2)
        edi_1 = divu.dp.d(edx:edi_1, ecx_2)
        arg1[0xc] = temp1_1
    else
        arg1[0xc] = ecx_2
    
    int32_t eax_4 = arg1[6]
    int32_t result_2
    
    if (eax_4 s> 0)
        result_2 = arg1[5]
    else if (eax_4 s>= 0)
        result_2 = arg1[4]
    else
        result_2 = arg1[3]
    
    int32_t result_1 = result_2
    
    if (arg1[2] != 0)
        result_1 = neg.d(result_1)
    
    int32_t eax_5 = *arg1
    
    if (eax_5 s> result_2)
        int32_t eax_6 = eax_5 - edi_1
        *arg1 = eax_6
        
        if (eax_6 s< result_2)
            *arg1 = result_2
    else if (eax_5 s< result_2)
        int32_t result_3 = eax_5 + edi_1
        
        if (result_3 s> result_2)
            result_3 = result_2
        
        *arg1 = result_3
    
    result = arg1[1]
    
    if (result s> result_1)
        result -= edi_1
        arg1[1] = result
        
        if (result s< result_1)
            arg1[1] = result_1
    else if (result s< result_1)
        result += edi_1
        
        if (result s> result_1)
            result = result_1
        
        arg1[1] = result

return result
