// 函数: sub_721360
// 地址: 0x721360
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

bool cond:0 = *(arg1 + 0x1a8) != 0
int32_t edx = *(arg1 + 0x1ac)
int32_t eax = *(arg1 + 0x1b8)
int32_t ebx = *(arg1 + 0x1b4)
int32_t var_8 = edx
int32_t var_10 = edx
int32_t edx_1 = *(arg1 + 0x1b0)
int32_t var_c = edx_1
int32_t var_14 = edx_1
int32_t var_18 = ebx
int32_t var_20 = eax
int32_t var_1c = eax

if (not(cond:0))
    char result = sub_7224a0(&var_10, &var_14, &var_18, &var_1c, *(arg1 + 0x40), *(arg1 + 0x44), 
        *(arg1 + 0x48), *(arg1 + 0x4c))
    
    if (result == 0)
        return result
    
    ebx = var_18
    var_8 = var_10
    var_c = var_14
    var_20 = var_1c

int32_t ecx = *(arg1 + 0x1b4)
int32_t edi_1 = *(arg1 + 0x1ac)
int32_t ecx_1 = ecx - edi_1

if (ecx - edi_1 s< 0)
    ecx_1 = neg.d(ecx_1)

int32_t eax_4 = *(arg1 + 0x1b8)
int32_t edx_2 = *(arg1 + 0x1b0)
int32_t eax_5 = eax_4 - edx_2

if (eax_4 - edx_2 s< 0)
    eax_5 = neg.d(eax_5)

int32_t i_1

if (ecx_1 + 1 s<= eax_5 + 1)
    *(arg1 + 0x1d4) = eax_5 + 1
    i_1 = edx_2 - var_c
else
    i_1 = edi_1 - var_8
    *(arg1 + 0x1d4) = ecx_1 + 1

int32_t eax_8 = neg.d(*(arg1 + 0x1d4))
*(arg1 + 0x1d8) = eax_8
bool cond:3_1 = i_1 s<= 0

if (i_1 != 0)
    if (i_1 s< 0)
        i_1 = neg.d(i_1)
        cond:3_1 = i_1 s<= 0
    
    if (not(cond:3_1))
        int32_t i
        
        do
            int32_t temp8_1 = eax_8
            eax_8 += *(arg1 + 0x1d0)
            
            if (temp8_1 + *(arg1 + 0x1d0) s>= 0)
                int32_t ecx_3 = *(arg1 + 0x1bc)
                int32_t edx_3 = *(arg1 + 0x1c4)
                int32_t temp11_1
                
                do
                    ecx_3 += 1
                    edx_3 += 4
                    temp11_1 = eax_8
                    eax_8 -= *(arg1 + 0x1d4)
                while (temp11_1 - *(arg1 + 0x1d4) s>= 0)
                *(arg1 + 0x1bc) = ecx_3
                *(arg1 + 0x1c4) = edx_3
            
            i = i_1
            i_1 -= 1
        while (i != 1)
        *(arg1 + 0x1d8) = eax_8

if (*(arg1 + 0x8c) != 0)
    sub_720650(arg1, *(arg1 + 0x1bc), *(arg1 + 0x1c0), 0)

int32_t eax_9 = *(arg1 + 0x28)

if (*(arg1 + 0x1a8) == 0)
    eax_9 += (*(arg1 + 0x2c) * var_c + var_8) << 2

int32_t edi_3 = 4
int32_t ecx_9 = *(arg1 + 0x2c) << 2
int32_t ebx_1 = ebx - var_8
*(arg1 + 0x1dc) = eax_9

if (ebx - var_8 s< 0)
    ebx_1 = neg.d(ebx_1)
    edi_3 = 0xfffffffc

int32_t edx_5 = var_20 - var_c

if (var_20 - var_c s< 0)
    edx_5 = neg.d(edx_5)
    ecx_9 = neg.d(ecx_9)

if (edx_5 == 0)
    *(arg1 + 0x1e0) = edx_5
    
    if (ebx_1 != 0)
        *(arg1 + 0x1e4) = edi_3
        *(arg1 + 0x1f0) = ebx_1
        *(arg1 + 0x1f4) = edi_3
    else
        *(arg1 + 0x1e4) = ebx_1
        *(arg1 + 0x1f0) = ebx_1
        *(arg1 + 0x1f4) = ebx_1
else if (ebx_1 != 0)
    *(arg1 + 0x1e0) = 1
    
    if (ebx_1 s<= edx_5)
        *(arg1 + 0x1f8) = edi_3
        *(arg1 + 0x1e4) = neg.d(edx_5)
        *(arg1 + 0x1e8) = ebx_1 * 2
        *(arg1 + 0x1ec) = edx_5 * 2
        *(arg1 + 0x1f4) = ecx_9
        *(arg1 + 0x1f0) = edx_5
    else
        *(arg1 + 0x1f0) = ebx_1
        *(arg1 + 0x1f4) = edi_3
        *(arg1 + 0x1e4) = neg.d(ebx_1)
        *(arg1 + 0x1e8) = edx_5 * 2
        *(arg1 + 0x1ec) = ebx_1 * 2
        *(arg1 + 0x1f8) = ecx_9
else
    *(arg1 + 0x1e0) = ebx_1
    *(arg1 + 0x1e4) = ecx_9
    *(arg1 + 0x1f4) = ecx_9
    *(arg1 + 0x1f0) = edx_5

int32_t __saved_ebp
return sub_767310(&__saved_ebp, arg1 + 0xd0, 1, arg2)
